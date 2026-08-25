#pragma once
#include "unitysdk.h"

class SecureFloat;

#define SECUREFLOAT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x20ACD60)
#define SECUREFLOAT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x20ACE90)
#define SECUREFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20ACFC0)
#define SECUREFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x20AD0F0)
#define SECUREFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x20AD180)
#define SECUREFLOAT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x20AD110)
#define SECUREFLOAT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x20AD220)
#define SECUREFLOAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x20AD290)
#define SECUREFLOAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x20AD1C0)
#define SECUREFLOAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20AD2A0)
#define SECUREFLOAT_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x20AD2D0)
#define SECUREFLOAT_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x20AD390)
#define SECUREFLOAT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20AD400)
#define SECUREFLOAT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20AD330)

	inline static constexpr unsigned int SecureFloat_TypeDefinitionIndex = 3564;

	class SecureFloat : public ::System::Xml::Serialization::XmlEnumAttribute
	{
	public:
		::Il2CppArray<::System::Object*>* data; // 0x10
		::Il2CppArray<::System::Object*>* key; // 0x18

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SECUREFLOAT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SECUREFLOAT_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SECUREFLOAT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single op_Implicit(SecureFloat* arg)
		{
			return ((::System::Single(*)(SecureFloat*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREFLOAT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* op_Implicit(SecureFloat* arg)
		{
			return ((::System::String*(*)(SecureFloat*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREFLOAT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(SecureFloat* arg, SecureFloat* arg2)
		{
			return ((::System::Boolean(*)(SecureFloat*, SecureFloat*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREFLOAT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(SecureFloat* arg, SecureFloat* arg2)
		{
			return ((::System::Boolean(*)(SecureFloat*, SecureFloat*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREFLOAT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREFLOAT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(SecureFloat* arg)
		{
			return ((::System::Boolean(*)(SecureFloat*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREFLOAT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SECUREFLOAT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_LessThan(SecureFloat* arg, SecureFloat* arg2)
		{
			return ((::System::Boolean(*)(SecureFloat*, SecureFloat*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREFLOAT_OP_LESSTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThan(SecureFloat* arg, SecureFloat* arg2)
		{
			return ((::System::Boolean(*)(SecureFloat*, SecureFloat*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREFLOAT_OP_GREATERTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return ((::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREFLOAT_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(SecureFloat* arg)
		{
			return ((::System::Int32(*)(SecureFloat*, ::PVOID))((::PBYTE)hIl2Cpp + SECUREFLOAT_COMPARETO_OFFSET))(arg, nullptr);
		}

	};

