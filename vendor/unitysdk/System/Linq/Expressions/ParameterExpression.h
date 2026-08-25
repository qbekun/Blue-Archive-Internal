#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9665D40)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x9665DA0)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96665A0)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9666600)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9666610)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_ISBYREF_OFFSET UNITYSDK_OFFSET(0x965DB90)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GETISBYREF_OFFSET UNITYSDK_OFFSET(0x9666620)
#define SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9666630)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ParameterExpression_TypeDefinitionIndex = 33105;

	class ParameterExpression : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Linq::Expressions::ParameterExpression* Make(::System::Type* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Linq::Expressions::ParameterExpression*(*)(::System::Type*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_MAKE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsByRef()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GET_ISBYREF_OFFSET))(nullptr);
		}

		::System::Boolean GetIsByRef()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_GETISBYREF_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PARAMETEREXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

	};
}

