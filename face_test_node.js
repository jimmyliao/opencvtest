//var cv = require('../lib/opencv');
var cv = require('opencv');

try {
    var camera = new cv.VideoCapture(0);
    var window = new cv.NamedWindow('Video', 0)
        //camera.set(cv.CAP_PROP_AUTOFOCUS, 1);
    console.log(camera.get);

    //    setInterval(function() {
    camera.read(function(err, image) {
        if (err) throw err;
        console.log(image.size())
        if (image.size()[0] > 0 && image.size()[1] > 0) {
            window.show(image);
        }
        image.save('tmp/test.jpg');
        // window.blockingWaitKey(0, 50);
    });
    // }, 20);

} catch (e) {
    console.log("Couldn't start camera:", e)
}