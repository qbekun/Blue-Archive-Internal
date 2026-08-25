#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_PROPERTYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x923E180)
#define SYSTEM_REFLECTION_PROPERTYINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x923E190)
#define SYSTEM_REFLECTION_PROPERTYINFO_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETINDEXPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_PROPERTYINFO_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_PROPERTYINFO_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_PROPERTYINFO_GET_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x923E1A0)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETGETMETHOD_OFFSET UNITYSDK_OFFSET(0x923E1C0)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETGETMETHOD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_PROPERTYINFO_GET_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x923E1E0)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETSETMETHOD_OFFSET UNITYSDK_OFFSET(0x923E200)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETSETMETHOD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x923E220)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x923E240)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_PROPERTYINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x923E280)
#define SYSTEM_REFLECTION_PROPERTYINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x923E2B0)
#define SYSTEM_REFLECTION_PROPERTYINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_PROPERTYINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x923E2F0)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x923E300)
#define SYSTEM_REFLECTION_PROPERTYINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x923BFF0)
#define SYSTEM_REFLECTION_PROPERTYINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x923BFA0)

namespace System::Reflection
{
	inline static constexpr unsigned int PropertyInfo_TypeDefinitionIndex = 24877;

	class PropertyInfo : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Reflection::MemberTypes* get_MemberType()
		{
			return (return (::System::Reflection::MemberTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GET_MEMBERTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_PropertyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GET_PROPERTYTYPE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetIndexParameters()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETINDEXPARAMETERS_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_GetMethod()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GET_GETMETHOD_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetGetMethod()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETGETMETHOD_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetGetMethod(::System::Boolean arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETGETMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* get_SetMethod()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GET_SETMETHOD_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetSetMethod()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETSETMETHOD_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetSetMethod(::System::Boolean arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETSETMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_SETVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_SETVALUE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Reflection::PropertyInfo* arg, ::System::Reflection::PropertyInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Reflection::PropertyInfo* arg, ::System::Reflection::PropertyInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

	};
}

