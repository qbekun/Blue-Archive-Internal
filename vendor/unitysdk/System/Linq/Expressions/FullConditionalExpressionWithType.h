#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSIONWITHTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9652710)
#define SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSIONWITHTYPE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9652A10)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int FullConditionalExpressionWithType_TypeDefinitionIndex = 33028;

	class FullConditionalExpressionWithType : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x28

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSIONWITHTYPE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FULLCONDITIONALEXPRESSIONWITHTYPE_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

