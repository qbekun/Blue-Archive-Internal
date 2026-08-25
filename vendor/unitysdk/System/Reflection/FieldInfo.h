#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_FIELDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x923A280)
#define SYSTEM_REFLECTION_FIELDINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x923A290)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_FIELDINFO_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISINITONLY_OFFSET UNITYSDK_OFFSET(0x923A2A0)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISLITERAL_OFFSET UNITYSDK_OFFSET(0x923A2C0)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISNOTSERIALIZED_OFFSET UNITYSDK_OFFSET(0x923A2E0)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x923A300)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISASSEMBLY_OFFSET UNITYSDK_OFFSET(0x923A320)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISFAMILY_OFFSET UNITYSDK_OFFSET(0x923A350)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISFAMILYORASSEMBLY_OFFSET UNITYSDK_OFFSET(0x923A380)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISPRIVATE_OFFSET UNITYSDK_OFFSET(0x923A3B0)
#define SYSTEM_REFLECTION_FIELDINFO_GET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x923A3E0)
#define SYSTEM_REFLECTION_FIELDINFO_GET_FIELDHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_FIELDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x923A410)
#define SYSTEM_REFLECTION_FIELDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x923A420)
#define SYSTEM_REFLECTION_FIELDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x923A430)
#define SYSTEM_REFLECTION_FIELDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x923A470)
#define SYSTEM_REFLECTION_FIELDINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_FIELDINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x923A4C0)
#define SYSTEM_REFLECTION_FIELDINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_FIELDINFO_SETVALUEDIRECT_OFFSET UNITYSDK_OFFSET(0x923A550)
#define SYSTEM_REFLECTION_FIELDINFO_GETRAWCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x923A5B0)
#define SYSTEM_REFLECTION_FIELDINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET UNITYSDK_OFFSET(0x923A610)
#define SYSTEM_REFLECTION_FIELDINFO_GETFIELDFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x923A620)
#define SYSTEM_REFLECTION_FIELDINFO_GETFIELDFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x923A6E0)
#define SYSTEM_REFLECTION_FIELDINFO_GETFIELDOFFSET_OFFSET UNITYSDK_OFFSET(0x923A7C0)
#define SYSTEM_REFLECTION_FIELDINFO_GET_MARSHAL_INFO_OFFSET UNITYSDK_OFFSET(0x923A820)
#define SYSTEM_REFLECTION_FIELDINFO_GETPSEUDOCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x923A830)
#define SYSTEM_REFLECTION_FIELDINFO_GETPSEUDOCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x923AA70)

namespace System::Reflection
{
	inline static constexpr unsigned int FieldInfo_TypeDefinitionIndex = 24855;

	class FieldInfo : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Reflection::MemberTypes* get_MemberType()
		{
			return (return (::System::Reflection::MemberTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_MEMBERTYPE_OFFSET))(nullptr);
		}

		::System::Reflection::FieldAttributes* get_Attributes()
		{
			return (return (::System::Reflection::FieldAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Type* get_FieldType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_FIELDTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInitOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ISINITONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLiteral()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ISLITERAL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNotSerialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ISNOTSERIALIZED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStatic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ISSTATIC_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAssembly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ISASSEMBLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFamily()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ISFAMILY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFamilyOrAssembly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ISFAMILYORASSEMBLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPrivate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ISPRIVATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPublic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_ISPUBLIC_OFFSET))(nullptr);
		}

		::System::RuntimeFieldHandle* get_FieldHandle()
		{
			return (return (::System::RuntimeFieldHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_FIELDHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Reflection::FieldInfo* arg, ::System::Reflection::FieldInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Reflection::FieldInfo* arg, ::System::Reflection::FieldInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_SETVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetValueDirect(::System::TypedReference* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::TypedReference*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_SETVALUEDIRECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetRawConstantValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETRAWCONSTANTVALUE_OFFSET))(nullptr);
		}

		::System::Reflection::FieldInfo* internal_from_handle_type(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Reflection::FieldInfo*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::FieldInfo* GetFieldFromHandle(::System::RuntimeFieldHandle* arg)
		{
			return (return (::System::Reflection::FieldInfo*(*)(::System::RuntimeFieldHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETFIELDFROMHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Reflection::FieldInfo* GetFieldFromHandle(::System::RuntimeFieldHandle* arg, ::System::RuntimeTypeHandle* arg)
		{
			return (return (::System::Reflection::FieldInfo*(*)(::System::RuntimeFieldHandle*, ::System::RuntimeTypeHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETFIELDFROMHANDLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetFieldOffset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETFIELDOFFSET_OFFSET))(nullptr);
		}

		::System::Runtime::InteropServices::MarshalAsAttribute* get_marshal_info()
		{
			return (return (::System::Runtime::InteropServices::MarshalAsAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GET_MARSHAL_INFO_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPseudoCustomAttributes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETPSEUDOCUSTOMATTRIBUTES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPseudoCustomAttributesData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_GETPSEUDOCUSTOMATTRIBUTESDATA_OFFSET))(nullptr);
		}

	};
}

