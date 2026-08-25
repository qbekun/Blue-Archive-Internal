#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UILabel;
class UISlider;
class UISprite;
class RaidPlayerInfo;

#define UIRAIDDAMAGELIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x27A2060)
#define UIRAIDDAMAGELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x27A23D0)

	inline static constexpr unsigned int UIRaidDamageList_TypeDefinitionIndex = 7480;

	class UIRaidDamageList : public Il2CppObject
	{
	public:
		UICharacterCard* CharacterCard; // 0x18
		UILabel* RankLabel; // 0x20
		UILabel* NickNameLabel; // 0x28
		UILabel* DamageLabel; // 0x30
		UISlider* DamageSlider; // 0x38
		UISprite* MySlider; // 0x40
		UISprite* OtherSlider; // 0x48

		::System::Void SetData(RaidPlayerInfo* arg)
		{
			((::System::Void(*)(RaidPlayerInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDDAMAGELIST_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDDAMAGELIST_.CTOR_OFFSET))(nullptr);
		}

	};

