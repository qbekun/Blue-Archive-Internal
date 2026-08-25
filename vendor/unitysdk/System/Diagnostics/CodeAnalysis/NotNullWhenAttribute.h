#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLWHENATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944A310)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLWHENATTRIBUTE_GET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x944A330)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int NotNullWhenAttribute_TypeDefinitionIndex = 31665;

	class NotNullWhenAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _ReturnValue_k__BackingField; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLWHENATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ReturnValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLWHENATTRIBUTE_GET_RETURNVALUE_OFFSET))(nullptr);
		}

	};
}

