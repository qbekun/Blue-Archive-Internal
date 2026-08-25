#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_ALLOWNULLATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944A350)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int AllowNullAttribute_TypeDefinitionIndex = 31667;

	class AllowNullAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_ALLOWNULLATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

