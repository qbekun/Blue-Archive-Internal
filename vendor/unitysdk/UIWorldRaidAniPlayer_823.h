#pragma once
#include "unitysdk.h"

class UIWorldRaidZoneBalloon;
class UIWidget;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class MXButton;
class ClearBossPhase;

#define UIWORLDRAIDANIPLAYER_823_AWAKE_OFFSET UNITYSDK_OFFSET(0xBF8730)
#define UIWORLDRAIDANIPLAYER_823_STARTPLAYONENTER_OFFSET UNITYSDK_OFFSET(0xBF8860)
#define UIWORLDRAIDANIPLAYER_823_SETBALLOONUIPREVSTATE_OFFSET UNITYSDK_OFFSET(0xBF8930)
#define UIWORLDRAIDANIPLAYER_823_PHASECHANGE_OFFSET UNITYSDK_OFFSET(0xBF9C20)
#define UIWORLDRAIDANIPLAYER_823__PHASECHANGE_G__ENDCALLBACK|12_0_OFFSET UNITYSDK_OFFSET(0xBFA010)
#define UIWORLDRAIDANIPLAYER_823_CHECKALLCLEAR_OFFSET UNITYSDK_OFFSET(0xBFA0B0)
#define UIWORLDRAIDANIPLAYER_823_STARTPLAYONREFRESH_OFFSET UNITYSDK_OFFSET(0xBFA580)
#define UIWORLDRAIDANIPLAYER_823_RESETPHASECHANGEMODE_OFFSET UNITYSDK_OFFSET(0xBFA2E0)
#define UIWORLDRAIDANIPLAYER_823_SETBACKGROUND_OFFSET UNITYSDK_OFFSET(0xBF90F0)
#define UIWORLDRAIDANIPLAYER_823_.CTOR_OFFSET UNITYSDK_OFFSET(0xBFA6B0)
#define UIWORLDRAIDANIPLAYER_823_CO_PLAYONENTERLOBBY_OFFSET UNITYSDK_OFFSET(0xBFA6C0)
#define UIWORLDRAIDANIPLAYER_823_SETBALLOONAPPEAR_OFFSET UNITYSDK_OFFSET(0xBF9FA0)
#define UIWORLDRAIDANIPLAYER_823_PARCELANIEVENT_SETCURRENTTAG_OFFSET UNITYSDK_OFFSET(0xBFA770)

	inline static constexpr unsigned int UIWorldRaidAniPlayer_823_TypeDefinitionIndex = 8770;

	class UIWorldRaidAniPlayer_823 : public Il2CppObject
	{
	public:
		UIWorldRaidZoneBalloon* balloon01; // 0x38
		UIWorldRaidZoneBalloon* balloon02; // 0x40
		UIWidget* LineEffectWidget; // 0x48
		::UnityEngine::GameObject* Gear; // 0x50
		::UnityEngine::GameObject* FX_Effect; // 0x58
		::UnityEngine::Animation* ParcelAnimation; // 0x60
		MXButton* PhaseChangeButton; // 0x68
		ClearBossPhase* currentPhase; // 0x70
		::System::Boolean firstSeasonEnter; // 0x74

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_823_AWAKE_OFFSET))(nullptr);
		}

		::System::Void StartPlayOnEnter(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_823_STARTPLAYONENTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetBalloonUIPrevState(UIWorldRaidZoneBalloon* arg)
		{
			((::System::Void(*)(UIWorldRaidZoneBalloon*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_823_SETBALLOONUIPREVSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void PhaseChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_823_PHASECHANGE_OFFSET))(nullptr);
		}

		::System::Void _PhaseChange_g__EndCallback|12_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_823__PHASECHANGE_G__ENDCALLBACK|12_0_OFFSET))(nullptr);
		}

		::System::Void CheckAllClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_823_CHECKALLCLEAR_OFFSET))(nullptr);
		}

		::System::Void StartPlayOnRefresh(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_823_STARTPLAYONREFRESH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetPhaseChangeMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_823_RESETPHASECHANGEMODE_OFFSET))(nullptr);
		}

		::System::Void SetBackground()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_823_SETBACKGROUND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_823_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayOnEnterLobby(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_823_CO_PLAYONENTERLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Void SetBalloonAppear(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_823_SETBALLOONAPPEAR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ParcelAniEvent_SetCurrentTag(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_823_PARCELANIEVENT_SETCURRENTTAG_OFFSET))(arg, nullptr);
		}

	};

