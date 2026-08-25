#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION1_.CTOR_OFFSET UNITYSDK_OFFSET(0x9653330)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9654120)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypedDynamicExpression1_TypeDefinitionIndex = 33037;

	class TypedDynamicExpression1 : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x28

		::System::Void .ctor(::System::Type* arg, ::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION1_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION1_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

