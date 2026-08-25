#pragma once
#include "unitysdk.h"

class CharacterVisual;

#define HIDEHPBAR_START_OFFSET UNITYSDK_OFFSET(0x13BD6E0)
#define HIDEHPBAR_UPDATE_OFFSET UNITYSDK_OFFSET(0x13BD730)
#define HIDEHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x13BD850)

	inline static constexpr unsigned int HideHPBar_TypeDefinitionIndex = 1020;

	class HideHPBar : public Il2CppObject
	{
	public:
		CharacterVisual* characterVisual; // 0x18
		Il2CppObject* logicEffectGroupIdToHideList; // 0x20

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDEHPBAR_START_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDEHPBAR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDEHPBAR_.CTOR_OFFSET))(nullptr);
		}

	};

