#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace UnityEngine { class Animator; }
namespace FlatData { class AnimatorData; }
namespace MX::MinigameShooting { class AnimatorState; }
namespace UnityEngine { class Coroutine; }
namespace MX::Data { class AnimatorData; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace MX::MinigameShooting { class MGSAudioController; }

#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_REFRESHATTACKSPEED_OFFSET UNITYSDK_OFFSET(0x145A530)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_INITANIMATORSTATEDATA_OFFSET UNITYSDK_OFFSET(0x145A6C0)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_PLAYPUBLICTIMELINE_OFFSET UNITYSDK_OFFSET(0x145A7E0)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_GETPLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0x145AA40)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x145AA80)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_SETANIMATIONTIME_OFFSET UNITYSDK_OFFSET(0x145A5D0)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_TIMELINEENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x145ABC0)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x145AC70)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x145AE50)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_COPLAYPUBLICTIMELINE_OFFSET UNITYSDK_OFFSET(0x145B2E0)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x145AD80)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_GET_ANIMATORDATA_OFFSET UNITYSDK_OFFSET(0x145B3A0)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_GET_STATEDATADIC_OFFSET UNITYSDK_OFFSET(0x145B3B0)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_SET_ANIMATORDATA_OFFSET UNITYSDK_OFFSET(0x145B3C0)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_SET_STATEDATADIC_OFFSET UNITYSDK_OFFSET(0x145B3E0)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_GET_CHARACTERAUDIOCONTROLLER_OFFSET UNITYSDK_OFFSET(0x145ABA0)
#define MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_CROSSFADE_OFFSET UNITYSDK_OFFSET(0x145B3F0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int CharacterAnimationController_TypeDefinitionIndex = 15035;

	class CharacterAnimationController : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* Character; // 0x10
		::UnityEngine::Animator* Animator; // 0x18
		::FlatData::AnimatorData* _AnimatorData_k__BackingField; // 0x20
		Il2CppObject* _StateDataDic_k__BackingField; // 0x30
		::MX::MinigameShooting::AnimatorState* CurAnimation; // 0x38
		::System::Single endCallbackTimer; // 0x3C
		Il2CppObject* animationEndCallback; // 0x40
		::UnityEngine::Coroutine* endCoroutine; // 0x48

		::System::Void RefreshAttackSpeed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_REFRESHATTACKSPEED_OFFSET))(nullptr);
		}

		::System::Void InitAnimatorStateData(::MX::MinigameShooting::AnimatorState* arg, ::MX::Data::AnimatorData* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::AnimatorState*, ::MX::Data::AnimatorData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_INITANIMATORSTATEDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean PlayPublicTimeline(::System::Int32 arg, ::MX::MinigameShooting::AnimatorState* arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MX::MinigameShooting::AnimatorState*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_PLAYPUBLICTIMELINE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Playables::PlayableAsset* GetPlayableAsset(::System::Int32 arg)
		{
			return ((::UnityEngine::Playables::PlayableAsset*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_GETPLAYABLEASSET_OFFSET))(arg, nullptr);
		}

		::System::Void Play(::MX::MinigameShooting::AnimatorState* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::AnimatorState*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_PLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetAnimationTime(::MX::MinigameShooting::AnimatorState* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::AnimatorState*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_SETANIMATIONTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* TimelineEndCallback(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_TIMELINEENDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayPublicTimeline(::UnityEngine::Playables::PlayableAsset* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Playables::PlayableAsset*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_COPLAYPUBLICTIMELINE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single GetLength(::MX::MinigameShooting::AnimatorState* arg)
		{
			return ((::System::Single(*)(::MX::MinigameShooting::AnimatorState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_GETLENGTH_OFFSET))(arg, nullptr);
		}

		::FlatData::AnimatorData* get_AnimatorData()
		{
			return ((::FlatData::AnimatorData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_GET_ANIMATORDATA_OFFSET))(nullptr);
		}

		Il2CppObject* get_StateDataDic()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_GET_STATEDATADIC_OFFSET))(nullptr);
		}

		::System::Void set_AnimatorData(::FlatData::AnimatorData* arg)
		{
			((::System::Void(*)(::FlatData::AnimatorData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_SET_ANIMATORDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_StateDataDic(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_SET_STATEDATADIC_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::MGSAudioController* get_characterAudioController()
		{
			return ((::MX::MinigameShooting::MGSAudioController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_GET_CHARACTERAUDIOCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void CrossFade(::MX::MinigameShooting::AnimatorState* arg, ::System::Single arg2, ::System::Single arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::MinigameShooting::AnimatorState*, ::System::Single, ::System::Single, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERANIMATIONCONTROLLER_CROSSFADE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

