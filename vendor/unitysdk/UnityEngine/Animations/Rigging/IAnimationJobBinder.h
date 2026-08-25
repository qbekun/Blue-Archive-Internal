#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations { class AnimationScriptPlayable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Animations { class IAnimationJob; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::Animations::Rigging { class IAnimationJobData; }
namespace UnityEngine { class Component; }

#define UNITYENGINE_ANIMATIONS_RIGGING_IANIMATIONJOBBINDER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IANIMATIONJOBBINDER_DESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IANIMATIONJOBBINDER_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IANIMATIONJOBBINDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int IAnimationJobBinder_TypeDefinitionIndex = 37148;

	class IAnimationJobBinder : public Il2CppObject
	{
	public:
		::UnityEngine::Animations::AnimationScriptPlayable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Animations::IAnimationJob* arg)
		{
			return (return (::UnityEngine::Animations::AnimationScriptPlayable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Animations::IAnimationJob*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IANIMATIONJOBBINDER_CREATEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Destroy(::UnityEngine::Animations::IAnimationJob* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::IAnimationJob*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IANIMATIONJOBBINDER_DESTROY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::IAnimationJob* Create(::UnityEngine::Animator* arg, ::UnityEngine::Animations::Rigging::IAnimationJobData* arg, ::UnityEngine::Component* arg)
		{
			return (return (::UnityEngine::Animations::IAnimationJob*(*)(::UnityEngine::Animator*, ::UnityEngine::Animations::Rigging::IAnimationJobData*, ::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IANIMATIONJOBBINDER_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Update(::UnityEngine::Animations::IAnimationJob* arg, ::UnityEngine::Animations::Rigging::IAnimationJobData* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::IAnimationJob*, ::UnityEngine::Animations::Rigging::IAnimationJobData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IANIMATIONJOBBINDER_UPDATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

