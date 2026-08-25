#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_TYPEDPARAMETEREXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9666520)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEDPARAMETEREXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9666670)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypedParameterExpression_TypeDefinitionIndex = 33107;

	class TypedParameterExpression : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x18

		::System::Void .ctor(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDPARAMETEREXPRESSION_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDPARAMETEREXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

