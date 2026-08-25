#pragma once
#include "unitysdk.h"

#define DONOTOBFUSCATENGUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F39F10)

	inline static constexpr unsigned int DoNotObfuscateNGUI_TypeDefinitionIndex = 114;

	class DoNotObfuscateNGUI : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONOTOBFUSCATENGUI_.CTOR_OFFSET))(nullptr);
		}

	};

