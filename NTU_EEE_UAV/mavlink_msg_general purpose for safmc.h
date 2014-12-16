// MESSAGE General Purpose for SAFMC PACKING

#define MAVLINK_MSG_ID_General Purpose for SAFMC 231

typedef struct __mavlink_general purpose for safmc_t
{
 uint64_t usec; ///< Timer usage
 float find_drop; ///< payload dropping target find flag
 float find_land; ///< landing area find flag
 float cam_shutter; ///< camera shutter flag
 float roll; ///< Roll angle in rad
 float pitch; ///< Pitch angle in rad
 float yaw; ///< Yaw angle in rad
} mavlink_general purpose for safmc_t;

#define MAVLINK_MSG_ID_General Purpose for SAFMC_LEN 32
#define MAVLINK_MSG_ID_231_LEN 32

#define MAVLINK_MSG_ID_General Purpose for SAFMC_CRC 5
#define MAVLINK_MSG_ID_231_CRC 5



#define MAVLINK_MESSAGE_INFO_General Purpose for SAFMC { \
	"General Purpose for SAFMC", \
	7, \
	{  { "usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_general purpose for safmc_t, usec) }, \
         { "find_drop", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_general purpose for safmc_t, find_drop) }, \
         { "find_land", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_general purpose for safmc_t, find_land) }, \
         { "cam_shutter", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_general purpose for safmc_t, cam_shutter) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_general purpose for safmc_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_general purpose for safmc_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_general purpose for safmc_t, yaw) }, \
         } \
}


/**
 * @brief Pack a general purpose for safmc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param usec Timer usage
 * @param find_drop payload dropping target find flag
 * @param find_land landing area find flag
 * @param cam_shutter camera shutter flag
 * @param roll Roll angle in rad
 * @param pitch Pitch angle in rad
 * @param yaw Yaw angle in rad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_general purpose for safmc_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t usec, float find_drop, float find_land, float cam_shutter, float roll, float pitch, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_General Purpose for SAFMC_LEN];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, find_drop);
	_mav_put_float(buf, 12, find_land);
	_mav_put_float(buf, 16, cam_shutter);
	_mav_put_float(buf, 20, roll);
	_mav_put_float(buf, 24, pitch);
	_mav_put_float(buf, 28, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN);
#else
	mavlink_general purpose for safmc_t packet;
	packet.usec = usec;
	packet.find_drop = find_drop;
	packet.find_land = find_land;
	packet.cam_shutter = cam_shutter;
	packet.roll = roll;
	packet.pitch = pitch;
	packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_General Purpose for SAFMC;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN, MAVLINK_MSG_ID_General Purpose for SAFMC_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN);
#endif
}

/**
 * @brief Pack a general purpose for safmc message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param usec Timer usage
 * @param find_drop payload dropping target find flag
 * @param find_land landing area find flag
 * @param cam_shutter camera shutter flag
 * @param roll Roll angle in rad
 * @param pitch Pitch angle in rad
 * @param yaw Yaw angle in rad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_general purpose for safmc_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t usec,float find_drop,float find_land,float cam_shutter,float roll,float pitch,float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_General Purpose for SAFMC_LEN];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, find_drop);
	_mav_put_float(buf, 12, find_land);
	_mav_put_float(buf, 16, cam_shutter);
	_mav_put_float(buf, 20, roll);
	_mav_put_float(buf, 24, pitch);
	_mav_put_float(buf, 28, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN);
#else
	mavlink_general purpose for safmc_t packet;
	packet.usec = usec;
	packet.find_drop = find_drop;
	packet.find_land = find_land;
	packet.cam_shutter = cam_shutter;
	packet.roll = roll;
	packet.pitch = pitch;
	packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_General Purpose for SAFMC;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN, MAVLINK_MSG_ID_General Purpose for SAFMC_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN);
#endif
}

/**
 * @brief Encode a general purpose for safmc struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param general purpose for safmc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_general purpose for safmc_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_general purpose for safmc_t* general purpose for safmc)
{
	return mavlink_msg_general purpose for safmc_pack(system_id, component_id, msg, general purpose for safmc->usec, general purpose for safmc->find_drop, general purpose for safmc->find_land, general purpose for safmc->cam_shutter, general purpose for safmc->roll, general purpose for safmc->pitch, general purpose for safmc->yaw);
}

/**
 * @brief Encode a general purpose for safmc struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param general purpose for safmc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_general purpose for safmc_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_general purpose for safmc_t* general purpose for safmc)
{
	return mavlink_msg_general purpose for safmc_pack_chan(system_id, component_id, chan, msg, general purpose for safmc->usec, general purpose for safmc->find_drop, general purpose for safmc->find_land, general purpose for safmc->cam_shutter, general purpose for safmc->roll, general purpose for safmc->pitch, general purpose for safmc->yaw);
}

/**
 * @brief Send a general purpose for safmc message
 * @param chan MAVLink channel to send the message
 *
 * @param usec Timer usage
 * @param find_drop payload dropping target find flag
 * @param find_land landing area find flag
 * @param cam_shutter camera shutter flag
 * @param roll Roll angle in rad
 * @param pitch Pitch angle in rad
 * @param yaw Yaw angle in rad
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_general purpose for safmc_send(mavlink_channel_t chan, uint64_t usec, float find_drop, float find_land, float cam_shutter, float roll, float pitch, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_General Purpose for SAFMC_LEN];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, find_drop);
	_mav_put_float(buf, 12, find_land);
	_mav_put_float(buf, 16, cam_shutter);
	_mav_put_float(buf, 20, roll);
	_mav_put_float(buf, 24, pitch);
	_mav_put_float(buf, 28, yaw);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_General Purpose for SAFMC, buf, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN, MAVLINK_MSG_ID_General Purpose for SAFMC_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_General Purpose for SAFMC, buf, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN);
#endif
#else
	mavlink_general purpose for safmc_t packet;
	packet.usec = usec;
	packet.find_drop = find_drop;
	packet.find_land = find_land;
	packet.cam_shutter = cam_shutter;
	packet.roll = roll;
	packet.pitch = pitch;
	packet.yaw = yaw;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_General Purpose for SAFMC, (const char *)&packet, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN, MAVLINK_MSG_ID_General Purpose for SAFMC_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_General Purpose for SAFMC, (const char *)&packet, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_General Purpose for SAFMC_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_general purpose for safmc_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t usec, float find_drop, float find_land, float cam_shutter, float roll, float pitch, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, find_drop);
	_mav_put_float(buf, 12, find_land);
	_mav_put_float(buf, 16, cam_shutter);
	_mav_put_float(buf, 20, roll);
	_mav_put_float(buf, 24, pitch);
	_mav_put_float(buf, 28, yaw);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_General Purpose for SAFMC, buf, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN, MAVLINK_MSG_ID_General Purpose for SAFMC_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_General Purpose for SAFMC, buf, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN);
#endif
#else
	mavlink_general purpose for safmc_t *packet = (mavlink_general purpose for safmc_t *)msgbuf;
	packet->usec = usec;
	packet->find_drop = find_drop;
	packet->find_land = find_land;
	packet->cam_shutter = cam_shutter;
	packet->roll = roll;
	packet->pitch = pitch;
	packet->yaw = yaw;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_General Purpose for SAFMC, (const char *)packet, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN, MAVLINK_MSG_ID_General Purpose for SAFMC_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_General Purpose for SAFMC, (const char *)packet, MAVLINK_MSG_ID_General Purpose for SAFMC_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE General Purpose for SAFMC UNPACKING


/**
 * @brief Get field usec from general purpose for safmc message
 *
 * @return Timer usage
 */
static inline uint64_t mavlink_msg_general purpose for safmc_get_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field find_drop from general purpose for safmc message
 *
 * @return payload dropping target find flag
 */
static inline float mavlink_msg_general purpose for safmc_get_find_drop(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field find_land from general purpose for safmc message
 *
 * @return landing area find flag
 */
static inline float mavlink_msg_general purpose for safmc_get_find_land(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field cam_shutter from general purpose for safmc message
 *
 * @return camera shutter flag
 */
static inline float mavlink_msg_general purpose for safmc_get_cam_shutter(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field roll from general purpose for safmc message
 *
 * @return Roll angle in rad
 */
static inline float mavlink_msg_general purpose for safmc_get_roll(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field pitch from general purpose for safmc message
 *
 * @return Pitch angle in rad
 */
static inline float mavlink_msg_general purpose for safmc_get_pitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field yaw from general purpose for safmc message
 *
 * @return Yaw angle in rad
 */
static inline float mavlink_msg_general purpose for safmc_get_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a general purpose for safmc message into a struct
 *
 * @param msg The message to decode
 * @param general purpose for safmc C-struct to decode the message contents into
 */
static inline void mavlink_msg_general purpose for safmc_decode(const mavlink_message_t* msg, mavlink_general purpose for safmc_t* general purpose for safmc)
{
#if MAVLINK_NEED_BYTE_SWAP
	general purpose for safmc->usec = mavlink_msg_general purpose for safmc_get_usec(msg);
	general purpose for safmc->find_drop = mavlink_msg_general purpose for safmc_get_find_drop(msg);
	general purpose for safmc->find_land = mavlink_msg_general purpose for safmc_get_find_land(msg);
	general purpose for safmc->cam_shutter = mavlink_msg_general purpose for safmc_get_cam_shutter(msg);
	general purpose for safmc->roll = mavlink_msg_general purpose for safmc_get_roll(msg);
	general purpose for safmc->pitch = mavlink_msg_general purpose for safmc_get_pitch(msg);
	general purpose for safmc->yaw = mavlink_msg_general purpose for safmc_get_yaw(msg);
#else
	memcpy(general purpose for safmc, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_General Purpose for SAFMC_LEN);
#endif
}
