#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_CONSTRUCTORINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239AD0)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x9239AF0)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x9239B00)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x9239B40)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9239B60)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9239B80)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9239BC0)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9239C50)

namespace System::Reflection
{
	inline static constexpr unsigned int ConstructorInfo_TypeDefinitionIndex = 24847;

	class ConstructorInfo : public Il2CppObject
	{
	public:
		::System::String* ConstructorName; // 0x0
		::System::String* TypeConstructorName; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Reflection::MemberTypes* get_MemberType()
		{
			return (return (::System::Reflection::MemberTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_GET_MEMBERTYPE_OFFSET))(nullptr);
		}

		::System::Object* Invoke(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Object* Invoke(::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Reflection::ConstructorInfo* arg, ::System::Reflection::ConstructorInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::ConstructorInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Reflection::ConstructorInfo* arg, ::System::Reflection::ConstructorInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::ConstructorInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

