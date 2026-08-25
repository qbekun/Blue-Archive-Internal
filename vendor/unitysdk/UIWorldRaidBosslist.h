#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
class UISlider;
class MXButton;
namespace UnityEngine { class GameObject; }
namespace MX::Data { class WorldRaidSeasonInfo; }
namespace MX::Data { class WorldRaidBossGroupInfo; }
namespace UnityEngine { class Coroutine; }
class BossAppearState;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIWorldRaidBosslistInfo;
class ServerRegion;
namespace MX::GameLogic::DBModel { class WorldRaidBossGroup; }

#define UIWORLDRAIDBOSSLIST_HANDLEWORLDBOSSHPFAKESYNCCALLBACKMESSAGE_OFFSET UNITYSDK_OFFSET(0xBFC400)
#define UIWORLDRAIDBOSSLIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBFCA10)
#define UIWORLDRAIDBOSSLIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBFCBB0)
#define UIWORLDRAIDBOSSLIST_ONCLICKSHORTCUT_OFFSET UNITYSDK_OFFSET(0xBFCCB0)
#define UIWORLDRAIDBOSSLIST_START_OFFSET UNITYSDK_OFFSET(0xBFCD60)
#define UIWORLDRAIDBOSSLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0xBFCEF0)
#define UIWORLDRAIDBOSSLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xBFDBC0)
#define UIWORLDRAIDBOSSLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0xBFDC00)
#define UIWORLDRAIDBOSSLIST_COREMAINTIMER_OFFSET UNITYSDK_OFFSET(0xBFCE80)
#define UIWORLDRAIDBOSSLIST_SETWORLDBOSSRAIDPARTICIPANTS_OFFSET UNITYSDK_OFFSET(0xBFDA70)
#define UIWORLDRAIDBOSSLIST_SETHP_OFFSET UNITYSDK_OFFSET(0xBFC730)
#define UIWORLDRAIDBOSSLIST__COREMAINTIMER_B__28_0_OFFSET UNITYSDK_OFFSET(0xBFDD70)

	inline static constexpr unsigned int UIWorldRaidBosslist_TypeDefinitionIndex = 8775;

	class UIWorldRaidBosslist : public ::System::Xml::Serialization::XmlArrayItemAttributes
	{
	public:
		UILabel* RemainTime; // 0x28
		UITexture* BossPortrait; // 0x30
		UILabel* NameLabel; // 0x38
		UILabel* HPLabel; // 0x40
		UISlider* HPGauge; // 0x48
		UILabel* HPRateLabel; // 0x50
		MXButton* ShortcutButton; // 0x58
		::UnityEngine::GameObject* HpSet; // 0x60
		::UnityEngine::GameObject* TimeTag; // 0x68
		::UnityEngine::GameObject* LastBossTag; // 0x70
		::UnityEngine::GameObject* ClearTag; // 0x78
		::UnityEngine::GameObject* Dim; // 0x80
		::UnityEngine::GameObject* UserTag_Little; // 0x88
		::UnityEngine::GameObject* UserTag_Middle; // 0x90
		::UnityEngine::GameObject* UserTag_High; // 0x98
		::UnityEngine::GameObject* UserTag_VeryHigh; // 0xA0
		::MX::Data::WorldRaidSeasonInfo* seasonInfo; // 0xA8
		::MX::Data::WorldRaidBossGroupInfo* groupInfo; // 0xB0
		::UnityEngine::Coroutine* remainTimerCoroutine; // 0xB8
		BossAppearState* currentAppearState; // 0xC0

		::System::Boolean HandleWorldBossHpFakeSyncCallBackMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLIST_HANDLEWORLDBOSSHPFAKESYNCCALLBACKMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLIST_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickShortcut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLIST_ONCLICKSHORTCUT_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLIST_START_OFFSET))(nullptr);
		}

		::System::Void SetData(UIWorldRaidBosslistInfo* arg)
		{
			((::System::Void(*)(UIWorldRaidBosslistInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLIST_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoRemainTimer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLIST_COREMAINTIMER_OFFSET))(nullptr);
		}

		::System::Void SetWorldBossRaidParticipants(::System::Int64 arg, ServerRegion* arg2)
		{
			((::System::Void(*)(::System::Int64, ServerRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLIST_SETWORLDBOSSRAIDPARTICIPANTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetHp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLIST_SETHP_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CoRemainTimer_b__28_0(::MX::GameLogic::DBModel::WorldRaidBossGroup* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::WorldRaidBossGroup*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLIST__COREMAINTIMER_B__28_0_OFFSET))(arg, nullptr);
		}

	};

