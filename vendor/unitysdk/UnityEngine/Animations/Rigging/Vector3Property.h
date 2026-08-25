#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations { class PropertyStreamHandle; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::Animations { class AnimationStream; }
namespace UnityEngine::Animations::Rigging { class Vector3Property; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Component; }

#define UNITYENGINE_ANIMATIONS_RIGGING_VECTOR3PROPERTY_GET_OFFSET UNITYSDK_OFFSET(0x9E1EF40)
#define UNITYENGINE_ANIMATIONS_RIGGING_VECTOR3PROPERTY_BIND_OFFSET UNITYSDK_OFFSET(0x9E1F050)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int Vector3Property_TypeDefinitionIndex = 37147;

	class Vector3Property : public Il2CppObject
	{
	public:
		::UnityEngine::Animations::PropertyStreamHandle* x; // 0x10
		::UnityEngine::Animations::PropertyStreamHandle* y; // 0x20
		::UnityEngine::Animations::PropertyStreamHandle* z; // 0x30

		::UnityEngine::Vector3* Get(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_VECTOR3PROPERTY_GET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::Rigging::Vector3Property* Bind(::UnityEngine::Animator* arg, ::UnityEngine::Component* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Animations::Rigging::Vector3Property*(*)(::UnityEngine::Animator*, ::UnityEngine::Component*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_VECTOR3PROPERTY_BIND_OFFSET))(arg, arg, str, nullptr);
		}

	};
}

