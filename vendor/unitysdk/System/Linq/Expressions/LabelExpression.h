#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96629C0)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9662A40)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9662A60)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x9662A70)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x9662A80)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9662A90)
#define SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x9660650)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LabelExpression_TypeDefinitionIndex = 33064;

	class LabelExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::LabelTarget* _Target_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _DefaultValue_k__BackingField; // 0x18

		::System::Void .ctor(::System::Linq::Expressions::LabelTarget* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::LabelTarget* get_Target()
		{
			return (return (::System::Linq::Expressions::LabelTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_DefaultValue()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::LabelExpression* Update(::System::Linq::Expressions::LabelTarget* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::LabelExpression*(*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELEXPRESSION_UPDATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

