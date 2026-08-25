#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONAUDIOFILTERREADHANDLER_ONAUDIOFILTERREADASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnAudioFilterReadHandler_TypeDefinitionIndex = 35991;

	class IAsyncOnAudioFilterReadHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnAudioFilterReadAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONAUDIOFILTERREADHANDLER_ONAUDIOFILTERREADASYNC_OFFSET))(nullptr);
		}

	};
}

