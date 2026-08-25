#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONTRIGGERSTAYHANDLER_ONTRIGGERSTAYASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnTriggerStayHandler_TypeDefinitionIndex = 36079;

	class IAsyncOnTriggerStayHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnTriggerStayAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONTRIGGERSTAYHANDLER_ONTRIGGERSTAYASYNC_OFFSET))(nullptr);
		}

	};
}

