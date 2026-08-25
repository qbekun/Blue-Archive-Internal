#pragma once
#include "unitysdk.h"

class SecureInt;

#define SECUREINT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x20AC800)
#define SECUREINT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x20AC860)
#define SECUREINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20AC8D0)
#define SECUREINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x20AC970)
#define SECUREINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x20AC9F0)
#define SECUREINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x20AC990)
#define SECUREINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x20ACA80)
#define SECUREINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x20ACAE0)
#define SECUREINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x20ACA30)
#define SECUREINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20ACAF0)
#define SECUREINT_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x20ACB20)
#define SECUREINT_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x20ACBD0)
#define SECUREINT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20ACC30)
#define SECUREINT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20ACB80)

	inline static constexpr unsigned int SecureInt_TypeDefinitionIndex = 3563;

	class SecureInt : public ::System::Xml::Serialization::XmlElementAttribute
	{
	public:
		::System::Int32 key; // 0x10
		::Il2CppArray<::System::Object*>* data; // 0x18

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SECUREINT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SECUREINT_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SECUREINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Implicit(SecureInt* arg)
		{
			return ((::System::Int32(*)(SecureInt*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREINT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* op_Implicit(SecureInt* arg)
		{
			return ((::System::String*(*)(SecureInt*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREINT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(SecureInt* arg, SecureInt* arg2)
		{
			return ((::System::Boolean(*)(SecureInt*, SecureInt*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(SecureInt* arg, SecureInt* arg2)
		{
			return ((::System::Boolean(*)(SecureInt*, SecureInt*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(SecureInt* arg)
		{
			return ((::System::Boolean(*)(SecureInt*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SECUREINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_LessThan(SecureInt* arg, SecureInt* arg2)
		{
			return ((::System::Boolean(*)(SecureInt*, SecureInt*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREINT_OP_LESSTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThan(SecureInt* arg, SecureInt* arg2)
		{
			return ((::System::Boolean(*)(SecureInt*, SecureInt*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREINT_OP_GREATERTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return ((::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREINT_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(SecureInt* arg)
		{
			return ((::System::Int32(*)(SecureInt*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREINT_COMPARETO_OFFSET))(arg, nullptr);
		}

	};

