#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimatorControllerParameterType; }

#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA1CBF20)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0xA1CBF30)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA1CBF70)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1CBF80)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA1CC030)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1CC060)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorControllerParameter_TypeDefinitionIndex = 36467;

	class AnimatorControllerParameter : public Il2CppObject
	{
	public:
		::System::String* m_Name; // 0x10
		::UnityEngine::AnimatorControllerParameterType* m_Type; // 0x18
		::System::Single m_DefaultFloat; // 0x1C
		::System::Int32 m_DefaultInt; // 0x20
		::System::Boolean m_DefaultBool; // 0x24

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int32 get_nameHash()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_NAMEHASH_OFFSET))(nullptr);
		}

		::UnityEngine::AnimatorControllerParameterType* get_type()
		{
			return (return (::UnityEngine::AnimatorControllerParameterType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_.CTOR_OFFSET))(nullptr);
		}

	};
}

