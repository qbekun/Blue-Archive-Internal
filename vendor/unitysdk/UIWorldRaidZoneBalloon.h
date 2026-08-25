#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class MXButton;
class UITexture;
class UIWidget;
class TweenPosition;
class UIWorldRaidZoneBalloon_HpController;
class UIWorldRaidZoneBalloon_TagController;
namespace MX::Data { class WorldRaidSeasonInfo; }
namespace MX::Data { class WorldRaidBossGroupInfo; }
namespace UnityEngine { class Coroutine; }
class BossAppearState;
class WorldRaidZoneBalloonAniInfo;
class UIWorldRaidZone;
class WorldRaidZoneBalloonAnimationState;
namespace MX::GameLogic::DBModel { class WorldRaidBossGroup; }
namespace FlatData { class OperatorCondition; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIWORLDRAIDZONEBALLOON_SETBOSSINFO_OFFSET UNITYSDK_OFFSET(0xC0A200)
#define UIWORLDRAIDZONEBALLOON_SETLOCKCOVERONOFF_OFFSET UNITYSDK_OFFSET(0xBF9410)
#define UIWORLDRAIDZONEBALLOON__CHECKAPPEARSTATE_G__SETPARCELANIMATION|53_0_OFFSET UNITYSDK_OFFSET(0xC0B9B0)
#define UIWORLDRAIDZONEBALLOON_SETREMAINTIME_OFFSET UNITYSDK_OFFSET(0xC0B1F0)
#define UIWORLDRAIDZONEBALLOON_SETUIONOFF_OFFSET UNITYSDK_OFFSET(0xC0BBF0)
#define UIWORLDRAIDZONEBALLOON_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0BE10)
#define UIWORLDRAIDZONEBALLOON_GET_ISPLAYABLE_OFFSET UNITYSDK_OFFSET(0xC0BE90)
#define UIWORLDRAIDZONEBALLOON_SET_PHASECHANGEMODE_BOSSAPPEAR_OFFSET UNITYSDK_OFFSET(0xC0BEA0)
#define UIWORLDRAIDZONEBALLOON_GET_PHASECHANGEMODE_BOSSAPPEAR_OFFSET UNITYSDK_OFFSET(0xC0BEB0)
#define UIWORLDRAIDZONEBALLOON__SETANICURRENTAPPEARSTATELASTFRAME_B__68_0_OFFSET UNITYSDK_OFFSET(0xC0BEC0)
#define UIWORLDRAIDZONEBALLOON_SETCLEARCOVERDIM_OFFSET UNITYSDK_OFFSET(0xC0BD00)
#define UIWORLDRAIDZONEBALLOON_CHECKAPPEARSTATE_OFFSET UNITYSDK_OFFSET(0xC0AAA0)
#define UIWORLDRAIDZONEBALLOON_STARTFLOATINGTWEEN_OFFSET UNITYSDK_OFFSET(0xC0C060)
#define UIWORLDRAIDZONEBALLOON__SETBOSSINFO_B__52_0_OFFSET UNITYSDK_OFFSET(0xC0C0D0)
#define UIWORLDRAIDZONEBALLOON_PLAYANI_OFFSET UNITYSDK_OFFSET(0xC0C100)
#define UIWORLDRAIDZONEBALLOON_SET_ISPLAYABLE_OFFSET UNITYSDK_OFFSET(0xC0C1C0)
#define UIWORLDRAIDZONEBALLOON_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC0C1D0)
#define UIWORLDRAIDZONEBALLOON_SETTAGCOLLECTION_OFFSET UNITYSDK_OFFSET(0xC0C680)
#define UIWORLDRAIDZONEBALLOON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC0C700)
#define UIWORLDRAIDZONEBALLOON_SETHPONENTER_OFFSET UNITYSDK_OFFSET(0xC0B6F0)
#define UIWORLDRAIDZONEBALLOON_GETANOTHERBOSSKILLEDIDS_OFFSET UNITYSDK_OFFSET(0xC0B680)
#define UIWORLDRAIDZONEBALLOON_SETPORTRAIT_OFFSET UNITYSDK_OFFSET(0xC0A450)
#define UIWORLDRAIDZONEBALLOON_SETPHASECHANGEMODE_OFFSET UNITYSDK_OFFSET(0xBFA4A0)
#define UIWORLDRAIDZONEBALLOON_STOPFLOATINGTWEEN_OFFSET UNITYSDK_OFFSET(0xC0A520)
#define UIWORLDRAIDZONEBALLOON_SETHPCONTROLLERONOFF_OFFSET UNITYSDK_OFFSET(0xBF9490)
#define UIWORLDRAIDZONEBALLOON_GET_ANIINFO_OFFSET UNITYSDK_OFFSET(0xC0CE30)
#define UIWORLDRAIDZONEBALLOON_SETREMAINTIMETEXT_OFFSET UNITYSDK_OFFSET(0xBF9620)
#define UIWORLDRAIDZONEBALLOON_SETLIGHTCOVER_OFFSET UNITYSDK_OFFSET(0xBF9350)
#define UIWORLDRAIDZONEBALLOON_GETBALLOONGROUPID_OFFSET UNITYSDK_OFFSET(0xC0A5B0)
#define UIWORLDRAIDZONEBALLOON__CHECKAPPEARSTATE_G__BOSSSPAWNALARM|53_1_OFFSET UNITYSDK_OFFSET(0xC0BF40)
#define UIWORLDRAIDZONEBALLOON_HANDLEWORLDBOSSHPFAKESYNCCALLBACKMESSAGE_OFFSET UNITYSDK_OFFSET(0xC0CEC0)
#define UIWORLDRAIDZONEBALLOON_SET_CURRENTAPPEARSTATE_OFFSET UNITYSDK_OFFSET(0xC0CF80)
#define UIWORLDRAIDZONEBALLOON_ISHIDEBEFORESPAWN_OFFSET UNITYSDK_OFFSET(0xC0CF90)
#define UIWORLDRAIDZONEBALLOON_ISHIDEANOTHERBOSSPARCELWHENSPAWN_OFFSET UNITYSDK_OFFSET(0xC0B650)
#define UIWORLDRAIDZONEBALLOON_SET_ANIINFO_OFFSET UNITYSDK_OFFSET(0xC0CFC0)
#define UIWORLDRAIDZONEBALLOON_SETUI_OFFSET UNITYSDK_OFFSET(0xC0CFE0)
#define UIWORLDRAIDZONEBALLOON_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0xC0D1C0)
#define UIWORLDRAIDZONEBALLOON_SETHPONSYNC_OFFSET UNITYSDK_OFFSET(0xC0A9A0)
#define UIWORLDRAIDZONEBALLOON_SETTAGCOLLECTIONONOFF_OFFSET UNITYSDK_OFFSET(0xBF9520)
#define UIWORLDRAIDZONEBALLOON_GET_GETBOSSPORTRAIT_OFFSET UNITYSDK_OFFSET(0xC0D700)
#define UIWORLDRAIDZONEBALLOON_PARCELANIEVENT_SETCURRENTTAG_OFFSET UNITYSDK_OFFSET(0xBFA820)
#define UIWORLDRAIDZONEBALLOON_GET_CURRENTAPPEARSTATE_OFFSET UNITYSDK_OFFSET(0xC0D790)
#define UIWORLDRAIDZONEBALLOON_SETANICURRENTAPPEARSTATELASTFRAME_OFFSET UNITYSDK_OFFSET(0xC01D50)
#define UIWORLDRAIDZONEBALLOON__SETANICURRENTAPPEARSTATELASTFRAME_B__68_1_OFFSET UNITYSDK_OFFSET(0xC0D7A0)
#define UIWORLDRAIDZONEBALLOON_AWAKE_OFFSET UNITYSDK_OFFSET(0xC0D7C0)
#define UIWORLDRAIDZONEBALLOON_REQUESTSYNCBYSPAWNBOSS_OFFSET UNITYSDK_OFFSET(0xC0D360)
#define UIWORLDRAIDZONEBALLOON_SET_PHASECHANGEMODE_OFFSET UNITYSDK_OFFSET(0xC0D8F0)
#define UIWORLDRAIDZONEBALLOON_COREMAINTIMER_OFFSET UNITYSDK_OFFSET(0xC0BB80)
#define UIWORLDRAIDZONEBALLOON__COREMAINTIMER_B__65_0_OFFSET UNITYSDK_OFFSET(0xC0D920)
#define UIWORLDRAIDZONEBALLOON_GET_PHASECHANGEMODE_OFFSET UNITYSDK_OFFSET(0xC0D950)
#define UIWORLDRAIDZONEBALLOON__SETREMAINTIMETEXT_B__66_0_OFFSET UNITYSDK_OFFSET(0xC0D960)
#define UIWORLDRAIDZONEBALLOON_CHECKHIDETOSPAWN_OFFSET UNITYSDK_OFFSET(0xC0B300)

	inline static constexpr unsigned int UIWorldRaidZoneBalloon_TypeDefinitionIndex = 8815;

	class UIWorldRaidZoneBalloon : public Il2CppObject
	{
	public:
		Il2CppObject* AnimationStateList; // 0x18
		::UnityEngine::GameObject* FX_UIAni; // 0x20
		::UnityEngine::GameObject* FX_MaxParticipant; // 0x28
		::UnityEngine::Animation* UIAni; // 0x30
		::System::Boolean ExceptFromZoneUIAniPlay; // 0x38
		MXButton* BalloonButton; // 0x40
		UITexture* BossPortrait; // 0x48
		UITexture* DisableBossPortrait; // 0x50
		::UnityEngine::GameObject* LockCover; // 0x58
		::UnityEngine::GameObject* ClearCoverDim; // 0x60
		UIWidget* LightCover; // 0x68
		TweenPosition* FloatingTween; // 0x70
		UIWorldRaidZoneBalloon_HpController* HpController; // 0x78
		UIWorldRaidZoneBalloon_TagController* TagCollection; // 0x80
		::System::Int64 bossGroupId; // 0x88
		::MX::Data::WorldRaidSeasonInfo* seasonInfo; // 0x90
		::MX::Data::WorldRaidBossGroupInfo* groupInfo; // 0x98
		::UnityEngine::Coroutine* remainTimerCoroutine; // 0xA0
		::System::Boolean _IsPlayable_k__BackingField; // 0xA8
		::System::Boolean _PhaseChangeMode_k__BackingField; // 0xA9
		::System::Boolean _PhaseChangeMode_BossAppear_k__BackingField; // 0xAA
		BossAppearState* _CurrentAppearState_k__BackingField; // 0xAC
		WorldRaidZoneBalloonAniInfo* _AniInfo_k__BackingField; // 0xB0

		::System::Boolean SetBossInfo(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETBOSSINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetLockCoverOnOff(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETLOCKCOVERONOFF_OFFSET))(arg, nullptr);
		}

		::System::Void _CheckAppearState_g__SetParcelAnimation|53_0(BossAppearState* arg, <>c__DisplayClass53_0&* arg2)
		{
			((::System::Void(*)(BossAppearState*, <>c__DisplayClass53_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON__CHECKAPPEARSTATE_G__SETPARCELANIMATION|53_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetRemainTime(UIWorldRaidZone* arg)
		{
			((::System::Void(*)(UIWorldRaidZone*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETREMAINTIME_OFFSET))(arg, nullptr);
		}

		::System::Void SetUIOnOff(::System::Boolean arg, ::System::Boolean arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETUIONOFF_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlayable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_GET_ISPLAYABLE_OFFSET))(nullptr);
		}

		::System::Void set_PhaseChangeMode_BossAppear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SET_PHASECHANGEMODE_BOSSAPPEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PhaseChangeMode_BossAppear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_GET_PHASECHANGEMODE_BOSSAPPEAR_OFFSET))(nullptr);
		}

		::System::Boolean _SetAniCurrentAppearStateLastFrame_b__68_0(WorldRaidZoneBalloonAnimationState* arg)
		{
			return ((::System::Boolean(*)(WorldRaidZoneBalloonAnimationState*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON__SETANICURRENTAPPEARSTATELASTFRAME_B__68_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetClearCoverDim(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETCLEARCOVERDIM_OFFSET))(arg, nullptr);
		}

		::System::Void CheckAppearState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_CHECKAPPEARSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void StartFloatingTween()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_STARTFLOATINGTWEEN_OFFSET))(nullptr);
		}

		::System::Boolean _SetBossInfo_b__52_0(::MX::GameLogic::DBModel::WorldRaidBossGroup* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::WorldRaidBossGroup*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON__SETBOSSINFO_B__52_0_OFFSET))(arg, nullptr);
		}

		::System::Void PlayAni()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_PLAYANI_OFFSET))(nullptr);
		}

		::System::Void set_IsPlayable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SET_ISPLAYABLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetTagCollection(BossAppearState* arg)
		{
			((::System::Void(*)(BossAppearState*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETTAGCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetHpOnEnter(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETHPONENTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAnotherBossKilledIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_GETANOTHERBOSSKILLEDIDS_OFFSET))(nullptr);
		}

		::System::Void SetPortrait()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETPORTRAIT_OFFSET))(nullptr);
		}

		::System::Void SetPhaseChangeMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETPHASECHANGEMODE_OFFSET))(nullptr);
		}

		::System::Void StopFloatingTween()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_STOPFLOATINGTWEEN_OFFSET))(nullptr);
		}

		::System::Void SetHpControllerOnOff(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETHPCONTROLLERONOFF_OFFSET))(arg, arg2, nullptr);
		}

		WorldRaidZoneBalloonAniInfo* get_AniInfo()
		{
			return ((WorldRaidZoneBalloonAniInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_GET_ANIINFO_OFFSET))(nullptr);
		}

		::System::Void SetRemainTimeText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETREMAINTIMETEXT_OFFSET))(nullptr);
		}

		::System::Void SetLightCover(::System::Boolean arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETLIGHTCOVER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetBalloonGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_GETBALLOONGROUPID_OFFSET))(nullptr);
		}

		::System::Void _CheckAppearState_g__BossSpawnAlarm|53_1(::FlatData::OperatorCondition* arg, <>c__DisplayClass53_0&* arg2)
		{
			((::System::Void(*)(::FlatData::OperatorCondition*, <>c__DisplayClass53_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON__CHECKAPPEARSTATE_G__BOSSSPAWNALARM|53_1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleWorldBossHpFakeSyncCallBackMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_HANDLEWORLDBOSSHPFAKESYNCCALLBACKMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentAppearState(BossAppearState* arg)
		{
			((::System::Void(*)(BossAppearState*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SET_CURRENTAPPEARSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsHideBeforeSpawn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_ISHIDEBEFORESPAWN_OFFSET))(nullptr);
		}

		::System::Boolean IsHideAnotherBossParcelWhenSpawn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_ISHIDEANOTHERBOSSPARCELWHENSPAWN_OFFSET))(nullptr);
		}

		::System::Void set_AniInfo(WorldRaidZoneBalloonAniInfo* arg)
		{
			((::System::Void(*)(WorldRaidZoneBalloonAniInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SET_ANIINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETUI_OFFSET))(nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetHpOnSync(::System::Int64 arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETHPONSYNC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetTagCollectionOnOff(::System::Boolean arg, ::System::Boolean arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETTAGCOLLECTIONONOFF_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		UITexture* get_GetBossPortrait()
		{
			return ((UITexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_GET_GETBOSSPORTRAIT_OFFSET))(nullptr);
		}

		::System::Void ParcelAniEvent_SetCurrentTag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_PARCELANIEVENT_SETCURRENTTAG_OFFSET))(nullptr);
		}

		BossAppearState* get_CurrentAppearState()
		{
			return ((BossAppearState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_GET_CURRENTAPPEARSTATE_OFFSET))(nullptr);
		}

		::System::Void SetAniCurrentAppearStateLastFrame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SETANICURRENTAPPEARSTATELASTFRAME_OFFSET))(nullptr);
		}

		::System::Boolean _SetAniCurrentAppearStateLastFrame_b__68_1(WorldRaidZoneBalloonAnimationState* arg)
		{
			return ((::System::Boolean(*)(WorldRaidZoneBalloonAnimationState*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON__SETANICURRENTAPPEARSTATELASTFRAME_B__68_1_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RequestSyncBySpawnBoss()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_REQUESTSYNCBYSPAWNBOSS_OFFSET))(nullptr);
		}

		::System::Void set_PhaseChangeMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_SET_PHASECHANGEMODE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoRemainTimer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_COREMAINTIMER_OFFSET))(nullptr);
		}

		::System::Boolean _CoRemainTimer_b__65_0(::MX::GameLogic::DBModel::WorldRaidBossGroup* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::WorldRaidBossGroup*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON__COREMAINTIMER_B__65_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PhaseChangeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_GET_PHASECHANGEMODE_OFFSET))(nullptr);
		}

		::System::Boolean _SetRemainTimeText_b__66_0(::MX::GameLogic::DBModel::WorldRaidBossGroup* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::WorldRaidBossGroup*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON__SETREMAINTIMETEXT_B__66_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckHideToSpawn(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_CHECKHIDETOSPAWN_OFFSET))(arg, nullptr);
		}

	};

