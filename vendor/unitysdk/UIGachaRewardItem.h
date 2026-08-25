#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
class CharacterElephBonusType;

#define UIGACHAREWARDITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x25BAB30)
#define UIGACHAREWARDITEM_SETUI_OFFSET UNITYSDK_OFFSET(0x25BAC20)

	inline static constexpr unsigned int UIGachaRewardItem_TypeDefinitionIndex = 6276;

	class UIGachaRewardItem : public Il2CppObject
	{
	public:
		UITexture* texture; // 0x18
		UILabel* count; // 0x20
		UILabel* rewardName; // 0x28
		Il2CppObject* pickupDisplay; // 0x30
		Il2CppObject* bonusDisplay; // 0x38
		Il2CppObject* pickupFirstGetDisplay; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAREWARDITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetUI(::System::Int64 arg, ::System::Int64 arg2, CharacterElephBonusType* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, CharacterElephBonusType*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAREWARDITEM_SETUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

