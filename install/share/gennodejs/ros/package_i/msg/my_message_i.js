// Auto-generated. Do not edit!

// (in-package package_i.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class my_message_i {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.adc0 = null;
      this.adc1 = null;
      this.adc2 = null;
      this.adc3 = null;
      this.adc4 = null;
      this.adc5 = null;
      this.adc6 = null;
      this.adc7 = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('adc0')) {
        this.adc0 = initObj.adc0
      }
      else {
        this.adc0 = 0;
      }
      if (initObj.hasOwnProperty('adc1')) {
        this.adc1 = initObj.adc1
      }
      else {
        this.adc1 = 0;
      }
      if (initObj.hasOwnProperty('adc2')) {
        this.adc2 = initObj.adc2
      }
      else {
        this.adc2 = 0;
      }
      if (initObj.hasOwnProperty('adc3')) {
        this.adc3 = initObj.adc3
      }
      else {
        this.adc3 = 0;
      }
      if (initObj.hasOwnProperty('adc4')) {
        this.adc4 = initObj.adc4
      }
      else {
        this.adc4 = 0;
      }
      if (initObj.hasOwnProperty('adc5')) {
        this.adc5 = initObj.adc5
      }
      else {
        this.adc5 = 0;
      }
      if (initObj.hasOwnProperty('adc6')) {
        this.adc6 = initObj.adc6
      }
      else {
        this.adc6 = 0;
      }
      if (initObj.hasOwnProperty('adc7')) {
        this.adc7 = initObj.adc7
      }
      else {
        this.adc7 = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type my_message_i
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [adc0]
    bufferOffset = _serializer.uint16(obj.adc0, buffer, bufferOffset);
    // Serialize message field [adc1]
    bufferOffset = _serializer.uint16(obj.adc1, buffer, bufferOffset);
    // Serialize message field [adc2]
    bufferOffset = _serializer.uint16(obj.adc2, buffer, bufferOffset);
    // Serialize message field [adc3]
    bufferOffset = _serializer.uint16(obj.adc3, buffer, bufferOffset);
    // Serialize message field [adc4]
    bufferOffset = _serializer.uint16(obj.adc4, buffer, bufferOffset);
    // Serialize message field [adc5]
    bufferOffset = _serializer.uint16(obj.adc5, buffer, bufferOffset);
    // Serialize message field [adc6]
    bufferOffset = _serializer.uint16(obj.adc6, buffer, bufferOffset);
    // Serialize message field [adc7]
    bufferOffset = _serializer.uint16(obj.adc7, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type my_message_i
    let len;
    let data = new my_message_i(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [adc0]
    data.adc0 = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [adc1]
    data.adc1 = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [adc2]
    data.adc2 = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [adc3]
    data.adc3 = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [adc4]
    data.adc4 = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [adc5]
    data.adc5 = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [adc6]
    data.adc6 = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [adc7]
    data.adc7 = _deserializer.uint16(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 16;
  }

  static datatype() {
    // Returns string type for a message object
    return 'package_i/my_message_i';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'be7b48f6f2072307fea1b4cde906d267';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # message definition
    #geometry_msgs/WrenchStamped wrench
    #uint32 score
    Header header
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new my_message_i(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.adc0 !== undefined) {
      resolved.adc0 = msg.adc0;
    }
    else {
      resolved.adc0 = 0
    }

    if (msg.adc1 !== undefined) {
      resolved.adc1 = msg.adc1;
    }
    else {
      resolved.adc1 = 0
    }

    if (msg.adc2 !== undefined) {
      resolved.adc2 = msg.adc2;
    }
    else {
      resolved.adc2 = 0
    }

    if (msg.adc3 !== undefined) {
      resolved.adc3 = msg.adc3;
    }
    else {
      resolved.adc3 = 0
    }

    if (msg.adc4 !== undefined) {
      resolved.adc4 = msg.adc4;
    }
    else {
      resolved.adc4 = 0
    }

    if (msg.adc5 !== undefined) {
      resolved.adc5 = msg.adc5;
    }
    else {
      resolved.adc5 = 0
    }

    if (msg.adc6 !== undefined) {
      resolved.adc6 = msg.adc6;
    }
    else {
      resolved.adc6 = 0
    }

    if (msg.adc7 !== undefined) {
      resolved.adc7 = msg.adc7;
    }
    else {
      resolved.adc7 = 0
    }

    return resolved;
    }
};

module.exports = my_message_i;
