; Auto-generated. Do not edit!


(cl:in-package stdr_msgs-srv)


;//! \htmlinclude AddRfidTag-request.msg.html

(cl:defclass <AddRfidTag-request> (roslisp-msg-protocol:ros-message)
  ((newTag
    :reader newTag
    :initarg :newTag
    :type stdr_msgs-msg:RfidTag
    :initform (cl:make-instance 'stdr_msgs-msg:RfidTag)))
)

(cl:defclass AddRfidTag-request (<AddRfidTag-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <AddRfidTag-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'AddRfidTag-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name stdr_msgs-srv:<AddRfidTag-request> is deprecated: use stdr_msgs-srv:AddRfidTag-request instead.")))

(cl:ensure-generic-function 'newTag-val :lambda-list '(m))
(cl:defmethod newTag-val ((m <AddRfidTag-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader stdr_msgs-srv:newTag-val is deprecated.  Use stdr_msgs-srv:newTag instead.")
  (newTag m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <AddRfidTag-request>) ostream)
  "Serializes a message object of type '<AddRfidTag-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'newTag) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <AddRfidTag-request>) istream)
  "Deserializes a message object of type '<AddRfidTag-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'newTag) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<AddRfidTag-request>)))
  "Returns string type for a service object of type '<AddRfidTag-request>"
  "stdr_msgs/AddRfidTagRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'AddRfidTag-request)))
  "Returns string type for a service object of type 'AddRfidTag-request"
  "stdr_msgs/AddRfidTagRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<AddRfidTag-request>)))
  "Returns md5sum for a message object of type '<AddRfidTag-request>"
  "257a3ebd6cd76d8346fa749295629845")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'AddRfidTag-request)))
  "Returns md5sum for a message object of type 'AddRfidTag-request"
  "257a3ebd6cd76d8346fa749295629845")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<AddRfidTag-request>)))
  "Returns full string definition for message of type '<AddRfidTag-request>"
  (cl:format cl:nil "stdr_msgs/RfidTag newTag~%~%================================================================================~%MSG: stdr_msgs/RfidTag~%# Rfid tag description~%~%string tag_id~%string message~%geometry_msgs/Pose2D pose # sensor pose, relative to the map origin~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'AddRfidTag-request)))
  "Returns full string definition for message of type 'AddRfidTag-request"
  (cl:format cl:nil "stdr_msgs/RfidTag newTag~%~%================================================================================~%MSG: stdr_msgs/RfidTag~%# Rfid tag description~%~%string tag_id~%string message~%geometry_msgs/Pose2D pose # sensor pose, relative to the map origin~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# Deprecated~%# Please use the full 3D pose.~%~%# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.~%~%# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.~%~%~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <AddRfidTag-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'newTag))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <AddRfidTag-request>))
  "Converts a ROS message object to a list"
  (cl:list 'AddRfidTag-request
    (cl:cons ':newTag (newTag msg))
))
;//! \htmlinclude AddRfidTag-response.msg.html

(cl:defclass <AddRfidTag-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil)
   (message
    :reader message
    :initarg :message
    :type cl:string
    :initform ""))
)

(cl:defclass AddRfidTag-response (<AddRfidTag-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <AddRfidTag-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'AddRfidTag-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name stdr_msgs-srv:<AddRfidTag-response> is deprecated: use stdr_msgs-srv:AddRfidTag-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <AddRfidTag-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader stdr_msgs-srv:success-val is deprecated.  Use stdr_msgs-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <AddRfidTag-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader stdr_msgs-srv:message-val is deprecated.  Use stdr_msgs-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <AddRfidTag-response>) ostream)
  "Serializes a message object of type '<AddRfidTag-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <AddRfidTag-response>) istream)
  "Deserializes a message object of type '<AddRfidTag-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'message) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'message) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<AddRfidTag-response>)))
  "Returns string type for a service object of type '<AddRfidTag-response>"
  "stdr_msgs/AddRfidTagResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'AddRfidTag-response)))
  "Returns string type for a service object of type 'AddRfidTag-response"
  "stdr_msgs/AddRfidTagResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<AddRfidTag-response>)))
  "Returns md5sum for a message object of type '<AddRfidTag-response>"
  "257a3ebd6cd76d8346fa749295629845")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'AddRfidTag-response)))
  "Returns md5sum for a message object of type 'AddRfidTag-response"
  "257a3ebd6cd76d8346fa749295629845")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<AddRfidTag-response>)))
  "Returns full string definition for message of type '<AddRfidTag-response>"
  (cl:format cl:nil "bool success~%string message~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'AddRfidTag-response)))
  "Returns full string definition for message of type 'AddRfidTag-response"
  (cl:format cl:nil "bool success~%string message~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <AddRfidTag-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <AddRfidTag-response>))
  "Converts a ROS message object to a list"
  (cl:list 'AddRfidTag-response
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'AddRfidTag)))
  'AddRfidTag-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'AddRfidTag)))
  'AddRfidTag-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'AddRfidTag)))
  "Returns string type for a service object of type '<AddRfidTag>"
  "stdr_msgs/AddRfidTag")