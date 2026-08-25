#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96616A0)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9661740)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9661750)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x96617D0)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_INDEXER_OFFSET UNITYSDK_OFFSET(0x96617E0)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x965F980)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x965F8E0)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x96617F0)
#define SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_REWRITE_OFFSET UNITYSDK_OFFSET(0x9660A30)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int IndexExpression_TypeDefinitionIndex = 33055;

	class IndexExpression : public Il2CppObject
	{
	public:
		Il2CppObject* _arguments; // 0x10
		::System::Linq::Expressions::Expression* _Object_k__BackingField; // 0x18
		::System::Reflection::PropertyInfo* _Indexer_k__BackingField; // 0x20

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Reflection::PropertyInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Object()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_OBJECT_OFFSET))(nullptr);
		}

		::System::Reflection::PropertyInfo* get_Indexer()
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_INDEXER_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* Rewrite(::System::Linq::Expressions::Expression* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INDEXEXPRESSION_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

