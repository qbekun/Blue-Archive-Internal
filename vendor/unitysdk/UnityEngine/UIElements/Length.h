#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine::UIElements { class LengthUnit; }

#define UNITYENGINE_UIELEMENTS_LENGTH_PERCENT_OFFSET UNITYSDK_OFFSET(0xA415800)
#define UNITYENGINE_UIELEMENTS_LENGTH_AUTO_OFFSET UNITYSDK_OFFSET(0xA415880)
#define UNITYENGINE_UIELEMENTS_LENGTH_NONE_OFFSET UNITYSDK_OFFSET(0xA4158D0)
#define UNITYENGINE_UIELEMENTS_LENGTH_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA4158E0)
#define UNITYENGINE_UIELEMENTS_LENGTH_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA4158F0)
#define UNITYENGINE_UIELEMENTS_LENGTH_GET_UNIT_OFFSET UNITYSDK_OFFSET(0xA415920)
#define UNITYENGINE_UIELEMENTS_LENGTH_ISAUTO_OFFSET UNITYSDK_OFFSET(0xA415930)
#define UNITYENGINE_UIELEMENTS_LENGTH_ISNONE_OFFSET UNITYSDK_OFFSET(0xA415940)
#define UNITYENGINE_UIELEMENTS_LENGTH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA415950)
#define UNITYENGINE_UIELEMENTS_LENGTH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA415840)
#define UNITYENGINE_UIELEMENTS_LENGTH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA415890)
#define UNITYENGINE_UIELEMENTS_LENGTH_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA415990)
#define UNITYENGINE_UIELEMENTS_LENGTH_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA4159C0)
#define UNITYENGINE_UIELEMENTS_LENGTH_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA4159F0)
#define UNITYENGINE_UIELEMENTS_LENGTH_EQUALS_OFFSET UNITYSDK_OFFSET(0xA415A20)
#define UNITYENGINE_UIELEMENTS_LENGTH_EQUALS_OFFSET UNITYSDK_OFFSET(0xA415A40)
#define UNITYENGINE_UIELEMENTS_LENGTH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA415AC0)
#define UNITYENGINE_UIELEMENTS_LENGTH_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA415AE0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Length_TypeDefinitionIndex = 30607;

	class Length : public Il2CppObject
	{
	public:
		::System::Single k_MaxValue; // 0x0
		::System::Single m_Value; // 0x10
		Unit* m_Unit; // 0x14

		::UnityEngine::UIElements::Length* Percent(::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_PERCENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Length* Auto()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_AUTO_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* None()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_NONE_OFFSET))(nullptr);
		}

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::LengthUnit* get_unit()
		{
			return (return (::UnityEngine::UIElements::LengthUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_GET_UNIT_OFFSET))(nullptr);
		}

		::System::Boolean IsAuto()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_ISAUTO_OFFSET))(nullptr);
		}

		::System::Boolean IsNone()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_ISNONE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::UnityEngine::UIElements::LengthUnit* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::UIElements::LengthUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, Unit* arg)
		{
			((::System::Void(*)(::System::Single, Unit*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Length* op_Implicit(::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::Length* arg, ::UnityEngine::UIElements::Length* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Length*, ::UnityEngine::UIElements::Length*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::UIElements::Length* arg, ::UnityEngine::UIElements::Length* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Length*, ::UnityEngine::UIElements::Length*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::Length* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Length*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_TOSTRING_OFFSET))(nullptr);
		}

	};
}

