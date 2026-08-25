#pragma once
#include "unitysdk.h"

class SpineCharacter;

#define SPINECHARACTERBODYTOUCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x20E7CD0)
#define SPINECHARACTERBODYTOUCH_AWAKE_OFFSET UNITYSDK_OFFSET(0x20E7CE0)
#define SPINECHARACTERBODYTOUCH_ONCLICK_OFFSET UNITYSDK_OFFSET(0x20E7D70)

	inline static constexpr unsigned int SpineCharacterBodyTouch_TypeDefinitionIndex = 3782;

	class SpineCharacterBodyTouch : public Il2CppObject
	{
	public:
		SpineCharacter* SpineCharacter; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTERBODYTOUCH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTERBODYTOUCH_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTERBODYTOUCH_ONCLICK_OFFSET))(nullptr);
		}

	};

