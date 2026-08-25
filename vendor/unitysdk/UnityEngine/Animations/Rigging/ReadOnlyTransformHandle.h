#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations { class TransformStreamHandle; }
namespace UnityEngine::Animations { class TransformSceneHandle; }
namespace UnityEngine::Animations { class AnimationStream; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine::Animations::Rigging { class ReadOnlyTransformHandle; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_ANIMATIONS_RIGGING_READONLYTRANSFORMHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x9E1F6D0)
#define UNITYENGINE_ANIMATIONS_RIGGING_READONLYTRANSFORMHANDLE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x9E1F760)
#define UNITYENGINE_ANIMATIONS_RIGGING_READONLYTRANSFORMHANDLE_GETROTATION_OFFSET UNITYSDK_OFFSET(0x9E1F850)
#define UNITYENGINE_ANIMATIONS_RIGGING_READONLYTRANSFORMHANDLE_BIND_OFFSET UNITYSDK_OFFSET(0x9E22FF0)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int ReadOnlyTransformHandle_TypeDefinitionIndex = 37163;

	class ReadOnlyTransformHandle : public Il2CppObject
	{
	public:
		::UnityEngine::Animations::TransformStreamHandle* m_StreamHandle; // 0x10
		::UnityEngine::Animations::TransformSceneHandle* m_SceneHandle; // 0x1C
		::System::Byte m_InStream; // 0x24

		::System::Boolean IsValid(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_READONLYTRANSFORMHANDLE_ISVALID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetPosition(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_READONLYTRANSFORMHANDLE_GETPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* GetRotation(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_READONLYTRANSFORMHANDLE_GETROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle* Bind(::UnityEngine::Animator* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle*(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_READONLYTRANSFORMHANDLE_BIND_OFFSET))(arg, arg, nullptr);
		}

	};
}

