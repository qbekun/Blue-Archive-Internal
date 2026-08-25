#pragma once
#include "unitysdk.h"

class UIBattlePassLobby;
class UIBattlePassMission;
class UIBattlePassRandomText;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
class UITexture;
class BattlePassPreviousAction;
namespace UnityEngine { class Coroutine; }
class BattlePassTask;
namespace Cysharp::Threading::Tasks { class UniTask; }

#define UIBATTLEPASS__ONCLICKLOBBY_G__COONCLICKLOBBY|23_0_OFFSET UNITYSDK_OFFSET(0x224E110)
#define UIBATTLEPASS___N__0_OFFSET UNITYSDK_OFFSET(0x224E1A0)
#define UIBATTLEPASS__ONCLICKMISSION_G__COONCLICKMISSION|25_0_OFFSET UNITYSDK_OFFSET(0x224E1B0)
#define UIBATTLEPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x224E240)
#define UIBATTLEPASS_SET_PREVIOUSACTION_OFFSET UNITYSDK_OFFSET(0x224E250)
#define UIBATTLEPASS_SETPREVIOUSACTION_OFFSET UNITYSDK_OFFSET(0x224E260)
#define UIBATTLEPASS_ONOPENED_OFFSET UNITYSDK_OFFSET(0x224E270)
#define UIBATTLEPASS_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x224E5A0)
#define UIBATTLEPASS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x224E630)
#define UIBATTLEPASS_ONBACK_OFFSET UNITYSDK_OFFSET(0x224E660)
#define UIBATTLEPASS_GET_PREVIOUSACTION_OFFSET UNITYSDK_OFFSET(0x224E7D0)
#define UIBATTLEPASS_ONOPENEDPOST_OFFSET UNITYSDK_OFFSET(0x224E7E0)
#define UIBATTLEPASS_GET_TASK_OFFSET UNITYSDK_OFFSET(0x224E800)
#define UIBATTLEPASS_ONCLICKLOBBY_OFFSET UNITYSDK_OFFSET(0x224E6E0)
#define UIBATTLEPASS_SETTEXTURES_OFFSET UNITYSDK_OFFSET(0x224E840)
#define UIBATTLEPASS_ONCLICKMISSION_OFFSET UNITYSDK_OFFSET(0x224E4B0)
#define UIBATTLEPASS_AWAKE_OFFSET UNITYSDK_OFFSET(0x224E9C0)

	inline static constexpr unsigned int UIBattlePass_TypeDefinitionIndex = 4532;

	class UIBattlePass : public Il2CppObject
	{
	public:
		UIBattlePassLobby* Lobby; // 0xD8
		UIBattlePassMission* Mission; // 0xE0
		UIBattlePassRandomText* RandomText; // 0xE8
		::UnityEngine::Animation* OpenAnimation; // 0xF0
		::UnityEngine::Animation* TransitionAnimation; // 0xF8
		::UnityEngine::AnimationClip* LobbyToMissionAni; // 0x100
		::UnityEngine::AnimationClip* MissionToLobbyAni; // 0x108
		UITexture* TitleBanner_Anim; // 0x110
		BattlePassPreviousAction* _PreviousAction_k__BackingField; // 0x118
		::System::Threading::CancellationTokenSource* cts; // 0x120
		::UnityEngine::Coroutine* clickLobbyCoroutine; // 0x128
		::UnityEngine::Coroutine* clickMissionCoroutine; // 0x130

		::System::Collections::IEnumerator* _OnClickLobby_g__coOnClickLobby|23_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS__ONCLICKLOBBY_G__COONCLICKLOBBY|23_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS___N__0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnClickMission_g__coOnClickMission|25_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS__ONCLICKMISSION_G__COONCLICKMISSION|25_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PreviousAction(BattlePassPreviousAction* arg)
		{
			((::System::Void(*)(BattlePassPreviousAction*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_SET_PREVIOUSACTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetPreviousAction(BattlePassPreviousAction* arg)
		{
			((::System::Void(*)(BattlePassPreviousAction*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_SETPREVIOUSACTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_ONBACK_OFFSET))(nullptr);
		}

		BattlePassPreviousAction* get_PreviousAction()
		{
			return ((BattlePassPreviousAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_GET_PREVIOUSACTION_OFFSET))(nullptr);
		}

		::System::Void OnOpenedPost(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_ONOPENEDPOST_OFFSET))(arg, nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void OnClickLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_ONCLICKLOBBY_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* SetTextures()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_SETTEXTURES_OFFSET))(nullptr);
		}

		::System::Void OnClickMission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_ONCLICKMISSION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_AWAKE_OFFSET))(nullptr);
		}

	};

