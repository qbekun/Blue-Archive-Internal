#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCONTROLLERCOLLIDERHITHANDLER_ONCONTROLLERCOLLIDERHITASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnControllerColliderHitHandler_TypeDefinitionIndex = 36013;

	class IAsyncOnControllerColliderHitHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnControllerColliderHitAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCONTROLLERCOLLIDERHITHANDLER_ONCONTROLLERCOLLIDERHITASYNC_OFFSET))(nullptr);
		}

	};
}

