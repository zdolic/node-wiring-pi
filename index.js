process.env['WIRINGPI_GPIOMEM']='1';
module.exports = require('./build/Release/wiringPi');
module.exports.VERSION = require('./package').version;
