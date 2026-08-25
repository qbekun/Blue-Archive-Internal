#pragma once
#include "unitysdk.h"

#define QUOTEVISITOR_VISITPARAMETER_OFFSET UNITYSDK_OFFSET(0x96997C0)
#define QUOTEVISITOR_VISITBLOCK_OFFSET UNITYSDK_OFFSET(0x9699840)
#define QUOTEVISITOR_VISITCATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x9699F80)
#define QUOTEVISITOR_VISITLAMBDA_OFFSET UNITYSDK_OFFSET(0x000000)
#define QUOTEVISITOR_PUSHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x96998A0)
#define QUOTEVISITOR_POPPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9699C20)
#define QUOTEVISITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x969A0E0)

	inline static constexpr unsigned int QuoteVisitor_TypeDefinitionIndex = 33325;

	class QuoteVisitor : public Il2CppObject
	{
	public:
		Il2CppObject* _definedParameters; // 0x10
		Il2CppObject* _hoistedParameters; // 0x18

		::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ParameterExpression*, ::PVOID))((::PBYTE)hIl2Cpp + QUOTEVISITOR_VISITPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::BlockExpression*, ::PVOID))((::PBYTE)hIl2Cpp + QUOTEVISITOR_VISITBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock* arg)
		{
			return (return (::System::Linq::Expressions::CatchBlock*(*)(::System::Linq::Expressions::CatchBlock*, ::PVOID))((::PBYTE)hIl2Cpp + QUOTEVISITOR_VISITCATCHBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* VisitLambda(Il2CppObject* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + QUOTEVISITOR_VISITLAMBDA_OFFSET))(arg, nullptr);
		}

		::System::Void PushParameters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + QUOTEVISITOR_PUSHPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Void PopParameters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + QUOTEVISITOR_POPPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QUOTEVISITOR_.CTOR_OFFSET))(nullptr);
		}

	};

