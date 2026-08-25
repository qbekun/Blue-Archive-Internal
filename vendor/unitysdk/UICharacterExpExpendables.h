#pragma once
#include "unitysdk.h"

class UICharacterGrowth_LevelUpEstimation;

#define UICHARACTEREXPEXPENDABLES_ISCANNOTINPUT_OFFSET UNITYSDK_OFFSET(0x22D85A0)
#define UICHARACTEREXPEXPENDABLES_ONCLICKADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0x22D8680)
#define UICHARACTEREXPEXPENDABLES_.CTOR_OFFSET UNITYSDK_OFFSET(0x22D88B0)

	inline static constexpr unsigned int UICharacterExpExpendables_TypeDefinitionIndex = 4841;

	class UICharacterExpExpendables : public Il2CppObject
	{
	public:
		UICharacterGrowth_LevelUpEstimation* CharacterGrowth_LevelUpEstimation; // 0x98

		::System::Boolean IsCanNotInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTEREXPEXPENDABLES_ISCANNOTINPUT_OFFSET))(nullptr);
		}

		::System::Void OnClickAddIngredient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTEREXPEXPENDABLES_ONCLICKADDINGREDIENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTEREXPEXPENDABLES_.CTOR_OFFSET))(nullptr);
		}

	};

