#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9662B80)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9662BE0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TYPECORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_PUBLICTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9662C00)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9662C10)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NAMECORE_OFFSET UNITYSDK_OFFSET(0x9662C30)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_BODY_OFFSET UNITYSDK_OFFSET(0x9662C40)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x9662C50)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TAILCALL_OFFSET UNITYSDK_OFFSET(0x9662CE0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TAILCALLCORE_OFFSET UNITYSDK_OFFSET(0x9662D00)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_SYSTEM.LINQ.EXPRESSIONS.IPARAMETERPROVIDER.GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x9662D10)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x9662D30)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_SYSTEM.LINQ.EXPRESSIONS.IPARAMETERPROVIDER.GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x9662D60)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x9662D80)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LambdaExpression_TypeDefinitionIndex = 33066;

	class LambdaExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* _body; // 0x10

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Type* get_TypeCore()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TYPECORE_OFFSET))(nullptr);
		}

		::System::Type* get_PublicType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_PUBLICTYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_NameCore()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NAMECORE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_BODY_OFFSET))(nullptr);
		}

		::System::Type* get_ReturnType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_TailCall()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TAILCALL_OFFSET))(nullptr);
		}

		::System::Boolean get_TailCallCore()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TAILCALLCORE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ParameterExpression* System.Linq.Expressions.IParameterProvider.GetParameter(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::ParameterExpression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_SYSTEM.LINQ.EXPRESSIONS.IPARAMETERPROVIDER.GETPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::ParameterExpression* GetParameter(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::ParameterExpression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GETPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Linq.Expressions.IParameterProvider.get_ParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_SYSTEM.LINQ.EXPRESSIONS.IPARAMETERPROVIDER.GET_PARAMETERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_ParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_PARAMETERCOUNT_OFFSET))(nullptr);
		}

	};
}

