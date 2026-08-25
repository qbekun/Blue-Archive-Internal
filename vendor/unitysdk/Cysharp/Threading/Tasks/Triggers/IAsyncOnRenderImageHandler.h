#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONRENDERIMAGEHANDLER_ONRENDERIMAGEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnRenderImageHandler_TypeDefinitionIndex = 36061;

	class IAsyncOnRenderImageHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnRenderImageAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONRENDERIMAGEHANDLER_ONRENDERIMAGEASYNC_OFFSET))(nullptr);
		}

	};
}

