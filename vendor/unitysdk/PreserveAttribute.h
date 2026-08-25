#pragma once
#include "unitysdk.h"

#define PRESERVEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E35650)

	inline static constexpr unsigned int PreserveAttribute_TypeDefinitionIndex = 37257;

	class PreserveAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PRESERVEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};

