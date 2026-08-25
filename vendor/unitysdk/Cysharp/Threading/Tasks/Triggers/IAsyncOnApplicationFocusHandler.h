#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONAPPLICATIONFOCUSHANDLER_ONAPPLICATIONFOCUSASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnApplicationFocusHandler_TypeDefinitionIndex = 35985;

	class IAsyncOnApplicationFocusHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnApplicationFocusAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONAPPLICATIONFOCUSHANDLER_ONAPPLICATIONFOCUSASYNC_OFFSET))(nullptr);
		}

	};
}

