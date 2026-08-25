#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class PrimitiveValue; }
namespace UnityEngine::InputSystem::Utilities { class NamedValue; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9E845B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9E845C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9E845D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9E845E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9E845F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x9E84600)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_FROM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E84540)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E84E30)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E84EE0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E84FB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E85120)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E851A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_PARSEMULTIPLE_OFFSET UNITYSDK_OFFSET(0x9E84250)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_PARSE_OFFSET UNITYSDK_OFFSET(0x9E855B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_PARSEPARAMETER_OFFSET UNITYSDK_OFFSET(0x9E85280)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_APPLYTOOBJECT_OFFSET UNITYSDK_OFFSET(0x9E85910)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_APPLYALLTOOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int NamedValue_TypeDefinitionIndex = 28934;

	class NamedValue : public Il2CppObject
	{
	public:
		::System::String* Separator; // 0x0
		::System::String* _name_k__BackingField; // 0x10
		::UnityEngine::InputSystem::Utilities::PrimitiveValue* _value_k__BackingField; // 0x18

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_SET_NAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::PrimitiveValue* get_value()
		{
			return (return (::UnityEngine::InputSystem::Utilities::PrimitiveValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::UnityEngine::InputSystem::Utilities::PrimitiveValue* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::TypeCode* get_type()
		{
			return (return (::System::TypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::NamedValue* ConvertTo(::System::TypeCode* arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::NamedValue*(*)(::System::TypeCode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_CONVERTTO_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::NamedValue* From(::System::String* str, Il2CppObject* arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::NamedValue*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_FROM_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Utilities::NamedValue* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::NamedValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::InputSystem::Utilities::NamedValue* arg, ::UnityEngine::InputSystem::Utilities::NamedValue* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::NamedValue*, ::UnityEngine::InputSystem::Utilities::NamedValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::InputSystem::Utilities::NamedValue* arg, ::UnityEngine::InputSystem::Utilities::NamedValue* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::NamedValue*, ::UnityEngine::InputSystem::Utilities::NamedValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ParseMultiple(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_PARSEMULTIPLE_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::NamedValue* Parse(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::Utilities::NamedValue*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_PARSE_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::NamedValue* ParseParameter(::System::String* str, int32_t&* arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::NamedValue*(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_PARSEPARAMETER_OFFSET))(str, arg, nullptr);
		}

		::System::Void ApplyToObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_APPLYTOOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyAllToObject(::System::Object* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_APPLYALLTOOBJECT_OFFSET))(arg, arg, nullptr);
		}

	};
}

