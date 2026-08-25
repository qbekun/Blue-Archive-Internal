#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9242A50)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9242AC0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9242DA0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GET_TYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x9242F40)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GET_ISFIELD_OFFSET UNITYSDK_OFFSET(0x9242F50)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x9242F60)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x9242F70)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x9243150)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92431B0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9243210)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x92432C0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9243370)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeNamedArgument_TypeDefinitionIndex = 24895;

	class CustomAttributeNamedArgument : public Il2CppObject
	{
	public:
		::System::Reflection::CustomAttributeTypedArgument* _TypedValue_k__BackingField; // 0x10
		::System::Boolean _IsField_k__BackingField; // 0x20
		::System::String* _MemberName_k__BackingField; // 0x28
		::System::Type* _attributeType; // 0x30
		::System::Reflection::MemberInfo* _lazyMemberInfo; // 0x38

		::System::Void .ctor(::System::Type* arg, ::System::String* str, ::System::Boolean arg, ::System::Reflection::CustomAttributeTypedArgument* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::System::Boolean, ::System::Reflection::CustomAttributeTypedArgument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_.CTOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Reflection::MemberInfo* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Reflection::MemberInfo* arg, ::System::Reflection::CustomAttributeTypedArgument* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Reflection::CustomAttributeTypedArgument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::CustomAttributeTypedArgument* get_TypedValue()
		{
			return (return (::System::Reflection::CustomAttributeTypedArgument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GET_TYPEDVALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsField()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GET_ISFIELD_OFFSET))(nullptr);
		}

		::System::String* get_MemberName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GET_MEMBERNAME_OFFSET))(nullptr);
		}

		::System::Reflection::MemberInfo* get_MemberInfo()
		{
			return (return (::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GET_MEMBERINFO_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Reflection::CustomAttributeNamedArgument* arg, ::System::Reflection::CustomAttributeNamedArgument* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::CustomAttributeNamedArgument*, ::System::Reflection::CustomAttributeNamedArgument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Reflection::CustomAttributeNamedArgument* arg, ::System::Reflection::CustomAttributeNamedArgument* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::CustomAttributeNamedArgument*, ::System::Reflection::CustomAttributeNamedArgument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTENAMEDARGUMENT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

