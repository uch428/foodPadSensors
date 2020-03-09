;; Auto-generated. Do not edit!


(when (boundp 'package_i::adc1)
  (if (not (find-package "PACKAGE_I"))
    (make-package "PACKAGE_I"))
  (shadow 'adc1 (find-package "PACKAGE_I")))
(unless (find-package "PACKAGE_I::ADC1")
  (make-package "PACKAGE_I::ADC1"))

(in-package "ROS")
;;//! \htmlinclude adc1.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass package_i::adc1
  :super ros::object
  :slots (_header _adc0 _adc1 _adc2 _adc3 _adc4 _adc5 _adc6 _adc7 ))

(defmethod package_i::adc1
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:adc0 __adc0) 0)
    ((:adc1 __adc1) 0)
    ((:adc2 __adc2) 0)
    ((:adc3 __adc3) 0)
    ((:adc4 __adc4) 0)
    ((:adc5 __adc5) 0)
    ((:adc6 __adc6) 0)
    ((:adc7 __adc7) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _adc0 (round __adc0))
   (setq _adc1 (round __adc1))
   (setq _adc2 (round __adc2))
   (setq _adc3 (round __adc3))
   (setq _adc4 (round __adc4))
   (setq _adc5 (round __adc5))
   (setq _adc6 (round __adc6))
   (setq _adc7 (round __adc7))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:adc0
   (&optional __adc0)
   (if __adc0 (setq _adc0 __adc0)) _adc0)
  (:adc1
   (&optional __adc1)
   (if __adc1 (setq _adc1 __adc1)) _adc1)
  (:adc2
   (&optional __adc2)
   (if __adc2 (setq _adc2 __adc2)) _adc2)
  (:adc3
   (&optional __adc3)
   (if __adc3 (setq _adc3 __adc3)) _adc3)
  (:adc4
   (&optional __adc4)
   (if __adc4 (setq _adc4 __adc4)) _adc4)
  (:adc5
   (&optional __adc5)
   (if __adc5 (setq _adc5 __adc5)) _adc5)
  (:adc6
   (&optional __adc6)
   (if __adc6 (setq _adc6 __adc6)) _adc6)
  (:adc7
   (&optional __adc7)
   (if __adc7 (setq _adc7 __adc7)) _adc7)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint16 _adc0
    2
    ;; uint16 _adc1
    2
    ;; uint16 _adc2
    2
    ;; uint16 _adc3
    2
    ;; uint16 _adc4
    2
    ;; uint16 _adc5
    2
    ;; uint16 _adc6
    2
    ;; uint16 _adc7
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint16 _adc0
       (write-word _adc0 s)
     ;; uint16 _adc1
       (write-word _adc1 s)
     ;; uint16 _adc2
       (write-word _adc2 s)
     ;; uint16 _adc3
       (write-word _adc3 s)
     ;; uint16 _adc4
       (write-word _adc4 s)
     ;; uint16 _adc5
       (write-word _adc5 s)
     ;; uint16 _adc6
       (write-word _adc6 s)
     ;; uint16 _adc7
       (write-word _adc7 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint16 _adc0
     (setq _adc0 (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _adc1
     (setq _adc1 (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _adc2
     (setq _adc2 (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _adc3
     (setq _adc3 (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _adc4
     (setq _adc4 (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _adc5
     (setq _adc5 (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _adc6
     (setq _adc6 (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _adc7
     (setq _adc7 (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get package_i::adc1 :md5sum-) "be7b48f6f2072307fea1b4cde906d267")
(setf (get package_i::adc1 :datatype-) "package_i/adc1")
(setf (get package_i::adc1 :definition-)
      "Header header
uint16 adc0
uint16 adc1
uint16 adc2
uint16 adc3
uint16 adc4
uint16 adc5
uint16 adc6
uint16 adc7

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

")



(provide :package_i/adc1 "be7b48f6f2072307fea1b4cde906d267")


