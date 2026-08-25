#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class TimeUnit; }
namespace UnityEngine::UIElements { class TimeValue; }

#define UNITYENGINE_UIELEMENTS_TIMEVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA418A60)
#define UNITYENGINE_UIELEMENTS_TIMEVALUE_GET_UNIT_OFFSET UNITYSDK_OFFSET(0xA418A70)
#define UNITYENGINE_UIELEMENTS_TIMEVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA418A80)
#define UNITYENGINE_UIELEMENTS_TIMEVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA418A90)
#define UNITYENGINE_UIELEMENTS_TIMEVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA418AA0)
#define UNITYENGINE_UIELEMENTS_TIMEVALUE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA418AB0)
#define UNITYENGINE_UIELEMENTS_TIMEVALUE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA418AE0)
#define UNITYENGINE_UIELEMENTS_TIMEVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA418B10)
#define UNITYENGINE_UIELEMENTS_TIMEVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA418B30)
#define UNITYENGINE_UIELEMENTS_TIMEVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA418BB0)
#define UNITYENGINE_UIELEMENTS_TIMEVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA418BD0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TimeValue_TypeDefinitionIndex = 30627;

	class TimeValue : public Il2CppObject
	{
	public:
		::System::Single m_Value; // 0x10
		::UnityEngine::UIElements::TimeUnit* m_Unit; // 0x14

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEVALUE_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::TimeUnit* get_unit()
		{
			return (return (::UnityEngine::UIElements::TimeUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEVALUE_GET_UNIT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::UnityEngine::UIElements::TimeUnit* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::UIElements::TimeUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEVALUE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::TimeValue* op_Implicit(::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::TimeValue*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEVALUE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::TimeValue* arg, ::UnityEngine::UIElements::TimeValue* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TimeValue*, ::UnityEngine::UIElements::TimeValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEVALUE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::UIElements::TimeValue* arg, ::UnityEngine::UIElements::TimeValue* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TimeValue*, ::UnityEngine::UIElements::TimeValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEVALUE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::TimeValue* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TimeValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEVALUE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

