#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_STRINGFREEZINGATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92282A0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int StringFreezingAttribute_TypeDefinitionIndex = 24764;

	class StringFreezingAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_STRINGFREEZINGATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

