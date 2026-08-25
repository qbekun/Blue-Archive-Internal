#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EasingMode; }
namespace UnityEngine::UIElements { class EasingFunction; }

#define UNITYENGINE_UIELEMENTS_EASINGFUNCTION_GET_MODE_OFFSET UNITYSDK_OFFSET(0xA4111C0)
#define UNITYENGINE_UIELEMENTS_EASINGFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4111D0)
#define UNITYENGINE_UIELEMENTS_EASINGFUNCTION_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA40FF00)
#define UNITYENGINE_UIELEMENTS_EASINGFUNCTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA4111E0)
#define UNITYENGINE_UIELEMENTS_EASINGFUNCTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4111F0)
#define UNITYENGINE_UIELEMENTS_EASINGFUNCTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xA411200)
#define UNITYENGINE_UIELEMENTS_EASINGFUNCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA411270)
#define UNITYENGINE_UIELEMENTS_EASINGFUNCTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA40FA90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EasingFunction_TypeDefinitionIndex = 30600;

	class EasingFunction : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::EasingMode* m_Mode; // 0x10

		::UnityEngine::UIElements::EasingMode* get_mode()
		{
			return (return (::UnityEngine::UIElements::EasingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EASINGFUNCTION_GET_MODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::EasingMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EasingMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EASINGFUNCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::EasingFunction* op_Implicit(::UnityEngine::UIElements::EasingMode* arg)
		{
			return (return (::UnityEngine::UIElements::EasingFunction*(*)(::UnityEngine::UIElements::EasingMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EASINGFUNCTION_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::EasingFunction* arg, ::UnityEngine::UIElements::EasingFunction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EasingFunction*, ::UnityEngine::UIElements::EasingFunction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EASINGFUNCTION_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::EasingFunction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EasingFunction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EASINGFUNCTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EASINGFUNCTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EASINGFUNCTION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EASINGFUNCTION_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

