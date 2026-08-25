#pragma once
#include "unitysdk.h"

namespace MX::Audio { class AnimationAudioEvent; }
namespace UnityEngine { class Animator; }
class InteractionAnim;
class UIUserInteractionParam;
namespace UnityEngine { class Vector3; }
class Phase;

#define UIUSERINTERACTIONBASE_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xB83F50)
#define UIUSERINTERACTIONBASE_SETPROGRESSUI_OFFSET UNITYSDK_OFFSET(0xB84170)
#define UIUSERINTERACTIONBASE_ONANYSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xB84180)
#define UIUSERINTERACTIONBASE_SETUSERINTERACTION_OFFSET UNITYSDK_OFFSET(0xB84250)
#define UIUSERINTERACTIONBASE_TOANIMHASH_OFFSET UNITYSDK_OFFSET(0xB84140)
#define UIUSERINTERACTIONBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xB843A0)
#define UIUSERINTERACTIONBASE_PLAYANIMATIONANDCLOSE_OFFSET UNITYSDK_OFFSET(0xB84550)
#define UIUSERINTERACTIONBASE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB84640)
#define UIUSERINTERACTIONBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xB84670)
#define UIUSERINTERACTIONBASE_UPDATEANIMATIONSTATEWATCH_OFFSET UNITYSDK_OFFSET(0xB84420)
#define UIUSERINTERACTIONBASE_TOANIMENUM_OFFSET UNITYSDK_OFFSET(0xB84780)
#define UIUSERINTERACTIONBASE_CALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0xB847C0)
#define UIUSERINTERACTIONBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB847F0)
#define UIUSERINTERACTIONBASE_CALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0xB848A0)
#define UIUSERINTERACTIONBASE_UPDATEPOINTERINPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIUSERINTERACTIONBASE_ONBACK_OFFSET UNITYSDK_OFFSET(0xB848D0)

	inline static constexpr unsigned int UIUserInteractionBase_TypeDefinitionIndex = 8531;

	class UIUserInteractionBase : public Il2CppObject
	{
	public:
		::System::Int32 HASH_OPEN; // 0xD8
		::System::Int32 HASH_SUCCESS; // 0xDC
		::System::Int32 HASH_FAIL; // 0xE0
		::System::Int32 HASH_IDLE; // 0xE4
		::MX::Audio::AnimationAudioEvent* SoundOpen; // 0xE8
		::MX::Audio::AnimationAudioEvent* SoundSuccess; // 0xF0
		Il2CppObject* resultCallback; // 0xF8
		::UnityEngine::Animator* animator; // 0x100
		::System::Int32 lastStateHash; // 0x108
		::System::Single lastNormalizedTime; // 0x10C
		InteractionAnim* closeUIAfterAnimFinish; // 0x110

		::System::Void PlayAnimation(InteractionAnim* arg)
		{
			((::System::Void(*)(InteractionAnim*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_PLAYANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetProgressUI(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_SETPROGRESSUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnAnyStateExit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_ONANYSTATEEXIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetUserInteraction(UIUserInteractionParam* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(UIUserInteractionParam*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_SETUSERINTERACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 ToAnimHash(InteractionAnim* arg)
		{
			return ((::System::Int32(*)(InteractionAnim*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_TOANIMHASH_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void PlayAnimationAndClose(InteractionAnim* arg)
		{
			((::System::Void(*)(InteractionAnim*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_PLAYANIMATIONANDCLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void UpdateAnimationStateWatch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_UPDATEANIMATIONSTATEWATCH_OFFSET))(nullptr);
		}

		InteractionAnim* ToAnimEnum(::System::Int32 arg)
		{
			return ((InteractionAnim*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_TOANIMENUM_OFFSET))(arg, nullptr);
		}

		::System::Void CallbackFail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_CALLBACKFAIL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CallbackSuccess()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_CALLBACKSUCCESS_OFFSET))(nullptr);
		}

		::System::Void UpdatePointerInput(::System::Int32 arg, ::UnityEngine::Vector3* arg2, Phase* arg3)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3*, Phase*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_UPDATEPOINTERINPUT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONBASE_ONBACK_OFFSET))(nullptr);
		}

	};

