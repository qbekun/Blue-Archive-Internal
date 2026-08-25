#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations { class TransformStreamHandle; }
namespace UnityEngine::Animations { class AnimationStream; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine::Animations::Rigging { class ReadWriteTransformHandle; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }

#define UNITYENGINE_ANIMATIONS_RIGGING_READWRITETRANSFORMHANDLE_SETLOCALTRS_OFFSET UNITYSDK_OFFSET(0x9E22D60)
#define UNITYENGINE_ANIMATIONS_RIGGING_READWRITETRANSFORMHANDLE_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x9E1F800)
#define UNITYENGINE_ANIMATIONS_RIGGING_READWRITETRANSFORMHANDLE_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9E220E0)
#define UNITYENGINE_ANIMATIONS_RIGGING_READWRITETRANSFORMHANDLE_BIND_OFFSET UNITYSDK_OFFSET(0x9E22E00)
#define UNITYENGINE_ANIMATIONS_RIGGING_READWRITETRANSFORMHANDLE_GETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9E21A60)
#define UNITYENGINE_ANIMATIONS_RIGGING_READWRITETRANSFORMHANDLE_GETLOCALTRS_OFFSET UNITYSDK_OFFSET(0x9E22FA0)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int ReadWriteTransformHandle_TypeDefinitionIndex = 37162;

	class ReadWriteTransformHandle : public Il2CppObject
	{
	public:
		::UnityEngine::Animations::TransformStreamHandle* m_Handle; // 0x10

		::System::Void SetLocalTRS(::UnityEngine::Animations::AnimationStream* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_READWRITETRANSFORMHANDLE_SETLOCALTRS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetPosition(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_READWRITETRANSFORMHANDLE_GETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void SetLocalRotation(::UnityEngine::Animations::AnimationStream* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_READWRITETRANSFORMHANDLE_SETLOCALROTATION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Animations::Rigging::ReadWriteTransformHandle* Bind(::UnityEngine::Animator* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Animations::Rigging::ReadWriteTransformHandle*(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_READWRITETRANSFORMHANDLE_BIND_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* GetLocalRotation(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_READWRITETRANSFORMHANDLE_GETLOCALROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void GetLocalTRS(::UnityEngine::Animations::AnimationStream* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_READWRITETRANSFORMHANDLE_GETLOCALTRS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

