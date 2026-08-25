#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::Animations::Rigging { class SyncSceneToStreamLayer; }
namespace UnityEngine::Animations::Rigging { class IRigLayer; }

#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDERUTILS_BUILDPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x9E25060)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDERUTILS_BUILDRIGPLAYABLES_OFFSET UNITYSDK_OFFSET(0x9E26C80)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDERUTILS_BUILDPLAYABLES_OFFSET UNITYSDK_OFFSET(0x9E25D10)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDERUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E276A0)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int RigBuilderUtils_TypeDefinitionIndex = 37176;

	class RigBuilderUtils : public Il2CppObject
	{
	public:
		::System::UInt16 k_AnimationOutputPriority; // 0x0

		::UnityEngine::Playables::PlayableGraph* BuildPlayableGraph(::UnityEngine::Animator* arg, Il2CppObject* arg, ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer* arg)
		{
			return (return (::UnityEngine::Playables::PlayableGraph*(*)(::UnityEngine::Animator*, Il2CppObject*, ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDERUTILS_BUILDPLAYABLEGRAPH_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* BuildRigPlayables(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Animations::Rigging::IRigLayer* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Animations::Rigging::IRigLayer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDERUTILS_BUILDRIGPLAYABLES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* BuildPlayables(::UnityEngine::Animator* arg, ::UnityEngine::Playables::PlayableGraph* arg, Il2CppObject* arg, ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Animator*, ::UnityEngine::Playables::PlayableGraph*, Il2CppObject*, ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDERUTILS_BUILDPLAYABLES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDERUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

