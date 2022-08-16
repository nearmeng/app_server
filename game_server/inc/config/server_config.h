#ifndef _SERVER_CONFIG_H_
#define _SERVER_CONFIG_H_

// tolua_begin

struct SERVER_CONFIG
{
	int32_t nTestValue;
    int32_t nUserCount;
    int32_t nRoleCount;
	int32_t nClientPingTimeout;
    int32_t nUserKickAfterSessionStopTime;
	int32_t nInitDefaultClientSessionCount;
};

extern SERVER_CONFIG g_ServerConfig;

// tolua_end

#endif	// _GLOBAL_CONFIG_H_
