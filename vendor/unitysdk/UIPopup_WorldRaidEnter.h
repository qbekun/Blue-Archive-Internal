#pragma once
#include "unitysdk.h"

class UIWorldRaidBossInfo;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIBossSkillViewer;
class UIWorldRaidRoomlistScrollViewController;
class UIWorldRaidRewardPreviewScrollViewController;
class UIAdmissionDisplay;
class MXButton;
namespace MX::Data { class WorldRaidSeasonInfo; }
namespace MX::Data { class WorldRaidBossGroupInfo; }
namespace UnityEngine { class Coroutine; }
class UIPopup_WorldRaid_FormationInfo;
namespace MX::GameLogic::DBModel { class WorldRaidBossGroup; }
class ServerRegion;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class WorldRaidBossListInfoDB; }

#define UIPOPUP_WORLDRAIDENTER_ONBACK_OFFSET UNITYSDK_OFFSET(0xBE54C0)
#define UIPOPUP_WORLDRAIDENTER_SETWORLDBOSSINFOUI_OFFSET UNITYSDK_OFFSET(0xBE54D0)
#define UIPOPUP_WORLDRAIDENTER_ENTERFORMATION_OFFSET UNITYSDK_OFFSET(0xBE5810)
#define UIPOPUP_WORLDRAIDENTER__ONCLICKAVAILABLEECHELONINFOBUTTON_B__42_0_OFFSET UNITYSDK_OFFSET(0xBE5EB0)
#define UIPOPUP_WORLDRAIDENTER_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBE5F00)
#define UIPOPUP_WORLDRAIDENTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xBE6CC0)
#define UIPOPUP_WORLDRAIDENTER__COREMAINTIMER_B__41_0_OFFSET UNITYSDK_OFFSET(0xBE7310)
#define UIPOPUP_WORLDRAIDENTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBE7340)
#define UIPOPUP_WORLDRAIDENTER_ONCLICKPRACTICE_OFFSET UNITYSDK_OFFSET(0xBE74D0)
#define UIPOPUP_WORLDRAIDENTER__HANDLERESETABLECONTENTRESPONSEMESSAGE_B__27_3_OFFSET UNITYSDK_OFFSET(0xBE7960)
#define UIPOPUP_WORLDRAIDENTER_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0xBE7970)
#define UIPOPUP_WORLDRAIDENTER_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xBE7980)
#define UIPOPUP_WORLDRAIDENTER_SETINFO_OFFSET UNITYSDK_OFFSET(0xBE7990)
#define UIPOPUP_WORLDRAIDENTER_SETWORLDBOSSRAIDPARTICIPANTS_OFFSET UNITYSDK_OFFSET(0xBE56C0)
#define UIPOPUP_WORLDRAIDENTER_SETREWARDSPREVIEW_OFFSET UNITYSDK_OFFSET(0xBE79D0)
#define UIPOPUP_WORLDRAIDENTER_HANDLEWORLDRAIDBOSSLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBE7CD0)
#define UIPOPUP_WORLDRAIDENTER_ONCLICKCLEARDECK_OFFSET UNITYSDK_OFFSET(0xBE7D40)
#define UIPOPUP_WORLDRAIDENTER_SETHP_OFFSET UNITYSDK_OFFSET(0xBE7E20)
#define UIPOPUP_WORLDRAIDENTER_ONCLICKFINALCLEARREWARDBUTTON_OFFSET UNITYSDK_OFFSET(0xBE8090)
#define UIPOPUP_WORLDRAIDENTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBE8230)
#define UIPOPUP_WORLDRAIDENTER__SETBOSSLISTSCROLLVIEW_B__38_1_OFFSET UNITYSDK_OFFSET(0xBE8450)
#define UIPOPUP_WORLDRAIDENTER_SETBOSSLISTSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xBE62F0)
#define UIPOPUP_WORLDRAIDENTER_COREMAINTIMER_OFFSET UNITYSDK_OFFSET(0xBE6280)
#define UIPOPUP_WORLDRAIDENTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xBE84A0)
#define UIPOPUP_WORLDRAIDENTER_WORLDRAIDENTER_OFFSET UNITYSDK_OFFSET(0xBE74E0)
#define UIPOPUP_WORLDRAIDENTER_ONCLICKAVAILABLEECHELONINFOBUTTON_OFFSET UNITYSDK_OFFSET(0xBE84D0)
#define UIPOPUP_WORLDRAIDENTER_SETLOCALBOSSINFOUI_OFFSET UNITYSDK_OFFSET(0xBE69F0)
#define UIPOPUP_WORLDRAIDENTER_HANDLEWORLDBOSSHPFAKESYNCCALLBACKMESSAGE_OFFSET UNITYSDK_OFFSET(0xBE85B0)
#define UIPOPUP_WORLDRAIDENTER_HANDLERESETABLECONTENTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBE8660)

	inline static constexpr unsigned int UIPopup_WorldRaidEnter_TypeDefinitionIndex = 8727;

	class UIPopup_WorldRaidEnter : public Il2CppObject
	{
	public:
		UIWorldRaidBossInfo* uIWorldRaidBossInfo; // 0xD8
		UILabel* RemainTimeLabel; // 0xE0
		UILabel* HPRateLabel; // 0xE8
		::UnityEngine::GameObject* UserTag_Little; // 0xF0
		::UnityEngine::GameObject* UserTag_Middle; // 0xF8
		::UnityEngine::GameObject* UserTag_High; // 0x100
		::UnityEngine::GameObject* UserTag_VeryHigh; // 0x108
		UIBossSkillViewer* SkillViewer; // 0x110
		UIWorldRaidRoomlistScrollViewController* RoomlistScrollView; // 0x118
		UIWorldRaidRewardPreviewScrollViewController* ParticipantRewardScrollView; // 0x120
		UIWorldRaidRewardPreviewScrollViewController* ClearRewardScrollView; // 0x128
		UIAdmissionDisplay* AdmissionDisplay; // 0x130
		MXButton* EnterButton; // 0x138
		UILabel* EnterButtonLabel; // 0x140
		MXButton* PracticeButton; // 0x148
		MXButton* AvailableFormationInfoButton; // 0x150
		MXButton* AvailableFormationInfoDisabledButton; // 0x158
		MXButton* FinalClearRewardButton; // 0x160
		MXButton* FinalClearRewardDisabledButton; // 0x168
		MXButton* ClearDeckButton; // 0x170
		::MX::Data::WorldRaidSeasonInfo* seasonInfo; // 0x178
		::MX::Data::WorldRaidBossGroupInfo* groupInfo; // 0x180
		::UnityEngine::Coroutine* remainTimerCoroutine; // 0x188

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_ONBACK_OFFSET))(nullptr);
		}

		::System::Void SetWorldBossInfoUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_SETWORLDBOSSINFOUI_OFFSET))(nullptr);
		}

		::System::Void EnterFormation(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_ENTERFORMATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickAvailableEchelonInfoButton_b__42_0(UIPopup_WorldRaid_FormationInfo* arg)
		{
			((::System::Void(*)(UIPopup_WorldRaid_FormationInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER__ONCLICKAVAILABLEECHELONINFOBUTTON_B__42_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean _CoRemainTimer_b__41_0(::MX::GameLogic::DBModel::WorldRaidBossGroup* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::WorldRaidBossGroup*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER__COREMAINTIMER_B__41_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickPractice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_ONCLICKPRACTICE_OFFSET))(nullptr);
		}

		::System::Void _HandleResetableContentResponseMessage_b__27_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER__HANDLERESETABLECONTENTRESPONSEMESSAGE_B__27_3_OFFSET))(nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SetInfo(::MX::Data::WorldRaidSeasonInfo* arg, ::MX::Data::WorldRaidBossGroupInfo* arg2)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, ::MX::Data::WorldRaidBossGroupInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_SETINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetWorldBossRaidParticipants(::System::Int64 arg, ServerRegion* arg2)
		{
			((::System::Void(*)(::System::Int64, ServerRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_SETWORLDBOSSRAIDPARTICIPANTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetRewardsPreview(UIWorldRaidRewardPreviewScrollViewController* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(UIWorldRaidRewardPreviewScrollViewController*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_SETREWARDSPREVIEW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleWorldRaidBossListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_HANDLEWORLDRAIDBOSSLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClearDeck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_ONCLICKCLEARDECK_OFFSET))(nullptr);
		}

		::System::Void SetHp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_SETHP_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickFinalClearRewardButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_ONCLICKFINALCLEARREWARDBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean _SetBosslistScrollView_b__38_1(::MX::GameLogic::DBModel::WorldRaidBossListInfoDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::WorldRaidBossListInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER__SETBOSSLISTSCROLLVIEW_B__38_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetBosslistScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_SETBOSSLISTSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoRemainTimer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_COREMAINTIMER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void WorldRaidEnter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_WORLDRAIDENTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickAvailableEchelonInfoButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_ONCLICKAVAILABLEECHELONINFOBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetLocalBossInfoUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_SETLOCALBOSSINFOUI_OFFSET))(nullptr);
		}

		::System::Boolean HandleWorldBossHpFakeSyncCallBackMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_HANDLEWORLDBOSSHPFAKESYNCCALLBACKMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleResetableContentResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDENTER_HANDLERESETABLECONTENTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

	};

