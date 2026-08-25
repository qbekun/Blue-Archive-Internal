#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C7C50)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int DoesNotReturnAttribute_TypeDefinitionIndex = 25046;

	class DoesNotReturnAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

