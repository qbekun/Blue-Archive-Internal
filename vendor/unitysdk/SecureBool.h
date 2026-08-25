#pragma once
#include "unitysdk.h"

class SecureBool;

#define SECUREBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x20AD530)
#define SECUREBOOL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x20AD540)
#define SECUREBOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x20AD550)
#define SECUREBOOL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x20AD5B0)
#define SECUREBOOL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x20AD640)
#define SECUREBOOL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x20AD5D0)
#define SECUREBOOL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x20AD710)
#define SECUREBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x20AD780)
#define SECUREBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x20AD6C0)
#define SECUREBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20AD790)
#define SECUREBOOL_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x20AD800)
#define SECUREBOOL_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x20AD950)
#define SECUREBOOL_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20ADA00)
#define SECUREBOOL_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20AD8B0)

	inline static constexpr unsigned int SecureBool_TypeDefinitionIndex = 3565;

	class SecureBool : public ::System::Xml::Serialization::XmlCustomFormatter
	{
	public:
		::System::Boolean value; // 0x10

		::System::Boolean get_Value()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SECUREBOOL_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SECUREBOOL_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SECUREBOOL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Implicit(SecureBool* arg)
		{
			return ((::System::Boolean(*)(SecureBool*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREBOOL_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* op_Implicit(SecureBool* arg)
		{
			return ((::System::String*(*)(SecureBool*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREBOOL_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(SecureBool* arg, SecureBool* arg2)
		{
			return ((::System::Boolean(*)(SecureBool*, SecureBool*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREBOOL_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(SecureBool* arg, SecureBool* arg2)
		{
			return ((::System::Boolean(*)(SecureBool*, SecureBool*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREBOOL_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREBOOL_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(SecureBool* arg)
		{
			return ((::System::Boolean(*)(SecureBool*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREBOOL_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SECUREBOOL_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_LessThan(SecureBool* arg, SecureBool* arg2)
		{
			return ((::System::Boolean(*)(SecureBool*, SecureBool*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREBOOL_OP_LESSTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThan(SecureBool* arg, SecureBool* arg2)
		{
			return ((::System::Boolean(*)(SecureBool*, SecureBool*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREBOOL_OP_GREATERTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return ((::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREBOOL_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(SecureBool* arg)
		{
			return ((::System::Int32(*)(SecureBool*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREBOOL_COMPARETO_OFFSET))(arg, nullptr);
		}

	};

