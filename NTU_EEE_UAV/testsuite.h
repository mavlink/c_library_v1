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
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_NTU_EEE_UAV(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_NTU_EEE_UAV(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"



static void mavlink_test_NTU_EEE_UAV(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // NTU_EEE_UAV_TESTSUITE_H
