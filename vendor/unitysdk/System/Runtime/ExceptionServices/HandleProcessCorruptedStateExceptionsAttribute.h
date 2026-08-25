#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_EXCEPTIONSERVICES_HANDLEPROCESSCORRUPTEDSTATEEXCEPTIONSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227270)

namespace System::Runtime::ExceptionServices
{
	inline static constexpr unsigned int HandleProcessCorruptedStateExceptionsAttribute_TypeDefinitionIndex = 24726;

	class HandleProcessCorruptedStateExceptionsAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_EXCEPTIONSERVICES_HANDLEPROCESSCORRUPTEDSTATEEXCEPTIONSATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

