#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Component; }
namespace UnityEngine::Animations { class AnimationScriptPlayable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Animations { class IAnimationJob; }
namespace UnityEngine::Animations::Rigging { class IAnimationJobData; }

#define UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_DESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_UNITYENGINE.ANIMATIONS.RIGGING.IANIMATIONJOBBINDER.CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_UNITYENGINE.ANIMATIONS.RIGGING.IANIMATIONJOBBINDER.CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_UNITYENGINE.ANIMATIONS.RIGGING.IANIMATIONJOBBINDER.UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_UNITYENGINE.ANIMATIONS.RIGGING.IANIMATIONJOBBINDER.DESTROY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int AnimationJobBinder`2_TypeDefinitionIndex = 37149;

	class AnimationJobBinder`2 : public Il2CppObject
	{
	public:
		::System::Void Destroy(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_DESTROY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Create(::UnityEngine::Animator* arg, Il2CppObject&* arg, ::UnityEngine::Component* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Animator*, Il2CppObject&*, ::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Animations::AnimationScriptPlayable* UnityEngine.Animations.Rigging.IAnimationJobBinder.CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Animations::IAnimationJob* arg)
		{
			return (return (::UnityEngine::Animations::AnimationScriptPlayable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Animations::IAnimationJob*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_UNITYENGINE.ANIMATIONS.RIGGING.IANIMATIONJOBBINDER.CREATEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Animations::IAnimationJob* UnityEngine.Animations.Rigging.IAnimationJobBinder.Create(::UnityEngine::Animator* arg, ::UnityEngine::Animations::Rigging::IAnimationJobData* arg, ::UnityEngine::Component* arg)
		{
			return (return (::UnityEngine::Animations::IAnimationJob*(*)(::UnityEngine::Animator*, ::UnityEngine::Animations::Rigging::IAnimationJobData*, ::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_UNITYENGINE.ANIMATIONS.RIGGING.IANIMATIONJOBBINDER.CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update(Il2CppObject* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UnityEngine.Animations.Rigging.IAnimationJobBinder.Update(::UnityEngine::Animations::IAnimationJob* arg, ::UnityEngine::Animations::Rigging::IAnimationJobData* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::IAnimationJob*, ::UnityEngine::Animations::Rigging::IAnimationJobData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_UNITYENGINE.ANIMATIONS.RIGGING.IANIMATIONJOBBINDER.UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UnityEngine.Animations.Rigging.IAnimationJobBinder.Destroy(::UnityEngine::Animations::IAnimationJob* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::IAnimationJob*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONJOBBINDER`2_UNITYENGINE.ANIMATIONS.RIGGING.IANIMATIONJOBBINDER.DESTROY_OFFSET))(arg, nullptr);
		}

	};
}

