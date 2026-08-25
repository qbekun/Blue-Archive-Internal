#pragma once
#include "unitysdk.h"

class UISprite;

#define UISCENARIOMODEREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27EE7F0)
#define UISCENARIOMODEREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27EE8A0)
#define UISCENARIOMODEREDDOT_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x27EE800)

	inline static constexpr unsigned int UIScenarioModeReddot_TypeDefinitionIndex = 7712;

	class UIScenarioModeReddot : public Il2CppObject
	{
	public:
		UISprite* redDot; // 0x18

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODEREDDOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODEREDDOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODEREDDOT_SETREDDOT_OFFSET))(nullptr);
		}

	};

