#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_MAYBENULLATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944A340)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int MaybeNullAttribute_TypeDefinitionIndex = 31666;

	class MaybeNullAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_MAYBENULLATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

