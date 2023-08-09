/** @file
 *    @brief MAVLink comm protocol testsuite generated from development.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef DEVELOPMENT_TESTSUITE_H
#define DEVELOPMENT_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_development(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_development(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_param_ack_transaction(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PARAM_ACK_TRANSACTION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_param_ack_transaction_t packet_in = {
        17.0,17,84,"GHIJKLMNOPQRSTU",199,10
    };
    mavlink_param_ack_transaction_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param_value = packet_in.param_value;
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        packet1.param_type = packet_in.param_type;
        packet1.param_result = packet_in.param_result;
        
        mav_array_memcpy(packet1.param_id, packet_in.param_id, sizeof(char)*16);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PARAM_ACK_TRANSACTION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PARAM_ACK_TRANSACTION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ack_transaction_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_param_ack_transaction_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ack_transaction_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.param_id , packet1.param_value , packet1.param_type , packet1.param_result );
    mavlink_msg_param_ack_transaction_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ack_transaction_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.param_id , packet1.param_value , packet1.param_type , packet1.param_result );
    mavlink_msg_param_ack_transaction_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_param_ack_transaction_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ack_transaction_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.param_id , packet1.param_value , packet1.param_type , packet1.param_result );
    mavlink_msg_param_ack_transaction_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("PARAM_ACK_TRANSACTION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_PARAM_ACK_TRANSACTION) != NULL);
#endif
}

static void mavlink_test_development(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_param_ack_transaction(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // DEVELOPMENT_TESTSUITE_H
