execute_process(COMMAND "/home/star/superarm_ws/build/interbotix_ros_arms/interbotix_sdk/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/star/superarm_ws/build/interbotix_ros_arms/interbotix_sdk/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
