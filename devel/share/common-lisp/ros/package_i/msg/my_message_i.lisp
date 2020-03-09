; Auto-generated. Do not edit!


(cl:in-package package_i-msg)


;//! \htmlinclude my_message_i.msg.html

(cl:defclass <my_message_i> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (adc0
    :reader adc0
    :initarg :adc0
    :type cl:fixnum
    :initform 0)
   (adc1
    :reader adc1
    :initarg :adc1
    :type cl:fixnum
    :initform 0)
   (adc2
    :reader adc2
    :initarg :adc2
    :type cl:fixnum
    :initform 0)
   (adc3
    :reader adc3
    :initarg :adc3
    :type cl:fixnum
    :initform 0)
   (adc4
    :reader adc4
    :initarg :adc4
    :type cl:fixnum
    :initform 0)
   (adc5
    :reader adc5
    :initarg :adc5
    :type cl:fixnum
    :initform 0)
   (adc6
    :reader adc6
    :initarg :adc6
    :type cl:fixnum
    :initform 0)
   (adc7
    :reader adc7
    :initarg :adc7
    :type cl:fixnum
    :initform 0))
)

(cl:defclass my_message_i (<my_message_i>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <my_message_i>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'my_message_i)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name package_i-msg:<my_message_i> is deprecated: use package_i-msg:my_message_i instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <my_message_i>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader package_i-msg:header-val is deprecated.  Use package_i-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'adc0-val :lambda-list '(m))
(cl:defmethod adc0-val ((m <my_message_i>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader package_i-msg:adc0-val is deprecated.  Use package_i-msg:adc0 instead.")
  (adc0 m))

(cl:ensure-generic-function 'adc1-val :lambda-list '(m))
(cl:defmethod adc1-val ((m <my_message_i>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader package_i-msg:adc1-val is deprecated.  Use package_i-msg:adc1 instead.")
  (adc1 m))

(cl:ensure-generic-function 'adc2-val :lambda-list '(m))
(cl:defmethod adc2-val ((m <my_message_i>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader package_i-msg:adc2-val is deprecated.  Use package_i-msg:adc2 instead.")
  (adc2 m))

(cl:ensure-generic-function 'adc3-val :lambda-list '(m))
(cl:defmethod adc3-val ((m <my_message_i>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader package_i-msg:adc3-val is deprecated.  Use package_i-msg:adc3 instead.")
  (adc3 m))

(cl:ensure-generic-function 'adc4-val :lambda-list '(m))
(cl:defmethod adc4-val ((m <my_message_i>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader package_i-msg:adc4-val is deprecated.  Use package_i-msg:adc4 instead.")
  (adc4 m))

(cl:ensure-generic-function 'adc5-val :lambda-list '(m))
(cl:defmethod adc5-val ((m <my_message_i>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader package_i-msg:adc5-val is deprecated.  Use package_i-msg:adc5 instead.")
  (adc5 m))

(cl:ensure-generic-function 'adc6-val :lambda-list '(m))
(cl:defmethod adc6-val ((m <my_message_i>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader package_i-msg:adc6-val is deprecated.  Use package_i-msg:adc6 instead.")
  (adc6 m))

(cl:ensure-generic-function 'adc7-val :lambda-list '(m))
(cl:defmethod adc7-val ((m <my_message_i>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader package_i-msg:adc7-val is deprecated.  Use package_i-msg:adc7 instead.")
  (adc7 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <my_message_i>) ostream)
  "Serializes a message object of type '<my_message_i>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc3)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc3)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc4)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc4)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc5)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc5)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc6)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc6)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc7)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc7)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <my_message_i>) istream)
  "Deserializes a message object of type '<my_message_i>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc0)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc0)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc3)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc3)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc4)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc4)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc5)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc5)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc6)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc6)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'adc7)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'adc7)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<my_message_i>)))
  "Returns string type for a message object of type '<my_message_i>"
  "package_i/my_message_i")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'my_message_i)))
  "Returns string type for a message object of type 'my_message_i"
  "package_i/my_message_i")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<my_message_i>)))
  "Returns md5sum for a message object of type '<my_message_i>"
  "be7b48f6f2072307fea1b4cde906d267")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'my_message_i)))
  "Returns md5sum for a message object of type 'my_message_i"
  "be7b48f6f2072307fea1b4cde906d267")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<my_message_i>)))
  "Returns full string definition for message of type '<my_message_i>"
  (cl:format cl:nil "# message definition~%#geometry_msgs/WrenchStamped wrench~%#uint32 score~%Header header~%uint16 adc0~%uint16 adc1~%uint16 adc2~%uint16 adc3~%uint16 adc4~%uint16 adc5~%uint16 adc6~%uint16 adc7~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'my_message_i)))
  "Returns full string definition for message of type 'my_message_i"
  (cl:format cl:nil "# message definition~%#geometry_msgs/WrenchStamped wrench~%#uint32 score~%Header header~%uint16 adc0~%uint16 adc1~%uint16 adc2~%uint16 adc3~%uint16 adc4~%uint16 adc5~%uint16 adc6~%uint16 adc7~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <my_message_i>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     2
     2
     2
     2
     2
     2
     2
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <my_message_i>))
  "Converts a ROS message object to a list"
  (cl:list 'my_message_i
    (cl:cons ':header (header msg))
    (cl:cons ':adc0 (adc0 msg))
    (cl:cons ':adc1 (adc1 msg))
    (cl:cons ':adc2 (adc2 msg))
    (cl:cons ':adc3 (adc3 msg))
    (cl:cons ':adc4 (adc4 msg))
    (cl:cons ':adc5 (adc5 msg))
    (cl:cons ':adc6 (adc6 msg))
    (cl:cons ':adc7 (adc7 msg))
))
