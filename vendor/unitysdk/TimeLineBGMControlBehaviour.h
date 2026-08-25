#pragma once
#include "unitysdk.h"

class TimeLineBGMController;
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define TIMELINEBGMCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x204BF70)
#define TIMELINEBGMCONTROLBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x204C000)
#define TIMELINEBGMCONTROLBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0x204C010)
#define TIMELINEBGMCONTROLBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x204C020)

	inline static constexpr unsigned int TimeLineBGMControlBehaviour_TypeDefinitionIndex = 3292;

	class TimeLineBGMControlBehaviour : public Il2CppObject
	{
	public:
		TimeLineBGMController* _Clip_k__BackingField; // 0x10

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEBGMCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		TimeLineBGMController* get_Clip()
		{
			return ((TimeLineBGMController*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEBGMCONTROLBEHAVIOUR_GET_CLIP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEBGMCONTROLBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Clip(TimeLineBGMController* arg)
		{
			((::System::Void(*)(TimeLineBGMController*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEBGMCONTROLBEHAVIOUR_SET_CLIP_OFFSET))(arg, nullptr);
		}

	};

