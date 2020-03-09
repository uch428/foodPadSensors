;; Auto-generated. Do not edit!


(when (boundp 'rosserial_arduino::Adc)
  (if (not (find-package "ROSSERIAL_ARDUINO"))
    (make-package "ROSSERIAL_ARDUINO"))
  (shadow 'Adc (find-package "ROSSERIAL_ARDUINO")))
(unless (find-package "ROSSERIAL_ARDUINO::ADC")
  (make-package "ROSSERIAL_ARDUINO::ADC"))

(in-package "ROS")
;;//! \htmlinclude Adc.msg.html


(defclass rosserial_arduino::Adc
  :super ros::object
  :slots (_adc0 _adc1 _adc2 _adc3 _adc4 _adc5 _adc6 _adc7 ))

(defmethod rosserial_arduino::Adc
  (:init
   (&key
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
   (setq _adc0 (round __adc0))
   (setq _adc1 (round __adc1))
   (setq _adc2 (round __adc2))
   (setq _adc3 (round __adc3))
   (setq _adc4 (round __adc4))
   (setq _adc5 (round __adc5))
   (setq _adc6 (round __adc6))
   (setq _adc7 (round __adc7))
   self)
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

(setf (get rosserial_arduino::Adc :md5sum-) "2ca834e4afea0d6aab966cd82aae49f9")
(setf (get rosserial_arduino::Adc :datatype-) "rosserial_arduino/Adc")
(setf (get rosserial_arduino::Adc :definition-)
      "uint16 adc0
uint16 adc1
uint16 adc2
uint16 adc3
uint16 adc4
uint16 adc5
uint16 adc6
uint16 adc7

")



(provide :rosserial_arduino/Adc "2ca834e4afea0d6aab966cd82aae49f9")


