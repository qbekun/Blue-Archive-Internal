#pragma once
#include "unitysdk.h"

namespace FlatData { class EmojiEvent; }
namespace UnityEngine { class Animation; }
class UILabel;
namespace UnityEngine { class Coroutine; }

#define EMOJICONTENT_GET_COMMONDURATION_OFFSET UNITYSDK_OFFSET(0x25E5CE0)
#define EMOJICONTENT_GET_ANIMATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x25E5D20)
#define EMOJICONTENT_GET_EMOJILENGTH_OFFSET UNITYSDK_OFFSET(0x25E5E10)
#define EMOJICONTENT_GET_DEPTHBIAS_OFFSET UNITYSDK_OFFSET(0x25E6DD0)
#define EMOJICONTENT_SET_DEPTHBIAS_OFFSET UNITYSDK_OFFSET(0x25E6DE0)
#define EMOJICONTENT_GET_USEBACKGROUND_OFFSET UNITYSDK_OFFSET(0x25E6DF0)
#define EMOJICONTENT_SET_USEBACKGROUND_OFFSET UNITYSDK_OFFSET(0x25E6E00)
#define EMOJICONTENT_GET_AUDIOLONGESTLENGTH_OFFSET UNITYSDK_OFFSET(0x25E6E10)
#define EMOJICONTENT_SET_AUDIOLONGESTLENGTH_OFFSET UNITYSDK_OFFSET(0x25E6E20)
#define EMOJICONTENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x25E6E30)
#define EMOJICONTENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25E2EE0)
#define EMOJICONTENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x25E6E80)
#define EMOJICONTENT_SETMUTE_OFFSET UNITYSDK_OFFSET(0x25E41A0)
#define EMOJICONTENT_SETUSEBACKGROUND_OFFSET UNITYSDK_OFFSET(0x25E41F0)
#define EMOJICONTENT_PLAY_OFFSET UNITYSDK_OFFSET(0x25E6770)
#define EMOJICONTENT_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0x25E4D30)
#define EMOJICONTENT_STOP_OFFSET UNITYSDK_OFFSET(0x25E4DF0)
#define EMOJICONTENT_SETDEPTH_OFFSET UNITYSDK_OFFSET(0x25E5290)
#define EMOJICONTENT_SETCOUNTLABELFLIP_OFFSET UNITYSDK_OFFSET(0x25E5E30)
#define EMOJICONTENT_COPLAY_OFFSET UNITYSDK_OFFSET(0x25E6F30)
#define EMOJICONTENT_SETDEPTH_OFFSET UNITYSDK_OFFSET(0x25E6EC0)
#define EMOJICONTENT_RESETDEPTH_OFFSET UNITYSDK_OFFSET(0x25E7000)
#define EMOJICONTENT_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x25E7080)
#define EMOJICONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x25E7140)

	inline static constexpr unsigned int EmojiContent_TypeDefinitionIndex = 6395;

	class EmojiContent : public Il2CppObject
	{
	public:
		::FlatData::EmojiEvent* Type; // 0x18
		::UnityEngine::Animation* emojiAnimation; // 0x20
		UILabel* countLabel; // 0x28
		::System::Int32 _DepthBias_k__BackingField; // 0x30
		::System::Boolean _UseBackground_k__BackingField; // 0x34
		::System::Int32 prevDepthBias; // 0x38
		::UnityEngine::Coroutine* playCoroutine; // 0x40
		::Il2CppArray<::System::Object*>* widgets; // 0x48
		::Il2CppArray<::System::Object*>* audios; // 0x50
		::System::Single _audioLongestLength_k__BackingField; // 0x58

		::System::Single get_CommonDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_GET_COMMONDURATION_OFFSET))(nullptr);
		}

		::System::Single get_AnimationLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_GET_ANIMATIONLENGTH_OFFSET))(nullptr);
		}

		::System::Single get_EmojiLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_GET_EMOJILENGTH_OFFSET))(nullptr);
		}

		::System::Int32 get_DepthBias()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_GET_DEPTHBIAS_OFFSET))(nullptr);
		}

		::System::Void set_DepthBias(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_SET_DEPTHBIAS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseBackground()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_GET_USEBACKGROUND_OFFSET))(nullptr);
		}

		::System::Void set_UseBackground(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_SET_USEBACKGROUND_OFFSET))(arg, nullptr);
		}

		::System::Single get_audioLongestLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_GET_AUDIOLONGESTLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_audioLongestLength(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_SET_AUDIOLONGESTLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetMute(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_SETMUTE_OFFSET))(arg, nullptr);
		}

		::System::Void SetUseBackground(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_SETUSEBACKGROUND_OFFSET))(arg, nullptr);
		}

		::System::Void Play(::System::Single arg, ::System::Single arg2, ::System::Action* arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_PLAY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StopAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_STOPANIMATION_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_STOP_OFFSET))(nullptr);
		}

		::System::Void SetDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_SETDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void SetCountLabelFlip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_SETCOUNTLABELFLIP_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlay(::System::Single arg, ::System::Single arg2, ::System::Action* arg3, ::System::Action* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Single, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_COPLAY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetDepth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_SETDEPTH_OFFSET))(nullptr);
		}

		::System::Void ResetDepth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_RESETDEPTH_OFFSET))(nullptr);
		}

		::System::Void PlayAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_PLAYANIMATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJICONTENT_.CTOR_OFFSET))(nullptr);
		}

	};

