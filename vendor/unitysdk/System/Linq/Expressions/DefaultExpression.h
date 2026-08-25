#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9652C70)
#define SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9652CD0)
#define SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9652CE0)
#define SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9652CF0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DefaultExpression_TypeDefinitionIndex = 33032;

	class DefaultExpression : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEFAULTEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

	};
}

