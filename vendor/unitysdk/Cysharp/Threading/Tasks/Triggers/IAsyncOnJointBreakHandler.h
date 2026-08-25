#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONJOINTBREAKHANDLER_ONJOINTBREAKASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnJointBreakHandler_TypeDefinitionIndex = 36025;

	class IAsyncOnJointBreakHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnJointBreakAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONJOINTBREAKHANDLER_ONJOINTBREAKASYNC_OFFSET))(nullptr);
		}

	};
}

