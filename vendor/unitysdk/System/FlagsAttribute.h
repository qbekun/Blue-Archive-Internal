#pragma once
#include "../unitysdk.h"

#define SYSTEM_FLAGSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x933D100)

namespace System
{
	inline static constexpr unsigned int FlagsAttribute_TypeDefinitionIndex = 23739;

	class FlagsAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FLAGSATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

