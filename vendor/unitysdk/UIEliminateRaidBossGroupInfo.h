#pragma once
#include "unitysdk.h"

class UISprite;
class UILabel;
class UITexture;
namespace FlatData { class ArmorType; }
namespace MX::Data { class RaidStageInfo; }

#define UIELIMINATERAIDBOSSGROUPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x23DE620)
#define UIELIMINATERAIDBOSSGROUPINFO_INITIALIZEOTHERUSERDB_OFFSET UNITYSDK_OFFSET(0x23DE630)
#define UIELIMINATERAIDBOSSGROUPINFO_SETINFO_OFFSET UNITYSDK_OFFSET(0x23DEB20)
#define UIELIMINATERAIDBOSSGROUPINFO_SETARMORTYPEUI_OFFSET UNITYSDK_OFFSET(0x23DE7F0)
#define UIELIMINATERAIDBOSSGROUPINFO_SETBOSSUI_OFFSET UNITYSDK_OFFSET(0x23DEF60)

	inline static constexpr unsigned int UIEliminateRaidBossGroupInfo_TypeDefinitionIndex = 5371;

	class UIEliminateRaidBossGroupInfo : public Il2CppObject
	{
	public:
		UISprite* TypeNameSprite_Bright; // 0x18
		UISprite* TypeNameSprite_Dark; // 0x20
		UILabel* TypeNameLabel_Text; // 0x28
		UILabel* TypeNameLabel_Color; // 0x30
		UITexture* BossPortrait; // 0x38
		UITexture* BossBG; // 0x40
		UILabel* BossNameLabel; // 0x48
		UISprite* BossNameSprite; // 0x50
		UISprite* TopographyIcon; // 0x58
		UISprite* BossSpineBG; // 0x60
		UISprite* BossSpineLine; // 0x68
		UILabel* ScoreLabel; // 0x70
		UILabel* ScorePlusPointLabel; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDBOSSGROUPINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeOtherUserDB(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDBOSSGROUPINFO_INITIALIZEOTHERUSERDB_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetInfo(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDBOSSGROUPINFO_SETINFO_OFFSET))(str, nullptr);
		}

		::System::Void SetArmorTypeUI(::FlatData::ArmorType* arg)
		{
			((::System::Void(*)(::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDBOSSGROUPINFO_SETARMORTYPEUI_OFFSET))(arg, nullptr);
		}

		::System::Void SetBossUI(::MX::Data::RaidStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::RaidStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDBOSSGROUPINFO_SETBOSSUI_OFFSET))(arg, nullptr);
		}

	};

