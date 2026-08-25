#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9243F60)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x923B080)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_GET_ARGUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x92440B0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x92440C0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x92440D0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9244120)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9244170)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9244200)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9244290)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x92436F0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_CANONICALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x9244000)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeTypedArgument_TypeDefinitionIndex = 24896;

	class CustomAttributeTypedArgument : public Il2CppObject
	{
	public:
		::System::Type* _ArgumentType_k__BackingField; // 0x10
		::System::Object* _Value_k__BackingField; // 0x18

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_ArgumentType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_GET_ARGUMENTTYPE_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Reflection::CustomAttributeTypedArgument* arg, ::System::Reflection::CustomAttributeTypedArgument* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::CustomAttributeTypedArgument*, ::System::Reflection::CustomAttributeTypedArgument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Reflection::CustomAttributeTypedArgument* arg, ::System::Reflection::CustomAttributeTypedArgument* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::CustomAttributeTypedArgument*, ::System::Reflection::CustomAttributeTypedArgument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Object* CanonicalizeValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_CANONICALIZEVALUE_OFFSET))(arg, nullptr);
		}

	};
}

