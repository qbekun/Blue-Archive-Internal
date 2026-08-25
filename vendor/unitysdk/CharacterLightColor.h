#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

#define CHARACTERLIGHTCOLOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xA28150)
#define CHARACTERLIGHTCOLOR_HASCOLORCHANGED_OFFSET UNITYSDK_OFFSET(0xA28190)
#define CHARACTERLIGHTCOLOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA282C0)
#define CHARACTERLIGHTCOLOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA28310)
#define CHARACTERLIGHTCOLOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA28320)
#define CHARACTERLIGHTCOLOR_UPDATECOLOR_OFFSET UNITYSDK_OFFSET(0xA281D0)

	inline static constexpr unsigned int CharacterLightColor_TypeDefinitionIndex = 37967;

	class CharacterLightColor : public Il2CppObject
	{
	public:
		::UnityEngine::Color* color; // 0x18
		::System::Single intensity; // 0x28
		::System::Single prevR; // 0x2C
		::System::Single prevG; // 0x30
		::System::Single prevB; // 0x34
		::System::Single prevI; // 0x38

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLIGHTCOLOR_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean HasColorChanged()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLIGHTCOLOR_HASCOLORCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLIGHTCOLOR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLIGHTCOLOR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLIGHTCOLOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateColor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLIGHTCOLOR_UPDATECOLOR_OFFSET))(nullptr);
		}

	};

