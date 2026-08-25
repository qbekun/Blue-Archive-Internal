#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONAPPLICATIONPAUSEHANDLER_ONAPPLICATIONPAUSEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnApplicationPauseHandler_TypeDefinitionIndex = 35987;

	class IAsyncOnApplicationPauseHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnApplicationPauseAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONAPPLICATIONPAUSEHANDLER_ONAPPLICATIONPAUSEASYNC_OFFSET))(nullptr);
		}

	};
}

