#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONTRIGGEREXIT2DHANDLER_ONTRIGGEREXIT2DASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnTriggerExit2DHandler_TypeDefinitionIndex = 36077;

	class IAsyncOnTriggerExit2DHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnTriggerExit2DAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONTRIGGEREXIT2DHANDLER_ONTRIGGEREXIT2DASYNC_OFFSET))(nullptr);
		}

	};
}

