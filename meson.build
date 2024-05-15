project('UniCourse', 'cpp',
  version : '0.1',
  default_options : ['cpp_std=c++14'])

hds = include_directories('include')
src = [
  './src/main.cpp',
  './src/Car.cpp',
  './src/LuxuryCar.cpp',
  './src/SportsCar.cpp',
  './src/Motorbikes.cpp',
  './src/Truck.cpp',
  './src/Vehicle.cpp',
]

executable('UniCourse',
           src,
           include_directories: hds,
           install : true)
