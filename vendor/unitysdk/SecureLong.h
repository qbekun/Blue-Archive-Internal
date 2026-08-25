#pragma once
#include "unitysdk.h"

class SecureLong;

#define SECURELONG_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x20AC290)
#define SECURELONG_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x20AC2F0)
#define SECURELONG_.CTOR_OFFSET UNITYSDK_OFFSET(0x20AC360)
#define SECURELONG_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x20AC410)
#define SECURELONG_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x20AC490)
#define SECURELONG_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x20AC430)
#define SECURELONG_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x20AC520)
#define SECURELONG_EQUALS_OFFSET UNITYSDK_OFFSET(0x20AC580)
#define SECURELONG_EQUALS_OFFSET UNITYSDK_OFFSET(0x20AC4D0)
#define SECURELONG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20AC590)
#define SECURELONG_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x20AC5C0)
#define SECURELONG_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x20AC670)
#define SECURELONG_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20AC6D0)
#define SECURELONG_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20AC620)

	inline static constexpr unsigned int SecureLong_TypeDefinitionIndex = 3562;

	class SecureLong : public ::System::Xml::Serialization::XmlElementAttributes
	{
	public:
		::System::Int64 key; // 0x10
		::Il2CppArray<::System::Object*>* data; // 0x18

		::System::Int64 get_Value()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SECURELONG_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SECURELONG_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SECURELONG_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 op_Implicit(SecureLong* arg)
		{
			return ((::System::Int64(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + SECURELONG_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* op_Implicit(SecureLong* arg)
		{
			return ((::System::String*(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + SECURELONG_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(SecureLong* arg, SecureLong* arg2)
		{
			return ((::System::Boolean(*)(SecureLong*, SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + SECURELONG_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(SecureLong* arg, SecureLong* arg2)
		{
			return ((::System::Boolean(*)(SecureLong*, SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + SECURELONG_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SECURELONG_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(SecureLong* arg)
		{
			return ((::System::Boolean(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + SECURELONG_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SECURELONG_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_LessThan(SecureLong* arg, SecureLong* arg2)
		{
			return ((::System::Boolean(*)(SecureLong*, SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + SECURELONG_OP_LESSTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThan(SecureLong* arg, SecureLong* arg2)
		{
			return ((::System::Boolean(*)(SecureLong*, SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + SECURELONG_OP_GREATERTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return ((::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SECURELONG_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(SecureLong* arg)
		{
			return ((::System::Int32(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + SECURELONG_COMPARETO_OFFSET))(arg, nullptr);
		}

	};

