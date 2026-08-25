#pragma once
#include "unitysdk.h"

class BehaviorType;
class FinishType;
namespace Spine { class Animation; }
class PreDelayType;
namespace UnityEngine { class ScriptableObject; }
class SpineClip;

#define SPINECLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x20E8560)
#define SPINECLIP_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x20E8590)
#define SPINECLIP_GET_RANDOMTIMINGPLAYSTARTTIME_OFFSET UNITYSDK_OFFSET(0x20E85A0)
#define SPINECLIP_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x20E85B0)
#define SPINECLIP_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x20E85C0)
#define SPINECLIP_GET_RANDOMIZEDDELAYDURATION_OFFSET UNITYSDK_OFFSET(0x20E85D0)
#define SPINECLIP_GET_TIMETOOUTROSTART_OFFSET UNITYSDK_OFFSET(0x20E85E0)
#define SPINECLIP_GET_NEXTCLIP_OFFSET UNITYSDK_OFFSET(0x20E85F0)
#define SPINECLIP_GET_DEFAULTMIX_OFFSET UNITYSDK_OFFSET(0x20E8600)
#define SPINECLIP_SET_RANDOMIZEDDELAYDURATION_OFFSET UNITYSDK_OFFSET(0x20E8610)
#define SPINECLIP_SET_RANDOMTIMINGPLAYSTARTTIME_OFFSET UNITYSDK_OFFSET(0x20E8620)
#define SPINECLIP_SET_CANRECEIVEQUEUE_OFFSET UNITYSDK_OFFSET(0x20E8630)
#define SPINECLIP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x20E8640)
#define SPINECLIP_GET_CLIPDURATION_OFFSET UNITYSDK_OFFSET(0x20E87C0)
#define SPINECLIP_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x20E87D0)
#define SPINECLIP_GET_CANRECEIVEQUEUE_OFFSET UNITYSDK_OFFSET(0x20E8800)

	inline static constexpr unsigned int SpineClip_TypeDefinitionIndex = 3788;

	class SpineClip : public ::UnityEngine::GUIStyleState
	{
	public:
		BehaviorType* PlayMode; // 0x30
		FinishType* FinishMode; // 0x34
		::System::String* ClipName; // 0x38
		::System::Boolean IsTrackMainIdle; // 0x40
		::Spine::Animation* _Clip_k__BackingField; // 0x48
		::System::Single defaultMix; // 0x50
		::System::Single clipDuration; // 0x54
		::System::Boolean UseDefaultIntroMix; // 0x58
		::System::Single IntroMix; // 0x5C
		::System::Boolean Loop; // 0x60
		::System::Int32 Track; // 0x64
		::System::Boolean BlockInteractionOnPlay; // 0x68
		::System::Boolean UseDefaultOutroMix; // 0x69
		::System::Single OutroMix; // 0x6C
		::System::Single OutroStartOffset; // 0x70
		::System::Single timeToOutroStart; // 0x74
		::System::Boolean isInitialized; // 0x78
		::System::Boolean canReceiveQueue; // 0x79
		PreDelayType* RandomTimingIntroDelayMode; // 0x7C
		::System::Single IntroDelayDuration; // 0x80
		::System::Single RandomDelayMin; // 0x84
		::System::Single RandomDelayMax; // 0x88
		::System::Int32 AddRandomLoopMin; // 0x8C
		::System::Int32 AddRandomLoopMax; // 0x90
		::System::Single randomTimingPlayStartTime; // 0x94
		::System::Single randomizedDelayDuration; // 0x98
		::UnityEngine::ScriptableObject* NextClipObject; // 0xA0
		::Il2CppArray<::System::Object*>* SyncPlayClipObjects; // 0xA8
		::Il2CppArray<::System::Object*>* SoundKeys; // 0xB0
		SpineClip* nextClip; // 0xB8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_.CTOR_OFFSET))(nullptr);
		}

		::Spine::Animation* get_Clip()
		{
			return ((::Spine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_GET_CLIP_OFFSET))(nullptr);
		}

		::System::Single get_RandomTimingPlayStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_GET_RANDOMTIMINGPLAYSTARTTIME_OFFSET))(nullptr);
		}

		::System::Void set_Clip(::Spine::Animation* arg)
		{
			((::System::Void(*)(::Spine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_SET_CLIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Single get_RandomizedDelayDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_GET_RANDOMIZEDDELAYDURATION_OFFSET))(nullptr);
		}

		::System::Single get_TimeToOutroStart()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_GET_TIMETOOUTROSTART_OFFSET))(nullptr);
		}

		SpineClip* get_NextClip()
		{
			return ((SpineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_GET_NEXTCLIP_OFFSET))(nullptr);
		}

		::System::Single get_DefaultMix()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_GET_DEFAULTMIX_OFFSET))(nullptr);
		}

		::System::Void set_RandomizedDelayDuration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_SET_RANDOMIZEDDELAYDURATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_RandomTimingPlayStartTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_SET_RANDOMTIMINGPLAYSTARTTIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_CanReceiveQueue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_SET_CANRECEIVEQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Single get_ClipDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_GET_CLIPDURATION_OFFSET))(nullptr);
		}

		::Spine::Animation* get_Animation()
		{
			return ((::Spine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_GET_ANIMATION_OFFSET))(nullptr);
		}

		::System::Boolean get_CanReceiveQueue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECLIP_GET_CANRECEIVEQUEUE_OFFSET))(nullptr);
		}

	};

