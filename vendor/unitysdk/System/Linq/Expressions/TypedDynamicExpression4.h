#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION4_.CTOR_OFFSET UNITYSDK_OFFSET(0x9653A80)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION4_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9654D50)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypedDynamicExpression4_TypeDefinitionIndex = 33043;

	class TypedDynamicExpression4 : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x40

		::System::Void .ctor(::System::Type* arg, ::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION4_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION4_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

