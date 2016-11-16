{
  'targets': [
    {
      'target_name': 'wiringPi',
      'sources': [
        'src/addon.cc',
        
        'src/wiringPi.cc',

      ],
      'include_dirs': [
        'wiringPi/wiringPi',
        'wiringPi/devLib',
	'<!(node -e \"require(\'nan\')\")'
      ],
      'libraries': [
        '<!(pwd)/wiringPi/wiringPi/libwiringPi.so.<!(cat wiringPi/VERSION)',
        '<!(pwd)/wiringPi/devLib/libwiringPiDev.so.<!(cat wiringPi/VERSION)'
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
