#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9666820)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96668F0)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9666900)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_BODY_OFFSET UNITYSDK_OFFSET(0x9666910)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_HANDLERS_OFFSET UNITYSDK_OFFSET(0x9666920)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_FINALLY_OFFSET UNITYSDK_OFFSET(0x9666930)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_FAULT_OFFSET UNITYSDK_OFFSET(0x9666940)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9666950)
#define SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x9661040)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TryExpression_TypeDefinitionIndex = 33116;

	class TryExpression : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Body_k__BackingField; // 0x18
		Il2CppObject* _Handlers_k__BackingField; // 0x20
		::System::Linq::Expressions::Expression* _Finally_k__BackingField; // 0x28
		::System::Linq::Expressions::Expression* _Fault_k__BackingField; // 0x30

		::System::Void .ctor(::System::Type* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_BODY_OFFSET))(nullptr);
		}

		Il2CppObject* get_Handlers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_HANDLERS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Finally()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_FINALLY_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Fault()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_GET_FAULT_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::TryExpression* Update(::System::Linq::Expressions::Expression* arg, Il2CppObject* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::TryExpression*(*)(::System::Linq::Expressions::Expression*, Il2CppObject*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TRYEXPRESSION_UPDATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

