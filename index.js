process.env['WIRINGPI_GPIOMEM']='1';
module.exports = require('bindings')('nodeWiringPi.node');
module.exports.VERSION = require('./package').version;
