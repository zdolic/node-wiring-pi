{
  'targets': [
    {
      'target_name': 'wiringPi',
      'sources': [
        'src/addon.cc',
        
        'src/wiringPi.cc',
        'src/softPwm.cc',
        'src/softServo.cc',
        'src/softTone.cc',
        'src/wiringPiI2C.cc',

        'src/wiringPiSPI.cc',
        'src/wiringSerial.cc',
        'src/wiringShift.cc',

      ],
      'include_dirs': [
        'wiringPi/wiringPi',
        'wiringPi/devLib',
	'<!(node -e \"require(\'nan\')\")'
      ],
      'libraries': [
        '/usr/local/lib/libwiringPi.so',
        '/usr/local/lib/libwiringPiDev.so'
      ],
      'cflags': [
        '-Wall',
        '-std=c++11',

      ],
      'conditions': [
        [ 'OS=="mac"', {
          'xcode_settings': {
            'OTHER_CPLUSPLUSFLAGS' : [ '-std=c++11', '-stdlib=libc++'],
            'MACOSX_DEPLOYMENT_TARGET': '10.9'
          }
        }],
      ],
    }
  ]
}
