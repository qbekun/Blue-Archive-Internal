#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations { class AnimationPlayableOutput; }
namespace UnityEngine::Experimental::Animations { class AnimationStreamSource; }
namespace UnityEngine::Playables { class PlayableOutputHandle; }
namespace UnityEngine::Playables { class PlayableOutputHandle&; }

#define UNITYENGINE_EXPERIMENTAL_ANIMATIONS_ANIMATIONPLAYABLEOUTPUTEXTENSIONS_SETANIMATIONSTREAMSOURCE_OFFSET UNITYSDK_OFFSET(0xA1CDDA0)
#define UNITYENGINE_EXPERIMENTAL_ANIMATIONS_ANIMATIONPLAYABLEOUTPUTEXTENSIONS_SETSORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA1CDE30)
#define UNITYENGINE_EXPERIMENTAL_ANIMATIONS_ANIMATIONPLAYABLEOUTPUTEXTENSIONS_INTERNALSETANIMATIONSTREAMSOURCE_OFFSET UNITYSDK_OFFSET(0xA1CDDF0)
#define UNITYENGINE_EXPERIMENTAL_ANIMATIONS_ANIMATIONPLAYABLEOUTPUTEXTENSIONS_INTERNALSETSORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA1CDE70)
#define UNITYENGINE_EXPERIMENTAL_ANIMATIONS_ANIMATIONPLAYABLEOUTPUTEXTENSIONS_INTERNALSETANIMATIONSTREAMSOURCE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1CDEB0)
#define UNITYENGINE_EXPERIMENTAL_ANIMATIONS_ANIMATIONPLAYABLEOUTPUTEXTENSIONS_INTERNALSETSORTINGORDER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1CDEF0)

namespace UnityEngine::Experimental::Animations
{
	inline static constexpr unsigned int AnimationPlayableOutputExtensions_TypeDefinitionIndex = 36483;

	class AnimationPlayableOutputExtensions : public Il2CppObject
	{
	public:
		::System::Void SetAnimationStreamSource(::UnityEngine::Animations::AnimationPlayableOutput* arg, ::UnityEngine::Experimental::Animations::AnimationStreamSource* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationPlayableOutput*, ::UnityEngine::Experimental::Animations::AnimationStreamSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_ANIMATIONS_ANIMATIONPLAYABLEOUTPUTEXTENSIONS_SETANIMATIONSTREAMSOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSortingOrder(::UnityEngine::Animations::AnimationPlayableOutput* arg, ::System::UInt16 arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationPlayableOutput*, ::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_ANIMATIONS_ANIMATIONPLAYABLEOUTPUTEXTENSIONS_SETSORTINGORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalSetAnimationStreamSource(::UnityEngine::Playables::PlayableOutputHandle* arg, ::UnityEngine::Experimental::Animations::AnimationStreamSource* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle*, ::UnityEngine::Experimental::Animations::AnimationStreamSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_ANIMATIONS_ANIMATIONPLAYABLEOUTPUTEXTENSIONS_INTERNALSETANIMATIONSTREAMSOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalSetSortingOrder(::UnityEngine::Playables::PlayableOutputHandle* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_ANIMATIONS_ANIMATIONPLAYABLEOUTPUTEXTENSIONS_INTERNALSETSORTINGORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalSetAnimationStreamSource_Injected(::UnityEngine::Playables::PlayableOutputHandle&* arg, ::UnityEngine::Experimental::Animations::AnimationStreamSource* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&*, ::UnityEngine::Experimental::Animations::AnimationStreamSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_ANIMATIONS_ANIMATIONPLAYABLEOUTPUTEXTENSIONS_INTERNALSETANIMATIONSTREAMSOURCE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalSetSortingOrder_Injected(::UnityEngine::Playables::PlayableOutputHandle&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_ANIMATIONS_ANIMATIONPLAYABLEOUTPUTEXTENSIONS_INTERNALSETSORTINGORDER_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

