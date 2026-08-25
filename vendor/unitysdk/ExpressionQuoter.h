#pragma once
#include "unitysdk.h"

#define EXPRESSIONQUOTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B0FD0)
#define EXPRESSIONQUOTER_VISITLAMBDA_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXPRESSIONQUOTER_VISITBLOCK_OFFSET UNITYSDK_OFFSET(0x96B1080)
#define EXPRESSIONQUOTER_VISITCATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x96B1200)
#define EXPRESSIONQUOTER_VISITPARAMETER_OFFSET UNITYSDK_OFFSET(0x96B1390)
#define EXPRESSIONQUOTER_GETBOX_OFFSET UNITYSDK_OFFSET(0x96B1450)

	inline static constexpr unsigned int ExpressionQuoter_TypeDefinitionIndex = 33500;

	class ExpressionQuoter : public Il2CppObject
	{
	public:
		Il2CppObject* _variables; // 0x10
		::System::Linq::Expressions::Interpreter::InterpretedFrame* _frame; // 0x18
		Il2CppObject* _shadowedVars; // 0x20

		::System::Void .ctor(Il2CppObject* arg, ::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONQUOTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitLambda(Il2CppObject* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONQUOTER_VISITLAMBDA_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::BlockExpression*, ::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONQUOTER_VISITBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* arg)
		{
			return (return (::System::Linq::Expressions::CatchBlock*(*)(::System::Linq::Expressions::CatchBlock*, ::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONQUOTER_VISITCATCHBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ParameterExpression*, ::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONQUOTER_VISITPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Runtime::CompilerServices::IStrongBox* GetBox(::System::Linq::Expressions::ParameterExpression* arg)
		{
			return (return (::System::Runtime::CompilerServices::IStrongBox*(*)(::System::Linq::Expressions::ParameterExpression*, ::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONQUOTER_GETBOX_OFFSET))(arg, nullptr);
		}

	};

