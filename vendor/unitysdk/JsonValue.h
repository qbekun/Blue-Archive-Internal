#pragma once
#include "unitysdk.h"

#define JSONVALUE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9E811B0)
#define JSONVALUE_TOINTEGER_OFFSET UNITYSDK_OFFSET(0x9E81750)
#define JSONVALUE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x9E817F0)
#define JSONVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E812C0)
#define JSONVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9E80D50)
#define JSONVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9E80C50)
#define JSONVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9E80C80)
#define JSONVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9E73990)
#define JSONVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9E80B40)
#define JSONVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9E80BD0)
#define JSONVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9E81890)
#define JSONVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9E81910)
#define JSONVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E81980)
#define JSONVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E81C00)
#define JSONVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E82660)
#define JSONVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E82700)
#define JSONVALUE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E7FC20)
#define JSONVALUE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E828F0)

	inline static constexpr unsigned int JsonValue_TypeDefinitionIndex = 28926;

	class JsonValue : public Il2CppObject
	{
	public:
		JsonValueType* type; // 0x10
		::System::Boolean boolValue; // 0x14
		::System::Double realValue; // 0x18
		::System::Int64 integerValue; // 0x20
		JsonString* stringValue; // 0x28
		Il2CppObject* arrayValue; // 0x40
		Il2CppObject* objectValue; // 0x48
		::System::Object* anyValue; // 0x50

		::System::Boolean ToBoolean()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_TOBOOLEAN_OFFSET))(nullptr);
		}

		::System::Int64 ToInteger()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_TOINTEGER_OFFSET))(nullptr);
		}

		::System::Double ToDouble()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_TODOUBLE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_TOSTRING_OFFSET))(nullptr);
		}

		JsonValue* op_Implicit(::System::Boolean arg)
		{
			return (return (JsonValue*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		JsonValue* op_Implicit(::System::Int64 arg)
		{
			return (return (JsonValue*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		JsonValue* op_Implicit(::System::Double arg)
		{
			return (return (JsonValue*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		JsonValue* op_Implicit(::System::String* str)
		{
			return (return (JsonValue*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_OP_IMPLICIT_OFFSET))(str, nullptr);
		}

		JsonValue* op_Implicit(JsonString* arg)
		{
			return (return (JsonValue*(*)(JsonString*, ::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		JsonValue* op_Implicit(Il2CppObject* arg)
		{
			return (return (JsonValue*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		JsonValue* op_Implicit(Il2CppObject* arg)
		{
			return (return (JsonValue*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		JsonValue* op_Implicit(::System::Enum* arg)
		{
			return (return (JsonValue*(*)(::System::Enum*, ::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(JsonValue* arg)
		{
			return (return (::System::Boolean(*)(JsonValue*, ::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg, JsonValue* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, JsonValue*, ::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(JsonValue* arg, JsonValue* arg)
		{
			return (return (::System::Boolean(*)(JsonValue*, JsonValue*, ::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(JsonValue* arg, JsonValue* arg)
		{
			return (return (::System::Boolean(*)(JsonValue*, JsonValue*, ::PVOID))((::PBYTE)hIl2Cpp + JSONVALUE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

	};

