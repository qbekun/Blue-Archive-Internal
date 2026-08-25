#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Angle; }
namespace UnityEngine::UIElements { class AngleUnit; }

#define UNITYENGINE_UIELEMENTS_ANGLE_NONE_OFFSET UNITYSDK_OFFSET(0xA40DFB0)
#define UNITYENGINE_UIELEMENTS_ANGLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA40DFD0)
#define UNITYENGINE_UIELEMENTS_ANGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA40DFE0)
#define UNITYENGINE_UIELEMENTS_ANGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA40DFC0)
#define UNITYENGINE_UIELEMENTS_ANGLE_TODEGREES_OFFSET UNITYSDK_OFFSET(0xA40DFF0)
#define UNITYENGINE_UIELEMENTS_ANGLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA40E050)
#define UNITYENGINE_UIELEMENTS_ANGLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA40E060)
#define UNITYENGINE_UIELEMENTS_ANGLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA40E090)
#define UNITYENGINE_UIELEMENTS_ANGLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA40E0B0)
#define UNITYENGINE_UIELEMENTS_ANGLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA40E130)
#define UNITYENGINE_UIELEMENTS_ANGLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA40E150)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Angle_TypeDefinitionIndex = 30591;

	class Angle : public Il2CppObject
	{
	public:
		::System::Single m_Value; // 0x10
		Unit* m_Unit; // 0x14

		::UnityEngine::UIElements::Angle* None()
		{
			return (return (::UnityEngine::UIElements::Angle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ANGLE_NONE_OFFSET))(nullptr);
		}

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ANGLE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::UnityEngine::UIElements::AngleUnit* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::UIElements::AngleUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ANGLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, Unit* arg)
		{
			((::System::Void(*)(::System::Single, Unit*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ANGLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ToDegrees()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ANGLE_TODEGREES_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Angle* op_Implicit(::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::Angle*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ANGLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::Angle* arg, ::UnityEngine::UIElements::Angle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Angle*, ::UnityEngine::UIElements::Angle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ANGLE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::Angle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Angle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ANGLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ANGLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ANGLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ANGLE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

