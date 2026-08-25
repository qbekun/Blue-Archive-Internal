#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Animations { class AnimationPlayableOutput; }
namespace UnityEngine::Playables { class Playable; }

#define UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA189CB0)
#define UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_FINDMIXERS_OFFSET UNITYSDK_OFFSET(0xA189D70)
#define UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_FINDMIXERS_OFFSET UNITYSDK_OFFSET(0xA189E80)
#define UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA18A1F0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AnimationOutputWeightProcessor_TypeDefinitionIndex = 36243;

	class AnimationOutputWeightProcessor : public Il2CppObject
	{
	public:
		::UnityEngine::Animations::AnimationPlayableOutput* m_Output; // 0x10
		Il2CppObject* m_Mixers; // 0x20

		::System::Void .ctor(::UnityEngine::Animations::AnimationPlayableOutput* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationPlayableOutput*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void FindMixers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_FINDMIXERS_OFFSET))(nullptr);
		}

		::System::Void FindMixers(::UnityEngine::Playables::Playable* arg, ::System::Int32 arg, ::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::System::Int32, ::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_FINDMIXERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Evaluate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ANIMATIONOUTPUTWEIGHTPROCESSOR_EVALUATE_OFFSET))(nullptr);
		}

	};
}

