#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNIFATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944A360)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNIFATTRIBUTE_GET_PARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x944A380)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int DoesNotReturnIfAttribute_TypeDefinitionIndex = 31668;

	class DoesNotReturnIfAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _ParameterValue_k__BackingField; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNIFATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ParameterValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNIFATTRIBUTE_GET_PARAMETERVALUE_OFFSET))(nullptr);
		}

	};
}

