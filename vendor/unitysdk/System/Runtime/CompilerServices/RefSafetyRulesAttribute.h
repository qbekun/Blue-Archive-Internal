#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2889360)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_TypeDefinitionIndex = 37755;

	class RefSafetyRulesAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Int32 Version; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

