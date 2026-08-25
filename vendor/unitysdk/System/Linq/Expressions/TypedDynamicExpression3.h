#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION3_.CTOR_OFFSET UNITYSDK_OFFSET(0x9653800)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION3_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96548B0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypedDynamicExpression3_TypeDefinitionIndex = 33041;

	class TypedDynamicExpression3 : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x38

		::System::Void .ctor(::System::Type* arg, ::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION3_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION3_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

