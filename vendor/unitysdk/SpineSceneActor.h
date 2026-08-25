#pragma once
#include "unitysdk.h"

namespace FlatData { class DialogCategory; }
namespace UnityEngine { class Transform; }
class SpineScenePlayer;
class ChatDialog;
namespace UnityEngine { class Coroutine; }
namespace FlatData { class DialogCondition; }

#define SPINESCENEACTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x20EA260)
#define SPINESCENEACTOR_ENABLEFXEXIT_OFFSET UNITYSDK_OFFSET(0x20EA2E0)
#define SPINESCENEACTOR_PLAYEMOTICON_OFFSET UNITYSDK_OFFSET(0x20EA380)
#define SPINESCENEACTOR_GET_IDLETRACKS_OFFSET UNITYSDK_OFFSET(0x20EA4F0)
#define SPINESCENEACTOR_GET_STATEAFTERINTERACTION_OFFSET UNITYSDK_OFFSET(0x20EA570)
#define SPINESCENEACTOR_ONCLICK_OFFSET UNITYSDK_OFFSET(0x20EA580)
#define SPINESCENEACTOR_GET_ISIDLE_OFFSET UNITYSDK_OFFSET(0x20EA950)
#define SPINESCENEACTOR_INTERACT_OFFSET UNITYSDK_OFFSET(0x20EA960)
#define SPINESCENEACTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20EAC80)
#define SPINESCENEACTOR_GET_STATENAME_OFFSET UNITYSDK_OFFSET(0x20EAD90)
#define SPINESCENEACTOR_ENABLEFXENTER_OFFSET UNITYSDK_OFFSET(0x20EACF0)
#define SPINESCENEACTOR_GET_INTERACTIONTRACKS_OFFSET UNITYSDK_OFFSET(0x20EADA0)
#define SPINESCENEACTOR_COPLAYIDLEDIALOG_OFFSET UNITYSDK_OFFSET(0x20EAE20)
#define SPINESCENEACTOR_GET_TRACKS_OFFSET UNITYSDK_OFFSET(0x20EAEB0)
#define SPINESCENEACTOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x20EB020)
#define SPINESCENEACTOR_COPLAYFXEXIT_OFFSET UNITYSDK_OFFSET(0x20EAC00)
#define SPINESCENEACTOR_PLAYDIALOG_OFFSET UNITYSDK_OFFSET(0x20EAA00)
#define SPINESCENEACTOR_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x20EB150)

	inline static constexpr unsigned int SpineSceneActor_TypeDefinitionIndex = 3801;

	class SpineSceneActor : public Il2CppObject
	{
	public:
		::System::String* stateName; // 0x18
		::System::Boolean isIdle; // 0x20
		::System::Single minDuration; // 0x24
		::System::Single maxDuration; // 0x28
		::System::String* stateAfterInteraction; // 0x30
		::FlatData::DialogCategory* dialogCategory; // 0x38
		::System::Int64 characterId; // 0x40
		::UnityEngine::Transform* emoticonParent; // 0x48
		::UnityEngine::Transform* fxEnterRoot; // 0x50
		::UnityEngine::Transform* fxExitRoot; // 0x58
		::System::Single fxExitTimeOffset; // 0x60
		Il2CppObject* idleTracks; // 0x68
		Il2CppObject* interactionTracks; // 0x70
		Il2CppObject* tracks; // 0x78
		SpineScenePlayer* spineScenePlayer; // 0x80
		ChatDialog* chatDialog; // 0x88
		::UnityEngine::Coroutine* playIdleDialogCoroutine; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void EnableFxExit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_ENABLEFXEXIT_OFFSET))(arg, nullptr);
		}

		::System::Void PlayEmoticon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_PLAYEMOTICON_OFFSET))(nullptr);
		}

		Il2CppObject* get_IdleTracks()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_GET_IDLETRACKS_OFFSET))(nullptr);
		}

		::System::String* get_StateAfterInteraction()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_GET_STATEAFTERINTERACTION_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_ONCLICK_OFFSET))(nullptr);
		}

		::System::Boolean get_IsIdle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_GET_ISIDLE_OFFSET))(nullptr);
		}

		::System::Void Interact(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_INTERACT_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_ONENABLE_OFFSET))(nullptr);
		}

		::System::String* get_StateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_GET_STATENAME_OFFSET))(nullptr);
		}

		::System::Void EnableFxEnter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_ENABLEFXENTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_InteractionTracks()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_GET_INTERACTIONTRACKS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayIdleDialog()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_COPLAYIDLEDIALOG_OFFSET))(nullptr);
		}

		Il2CppObject* get_Tracks()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_GET_TRACKS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayFxExit(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_COPLAYFXEXIT_OFFSET))(arg, nullptr);
		}

		::System::Void PlayDialog(::FlatData::DialogCondition* arg)
		{
			((::System::Void(*)(::FlatData::DialogCondition*, ::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_PLAYDIALOG_OFFSET))(arg, nullptr);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESCENEACTOR_GET_DURATION_OFFSET))(nullptr);
		}

	};

