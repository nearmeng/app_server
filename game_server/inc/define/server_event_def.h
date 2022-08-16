#ifndef _SERVER_EVENT_DEF_H_
#define _SERVER_EVENT_DEF_H_

#include "define/event_def.h"

// tolua_begin 

enum EVENT_TYPE
{
	evtInvalid = 0,

	evtStaticBegin,

	evtStaticRoleBegin = evtStaticBegin,

	evtRoleSyncData,

	evtStaticRoleEnd,

	evtStaticEnd,

	evtDynamicBegin,

	evtDynamicRoleBegin,

	evtRoleKillNpc,

	evtDynamicRoleEnd,

	evtDynamicEnd,

	evtTotal = MAX_EVENT_TYPE_COUNT
};

//tolua_end

#endif
