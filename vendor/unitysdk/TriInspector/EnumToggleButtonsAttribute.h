#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_ENUMTOGGLEBUTTONSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEAF0)

namespace TriInspector
{
	inline static constexpr unsigned int EnumToggleButtonsAttribute_TypeDefinitionIndex = 37826;

	class EnumToggleButtonsAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_ENUMTOGGLEBUTTONSATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

