#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_TYPEDCONSTANTEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9652B40)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEDCONSTANTEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9652BC0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypedConstantExpression_TypeDefinitionIndex = 33030;

	class TypedConstantExpression : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x18

		::System::Void .ctor(::System::Object* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDCONSTANTEXPRESSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDCONSTANTEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

