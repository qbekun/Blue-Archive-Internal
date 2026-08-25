#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_DISALLOWNULLATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C7C20)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int DisallowNullAttribute_TypeDefinitionIndex = 25044;

	class DisallowNullAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_DISALLOWNULLATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

