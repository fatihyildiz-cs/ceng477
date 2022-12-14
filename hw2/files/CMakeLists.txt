cmake_minimum_required(VERSION 3.17)
project(files)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

#find_package (jpeg REQUIRED)
#target_link_libraries(files jpeg::jpeg)

#target_link_libraries(files ${JPEG_LIBRARIES})
#target_add_include_directories(files ${JPEG_INCLUDE_DIR})



add_executable(files
        hw2_sample_scenes/earth_and_moon.xml
        hw2_sample_scenes/horse.xml
        hw2_sample_scenes/simple_transform.xml
        hw2_sample_scenes/skybox.xml
        hw2_sample_scenes/spheres_texture_bilinear.xml
        hw2_sample_scenes/spheres_texture_nearest.xml
        hw2_sample_scenes/spheres_transform.xml
        sample_main_files/main_for_jpeg_to_ppm.cpp
        sample_main_files/main_for_matrix_inversion.cpp
        sample_main_files/main_for_write_jpeg_file.cpp
        camera.cpp
        camera.h
        ctpl_stl.h
        hit_record.h
        image.cpp
        image.h
        integrator.cpp
        integrator.h
        jpeg.cpp
        jpeg.h
        main.cpp
        Makefile
        material.cpp
        material.h
        matrixInverse.cpp
        matrixInverse.h
        mesh.cpp
        mesh.h
        parser.cpp
        parser.h
        point_light.cpp
        point_light.h
        ppm.cpp
        ppm.h
        ray.cpp
        ray.h
        rotation.cpp
        rotation.h
        scaling.cpp
        scaling.h
        scene.cpp
        scene.h
        sphere.cpp
        sphere.h
        texture.cpp
        texture.h
        timer.cpp
        timer.h
        tinyxml2.cpp
        tinyxml2.h
        translation.cpp
        translation.h
        triangle.cpp
        triangle.h
        triangular.h
        utility.h
        vector2f.h
        vector3f.h
        vector4f.h transformInfo.cpp transformInfo.h Matrix.cpp Matrix.h matrix.cpp matrix.h MappingData.cpp MappingData.h)

find_package(JPEG REQUIRED)

target_link_libraries(files ${JPEG_LIBRARIES})
target_include_directories(files PRIVATE ${JPEG_INCLUDE_DIR})

#target_link_libraries(files /usr/local/Cellar/jpeg/9d ...)
#target_include_directories(files PRIVATE /usr/local/Cellar/jpeg/9d)
