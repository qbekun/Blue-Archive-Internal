#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x92442B0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x92442C0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x92442D0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x92442E0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x92442F0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9244300)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9244310)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9244320)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9244330)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x9244340)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeExtensions_TypeDefinitionIndex = 24898;

	class CustomAttributeExtensions : public Il2CppObject
	{
	public:
		::System::Attribute* GetCustomAttribute(::System::Reflection::Assembly* arg, ::System::Type* arg)
		{
			return (return (::System::Attribute*(*)(::System::Reflection::Assembly*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Attribute* GetCustomAttribute(::System::Reflection::MemberInfo* arg, ::System::Type* arg)
		{
			return (return (::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Attribute* GetCustomAttribute(::System::Reflection::ParameterInfo* arg, ::System::Type* arg)
		{
			return (return (::System::Attribute*(*)(::System::Reflection::ParameterInfo*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCustomAttribute(::System::Reflection::Assembly* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCustomAttribute(::System::Reflection::MemberInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCustomAttribute(::System::Reflection::ParameterInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::ParameterInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Attribute* GetCustomAttribute(::System::Reflection::MemberInfo* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Attribute* GetCustomAttribute(::System::Reflection::ParameterInfo* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Attribute*(*)(::System::Reflection::ParameterInfo*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetCustomAttribute(::System::Reflection::MemberInfo* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCustomAttribute(::System::Reflection::ParameterInfo* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::ParameterInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCustomAttributes(::System::Reflection::Assembly* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCustomAttributes(::System::Reflection::MemberInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCustomAttributes(::System::Reflection::MemberInfo* arg, ::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCustomAttributes(::System::Reflection::MemberInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCustomAttributes(::System::Reflection::MemberInfo* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetCustomAttributes(::System::Reflection::MemberInfo* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDefined(::System::Reflection::MemberInfo* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

	};
}

