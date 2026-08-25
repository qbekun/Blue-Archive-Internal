#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidDB; }
class UILabel;
class UIScrollView;
class MXButton;
class UITexture;
class UISlider;
namespace UnityEngine { class GameObject; }
class UISprite;
class TweenAlpha;
class UIBossSkillViewer;
namespace FlatData { class ContentType; }

#define UIRAIDBOSSINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2792FA0)
#define UIRAIDBOSSINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x27A1810)
#define UIRAIDBOSSINFO_ONCLICKBOSSBGINFO_OFFSET UNITYSDK_OFFSET(0x27A1820)
#define UIRAIDBOSSINFO_CORESETSCROLL_OFFSET UNITYSDK_OFFSET(0x27A17A0)
#define UIRAIDBOSSINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x27A19C0)
#define UIRAIDBOSSINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x27A1D80)

	inline static constexpr unsigned int UIRaidBossInfo_TypeDefinitionIndex = 7479;

	class UIRaidBossInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::RaidDB* raidDB; // 0x18
		UILabel* Name; // 0x20
		UILabel* NickName; // 0x28
		UILabel* BossBGInfo; // 0x30
		UIScrollView* BossBGInfoScrollView; // 0x38
		MXButton* BossBGInfoButton; // 0x40
		UITexture* BossPortrait; // 0x48
		UITexture* BossBG; // 0x50
		UISlider* HPGauge; // 0x58
		UILabel* HPLabel; // 0x60
		UILabel* Time; // 0x68
		UILabel* DifficultyLabel; // 0x70
		::UnityEngine::GameObject* Dim; // 0x78
		::UnityEngine::GameObject* Lock; // 0x80
		UILabel* LockLabel; // 0x88
		UISprite* TopographyIcon; // 0x90
		UILabel* RecommendLevel; // 0x98
		UISprite* ArmorTypeBG; // 0xA0
		UILabel* ArmorTypeLabel; // 0xA8
		TweenAlpha* SubArmorTweenAlpha; // 0xB0
		UISprite* SubArmorTypeBG; // 0xB8
		UILabel* SubArmorTypeLabel; // 0xC0
		UISprite* BulletTypeBG; // 0xC8
		UILabel* BulletTypeLabel; // 0xD0
		::Il2CppArray<::System::Object*>* Rewards; // 0xD8
		UILabel* rewardEmptyLabel; // 0xE0
		UIBossSkillViewer* SkillViewer; // 0xE8
		::System::Int32 lastRemainTimeSec; // 0xF0
		::System::Boolean isTimeEnd; // 0xF4
		::System::Int64 stageId; // 0xF8
		::FlatData::ContentType* raidContentType; // 0x100

		::System::Void SetData(::FlatData::ContentType* arg, ::System::Int64 arg2, ::MX::GameLogic::DBModel::RaidDB* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::MX::GameLogic::DBModel::RaidDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDBOSSINFO_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDBOSSINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickBossBGInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDBOSSINFO_ONCLICKBOSSBGINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoResetScroll()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDBOSSINFO_CORESETSCROLL_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDBOSSINFO_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDBOSSINFO_AWAKE_OFFSET))(nullptr);
		}

	};

