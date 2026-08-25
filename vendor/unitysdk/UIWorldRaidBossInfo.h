#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
class UISprite;
class UISlider;
namespace UnityEngine { class GameObject; }
namespace MX::Data { class WorldRaidBossGroupInfo; }

#define UIWORLDRAIDBOSSINFO_SETALL_OFFSET UNITYSDK_OFFSET(0xBFAC90)
#define UIWORLDRAIDBOSSINFO_SETHP_OFFSET UNITYSDK_OFFSET(0xBFB370)
#define UIWORLDRAIDBOSSINFO_SETTAGSFOREVENTSTAGE_OFFSET UNITYSDK_OFFSET(0xBFB570)
#define UIWORLDRAIDBOSSINFO_SETNAMETEXTUREANDPORTRAIT_OFFSET UNITYSDK_OFFSET(0xBFB6C0)
#define UIWORLDRAIDBOSSINFO_SETTAGSFORWORLDBOSS_OFFSET UNITYSDK_OFFSET(0xBFB7F0)
#define UIWORLDRAIDBOSSINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xBFBBB0)
#define UIWORLDRAIDBOSSINFO_SETHPGAUGETHEME_OFFSET UNITYSDK_OFFSET(0xBFBBC0)
#define UIWORLDRAIDBOSSINFO_SETTAGSFORFINALBATTLE_OFFSET UNITYSDK_OFFSET(0xBFBCE0)

	inline static constexpr unsigned int UIWorldRaidBossInfo_TypeDefinitionIndex = 8772;

	class UIWorldRaidBossInfo : public Il2CppObject
	{
	public:
		UILabel* NameLabel; // 0x18
		UITexture* NameTexture; // 0x20
		UILabel* RecommendLevelLabel; // 0x28
		UITexture* BossPortrait; // 0x30
		UITexture* BossBG; // 0x38
		UISprite* TopographyIcon; // 0x40
		UILabel* HPLabel; // 0x48
		UILabel* HPRateLabel; // 0x50
		UISlider* HPGauge; // 0x58
		::Il2CppArray<::System::Object*>* hpBarObjects; // 0x60
		UISprite* ArmorTypeBG; // 0x68
		UILabel* ArmorTypeLabel; // 0x70
		UISprite* BulletTypeBG; // 0x78
		UILabel* BulletTypeLabel; // 0x80
		Il2CppObject* textLabelDecoColorByPhase; // 0x88
		::UnityEngine::GameObject* finalBattleTag; // 0x90
		Il2CppObject* finalBattleTagFxObjects; // 0x98
		::UnityEngine::GameObject* clearTag; // 0xA0
		::UnityEngine::GameObject* allClearTag; // 0xA8
		::UnityEngine::GameObject* rageTag; // 0xB0
		::UnityEngine::GameObject* mostParticipateTag; // 0xB8

		::System::Void SetAll(::System::String* str, ::System::String* str2, ::System::String* str3, ::System::String* str4, ::System::String* str5, ::System::String* str6, Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSINFO_SETALL_OFFSET))(str, str2, str3, str4, str5, str6, arg, arg2, nullptr);
		}

		::System::Void SetHp(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSINFO_SETHP_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetTagsForEventStage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSINFO_SETTAGSFOREVENTSTAGE_OFFSET))(nullptr);
		}

		::System::Void SetNameTextureAndPortrait(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSINFO_SETNAMETEXTUREANDPORTRAIT_OFFSET))(str, str2, nullptr);
		}

		::System::Void SetTagsForWorldBoss(::MX::Data::WorldRaidBossGroupInfo* arg)
		{
			((::System::Void(*)(::MX::Data::WorldRaidBossGroupInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSINFO_SETTAGSFORWORLDBOSS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetHpGaugeTheme(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSINFO_SETHPGAUGETHEME_OFFSET))(arg, nullptr);
		}

		::System::Void SetTagsForFinalBattle(::MX::Data::WorldRaidBossGroupInfo* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Data::WorldRaidBossGroupInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSINFO_SETTAGSFORFINALBATTLE_OFFSET))(arg, arg2, nullptr);
		}

	};

