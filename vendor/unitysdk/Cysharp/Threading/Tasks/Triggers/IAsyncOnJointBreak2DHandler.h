#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONJOINTBREAK2DHANDLER_ONJOINTBREAK2DASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnJointBreak2DHandler_TypeDefinitionIndex = 36027;

	class IAsyncOnJointBreak2DHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnJointBreak2DAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONJOINTBREAK2DHANDLER_ONJOINTBREAK2DASYNC_OFFSET))(nullptr);
		}

	};
}

