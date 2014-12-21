/** @file
 *	@brief MAVLink comm protocol testsuite generated from NTU_EEE_UAV.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef NTU_EEE_UAV_TESTSUITE_H
#define NTU_EEE_UAV_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_pixhawk(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_NTU_EEE_UAV(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_pixhawk(system_id, component_id, last_msg);
	mavlink_test_NTU_EEE_UAV(system_id, component_id, last_msg);
}
#endif

#include "../pixhawk/testsuite.h"


static void mavlink_test_uwb_position_estimate(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_uwb_position_estimate_t packet_in = {
		93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0
    };
	mavlink_uwb_position_estimate_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.usec = packet_in.usec;
        	packet1.x = packet_in.x;
        	packet1.y = packet_in.y;
        	packet1.z = packet_in.z;
        	packet1.roll = packet_in.roll;
        	packet1.pitch = packet_in.pitch;
        	packet1.yaw = packet_in.yaw;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_uwb_position_estimate_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_uwb_position_estimate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_uwb_position_estimate_pack(system_id, component_id, &msg , packet1.usec , packet1.x , packet1.y , packet1.z , packet1.roll , packet1.pitch , packet1.yaw );
	mavlink_msg_uwb_position_estimate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_uwb_position_estimate_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.usec , packet1.x , packet1.y , packet1.z , packet1.roll , packet1.pitch , packet1.yaw );
	mavlink_msg_uwb_position_estimate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_uwb_position_estimate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_uwb_position_estimate_send(MAVLINK_COMM_1 , packet1.usec , packet1.x , packet1.y , packet1.z , packet1.roll , packet1.pitch , packet1.yaw );
	mavlink_msg_uwb_position_estimate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_general_purpose_safmc(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_general_purpose_safmc_t packet_in = {
		93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0
    };
	mavlink_general_purpose_safmc_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.usec = packet_in.usec;
        	packet1.find_drop = packet_in.find_drop;
        	packet1.find_land = packet_in.find_land;
        	packet1.cam_shutter = packet_in.cam_shutter;
        	packet1.roll = packet_in.roll;
        	packet1.pitch = packet_in.pitch;
        	packet1.yaw = packet_in.yaw;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_general_purpose_safmc_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_general_purpose_safmc_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_general_purpose_safmc_pack(system_id, component_id, &msg , packet1.usec , packet1.find_drop , packet1.find_land , packet1.cam_shutter , packet1.roll , packet1.pitch , packet1.yaw );
	mavlink_msg_general_purpose_safmc_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_general_purpose_safmc_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.usec , packet1.find_drop , packet1.find_land , packet1.cam_shutter , packet1.roll , packet1.pitch , packet1.yaw );
	mavlink_msg_general_purpose_safmc_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_general_purpose_safmc_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_general_purpose_safmc_send(MAVLINK_COMM_1 , packet1.usec , packet1.find_drop , packet1.find_land , packet1.cam_shutter , packet1.roll , packet1.pitch , packet1.yaw );
	mavlink_msg_general_purpose_safmc_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_NTU_EEE_UAV(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_uwb_position_estimate(system_id, component_id, last_msg);
	mavlink_test_general_purpose_safmc(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // NTU_EEE_UAV_TESTSUITE_H
