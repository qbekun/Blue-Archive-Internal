#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::Animations { class AnimationStream; }
namespace UnityEngine::Animations::Rigging { class ReadWriteTransformHandle; }

#define UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONRUNTIMEUTILS_SELECT_OFFSET UNITYSDK_OFFSET(0x9E2D550)
#define UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONRUNTIMEUTILS_SELECT_OFFSET UNITYSDK_OFFSET(0x9E21A10)
#define UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONRUNTIMEUTILS_PROJECTONPLANE_OFFSET UNITYSDK_OFFSET(0x9E21AB0)
#define UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONRUNTIMEUTILS_SUM_OFFSET UNITYSDK_OFFSET(0x9E21840)
#define UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONRUNTIMEUTILS_PASSTHROUGH_OFFSET UNITYSDK_OFFSET(0x9E218D0)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int AnimationRuntimeUtils_TypeDefinitionIndex = 37198;

	class AnimationRuntimeUtils : public Il2CppObject
	{
	public:
		::System::Single Select(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONRUNTIMEUTILS_SELECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* Select(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONRUNTIMEUTILS_SELECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* ProjectOnPlane(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONRUNTIMEUTILS_PROJECTONPLANE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Sum(Il2CppObject* arg)
		{
			return (return (::System::Single(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONRUNTIMEUTILS_SUM_OFFSET))(arg, nullptr);
		}

		::System::Void PassThrough(::UnityEngine::Animations::AnimationStream* arg, ::UnityEngine::Animations::Rigging::ReadWriteTransformHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::UnityEngine::Animations::Rigging::ReadWriteTransformHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_ANIMATIONRUNTIMEUTILS_PASSTHROUGH_OFFSET))(arg, arg, nullptr);
		}

	};
}

