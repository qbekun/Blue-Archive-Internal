#pragma once
#include "unitysdk.h"

class VibrationClip;
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define VIBRATIONBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0x20532F0)
#define VIBRATIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x2053300)

	inline static constexpr unsigned int VibrationBehaviour_TypeDefinitionIndex = 3331;

	class VibrationBehaviour : public Il2CppObject
	{
	public:
		VibrationClip* Clip; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIBRATIONBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + VIBRATIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

	};

