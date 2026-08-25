#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944A300)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int NotNullAttribute_TypeDefinitionIndex = 31664;

	class NotNullAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

