
(cl:in-package :asdf)

(defsystem "package_i-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "adc1" :depends-on ("_package_adc1"))
    (:file "_package_adc1" :depends-on ("_package"))
    (:file "my_message_i" :depends-on ("_package_my_message_i"))
    (:file "_package_my_message_i" :depends-on ("_package"))
  ))