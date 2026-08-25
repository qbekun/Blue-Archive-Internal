#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_TRACING_NONEVENTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C7C10)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int NonEventAttribute_TypeDefinitionIndex = 25043;

	class NonEventAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_NONEVENTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

