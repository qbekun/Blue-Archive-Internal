#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONTRIGGERSTAY2DHANDLER_ONTRIGGERSTAY2DASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnTriggerStay2DHandler_TypeDefinitionIndex = 36081;

	class IAsyncOnTriggerStay2DHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnTriggerStay2DAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONTRIGGERSTAY2DHANDLER_ONTRIGGERSTAY2DASYNC_OFFSET))(nullptr);
		}

	};
}

