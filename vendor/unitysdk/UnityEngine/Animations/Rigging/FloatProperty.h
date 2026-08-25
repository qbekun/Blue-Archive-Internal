#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations { class PropertyStreamHandle; }
namespace UnityEngine::Animations::Rigging { class FloatProperty; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Component; }
namespace UnityEngine::Animations { class AnimationStream; }

#define UNITYENGINE_ANIMATIONS_RIGGING_FLOATPROPERTY_BIND_OFFSET UNITYSDK_OFFSET(0x9E1EE40)
#define UNITYENGINE_ANIMATIONS_RIGGING_FLOATPROPERTY_GET_OFFSET UNITYSDK_OFFSET(0x9E1EEC0)
#define UNITYENGINE_ANIMATIONS_RIGGING_FLOATPROPERTY_BINDCUSTOM_OFFSET UNITYSDK_OFFSET(0x9E1EF00)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int FloatProperty_TypeDefinitionIndex = 37146;

	class FloatProperty : public Il2CppObject
	{
	public:
		::UnityEngine::Animations::PropertyStreamHandle* value; // 0x10

		::UnityEngine::Animations::Rigging::FloatProperty* Bind(::UnityEngine::Animator* arg, ::UnityEngine::Component* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Animations::Rigging::FloatProperty*(*)(::UnityEngine::Animator*, ::UnityEngine::Component*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_FLOATPROPERTY_BIND_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Single Get(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_FLOATPROPERTY_GET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::Rigging::FloatProperty* BindCustom(::UnityEngine::Animator* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Animations::Rigging::FloatProperty*(*)(::UnityEngine::Animator*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_FLOATPROPERTY_BINDCUSTOM_OFFSET))(arg, str, nullptr);
		}

	};
}

