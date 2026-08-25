#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_EXPREXCEPTION__OVERFLOW_OFFSET UNITYSDK_OFFSET(0x975F2F0)
#define SYSTEM_DATA_EXPREXCEPTION__EXPR_OFFSET UNITYSDK_OFFSET(0x975F350)
#define SYSTEM_DATA_EXPREXCEPTION__SYNTAX_OFFSET UNITYSDK_OFFSET(0x975F3B0)
#define SYSTEM_DATA_EXPREXCEPTION__EVAL_OFFSET UNITYSDK_OFFSET(0x975F410)
#define SYSTEM_DATA_EXPREXCEPTION__EVAL_OFFSET UNITYSDK_OFFSET(0x975F470)
#define SYSTEM_DATA_EXPREXCEPTION_INVOKEARGUMENT_OFFSET UNITYSDK_OFFSET(0x975F4D0)
#define SYSTEM_DATA_EXPREXCEPTION_NYI_OFFSET UNITYSDK_OFFSET(0x975F510)
#define SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERAND_OFFSET UNITYSDK_OFFSET(0x975F5A0)
#define SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERATOR_OFFSET UNITYSDK_OFFSET(0x975F750)
#define SYSTEM_DATA_EXPREXCEPTION_TYPEMISMATCH_OFFSET UNITYSDK_OFFSET(0x975F7E0)
#define SYSTEM_DATA_EXPREXCEPTION_FUNCTIONARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x975F870)
#define SYSTEM_DATA_EXPREXCEPTION_EXPRESSIONTOOCOMPLEX_OFFSET UNITYSDK_OFFSET(0x975F8C0)
#define SYSTEM_DATA_EXPREXCEPTION_UNBOUNDNAME_OFFSET UNITYSDK_OFFSET(0x975F960)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDSTRING_OFFSET UNITYSDK_OFFSET(0x975F9F0)
#define SYSTEM_DATA_EXPREXCEPTION_UNDEFINEDFUNCTION_OFFSET UNITYSDK_OFFSET(0x975FA80)
#define SYSTEM_DATA_EXPREXCEPTION_SYNTAXERROR_OFFSET UNITYSDK_OFFSET(0x975FB10)
#define SYSTEM_DATA_EXPREXCEPTION_FUNCTIONARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x975FBB0)
#define SYSTEM_DATA_EXPREXCEPTION_MISSINGRIGHTPAREN_OFFSET UNITYSDK_OFFSET(0x975FC40)
#define SYSTEM_DATA_EXPREXCEPTION_UNKNOWNTOKEN_OFFSET UNITYSDK_OFFSET(0x975FCE0)
#define SYSTEM_DATA_EXPREXCEPTION_UNKNOWNTOKEN_OFFSET UNITYSDK_OFFSET(0x975FDB0)
#define SYSTEM_DATA_EXPREXCEPTION_DATATYPECONVERTION_OFFSET UNITYSDK_OFFSET(0x975FEF0)
#define SYSTEM_DATA_EXPREXCEPTION_DATAVALUECONVERTION_OFFSET UNITYSDK_OFFSET(0x975FFD0)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDNAME_OFFSET UNITYSDK_OFFSET(0x97600B0)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDDATE_OFFSET UNITYSDK_OFFSET(0x9760140)
#define SYSTEM_DATA_EXPREXCEPTION_NONCONSTANTARGUMENT_OFFSET UNITYSDK_OFFSET(0x97601D0)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDPATTERN_OFFSET UNITYSDK_OFFSET(0x9760270)
#define SYSTEM_DATA_EXPREXCEPTION_INWITHOUTPARENTHESES_OFFSET UNITYSDK_OFFSET(0x9760300)
#define SYSTEM_DATA_EXPREXCEPTION_INWITHOUTLIST_OFFSET UNITYSDK_OFFSET(0x97603A0)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDISSYNTAX_OFFSET UNITYSDK_OFFSET(0x9760440)
#define SYSTEM_DATA_EXPREXCEPTION_OVERFLOW_OFFSET UNITYSDK_OFFSET(0x97604E0)
#define SYSTEM_DATA_EXPREXCEPTION_ARGUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x9760590)
#define SYSTEM_DATA_EXPREXCEPTION_ARGUMENTTYPEINTEGER_OFFSET UNITYSDK_OFFSET(0x9760690)
#define SYSTEM_DATA_EXPREXCEPTION_TYPEMISMATCHINBINOP_OFFSET UNITYSDK_OFFSET(0x9760760)
#define SYSTEM_DATA_EXPREXCEPTION_AMBIGUOUSBINOP_OFFSET UNITYSDK_OFFSET(0x9760890)
#define SYSTEM_DATA_EXPREXCEPTION_UNSUPPORTEDOPERATOR_OFFSET UNITYSDK_OFFSET(0x97609C0)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDNAMEBRACKETING_OFFSET UNITYSDK_OFFSET(0x9760A80)
#define SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERANDBEFORE_OFFSET UNITYSDK_OFFSET(0x9760B10)
#define SYSTEM_DATA_EXPREXCEPTION_TOOMANYRIGHTPARENTHESES_OFFSET UNITYSDK_OFFSET(0x9760BA0)
#define SYSTEM_DATA_EXPREXCEPTION_UNRESOLVEDRELATION_OFFSET UNITYSDK_OFFSET(0x9760C40)
#define SYSTEM_DATA_EXPREXCEPTION_BINDFAILURE_OFFSET UNITYSDK_OFFSET(0x9760CE0)
#define SYSTEM_DATA_EXPREXCEPTION_AGGREGATEARGUMENT_OFFSET UNITYSDK_OFFSET(0x9760D70)
#define SYSTEM_DATA_EXPREXCEPTION_AGGREGATEUNBOUND_OFFSET UNITYSDK_OFFSET(0x9760E10)
#define SYSTEM_DATA_EXPREXCEPTION_EVALNOCONTEXT_OFFSET UNITYSDK_OFFSET(0x9760EA0)
#define SYSTEM_DATA_EXPREXCEPTION_EXPRESSIONUNBOUND_OFFSET UNITYSDK_OFFSET(0x9760F40)
#define SYSTEM_DATA_EXPREXCEPTION_COMPUTENOTAGGREGATE_OFFSET UNITYSDK_OFFSET(0x9760FD0)
#define SYSTEM_DATA_EXPREXCEPTION_FILTERCONVERTION_OFFSET UNITYSDK_OFFSET(0x9761060)
#define SYSTEM_DATA_EXPREXCEPTION_LOOKUPARGUMENT_OFFSET UNITYSDK_OFFSET(0x97610F0)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDTYPE_OFFSET UNITYSDK_OFFSET(0x9761190)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDHOURSARGUMENT_OFFSET UNITYSDK_OFFSET(0x9761220)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDMINUTESARGUMENT_OFFSET UNITYSDK_OFFSET(0x97612C0)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDTIMEZONERANGE_OFFSET UNITYSDK_OFFSET(0x9761360)
#define SYSTEM_DATA_EXPREXCEPTION_MISMATCHKINDANDTIMESPAN_OFFSET UNITYSDK_OFFSET(0x9761400)
#define SYSTEM_DATA_EXPREXCEPTION_UNSUPPORTEDDATATYPE_OFFSET UNITYSDK_OFFSET(0x97614A0)

namespace System::Data
{
	inline static constexpr unsigned int ExprException_TypeDefinitionIndex = 32261;

	class ExprException : public Il2CppObject
	{
	public:
		::System::OverflowException* _Overflow(::System::String* str)
		{
			return (return (::System::OverflowException*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__OVERFLOW_OFFSET))(str, nullptr);
		}

		::System::Data::InvalidExpressionException* _Expr(::System::String* str)
		{
			return (return (::System::Data::InvalidExpressionException*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__EXPR_OFFSET))(str, nullptr);
		}

		::System::Data::SyntaxErrorException* _Syntax(::System::String* str)
		{
			return (return (::System::Data::SyntaxErrorException*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__SYNTAX_OFFSET))(str, nullptr);
		}

		::System::Data::EvaluateException* _Eval(::System::String* str)
		{
			return (return (::System::Data::EvaluateException*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__EVAL_OFFSET))(str, nullptr);
		}

		::System::Data::EvaluateException* _Eval(::System::String* str, ::System::Exception* arg)
		{
			return (return (::System::Data::EvaluateException*(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__EVAL_OFFSET))(str, arg, nullptr);
		}

		::System::Exception* InvokeArgument()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVOKEARGUMENT_OFFSET))(nullptr);
		}

		::System::Exception* NYI(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_NYI_OFFSET))(str, nullptr);
		}

		::System::Exception* MissingOperand(::System::Data::OperatorInfo* arg)
		{
			return (return (::System::Exception*(*)(::System::Data::OperatorInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERAND_OFFSET))(arg, nullptr);
		}

		::System::Exception* MissingOperator(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERATOR_OFFSET))(str, nullptr);
		}

		::System::Exception* TypeMismatch(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_TYPEMISMATCH_OFFSET))(str, nullptr);
		}

		::System::Exception* FunctionArgumentOutOfRange(::System::String* str, ::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_FUNCTIONARGUMENTOUTOFRANGE_OFFSET))(str, str, nullptr);
		}

		::System::Exception* ExpressionTooComplex()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_EXPRESSIONTOOCOMPLEX_OFFSET))(nullptr);
		}

		::System::Exception* UnboundName(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNBOUNDNAME_OFFSET))(str, nullptr);
		}

		::System::Exception* InvalidString(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDSTRING_OFFSET))(str, nullptr);
		}

		::System::Exception* UndefinedFunction(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNDEFINEDFUNCTION_OFFSET))(str, nullptr);
		}

		::System::Exception* SyntaxError()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_SYNTAXERROR_OFFSET))(nullptr);
		}

		::System::Exception* FunctionArgumentCount(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_FUNCTIONARGUMENTCOUNT_OFFSET))(str, nullptr);
		}

		::System::Exception* MissingRightParen()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_MISSINGRIGHTPAREN_OFFSET))(nullptr);
		}

		::System::Exception* UnknownToken(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNKNOWNTOKEN_OFFSET))(str, arg, nullptr);
		}

		::System::Exception* UnknownToken(::System::Data::Tokens* arg, ::System::Data::Tokens* arg, ::System::Int32 arg)
		{
			return (return (::System::Exception*(*)(::System::Data::Tokens*, ::System::Data::Tokens*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNKNOWNTOKEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Exception* DatatypeConvertion(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Exception*(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_DATATYPECONVERTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* DatavalueConvertion(::System::Object* arg, ::System::Type* arg, ::System::Exception* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::System::Type*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_DATAVALUECONVERTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Exception* InvalidName(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDNAME_OFFSET))(str, nullptr);
		}

		::System::Exception* InvalidDate(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDDATE_OFFSET))(str, nullptr);
		}

		::System::Exception* NonConstantArgument()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_NONCONSTANTARGUMENT_OFFSET))(nullptr);
		}

		::System::Exception* InvalidPattern(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDPATTERN_OFFSET))(str, nullptr);
		}

		::System::Exception* InWithoutParentheses()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INWITHOUTPARENTHESES_OFFSET))(nullptr);
		}

		::System::Exception* InWithoutList()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INWITHOUTLIST_OFFSET))(nullptr);
		}

		::System::Exception* InvalidIsSyntax()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDISSYNTAX_OFFSET))(nullptr);
		}

		::System::Exception* Overflow(::System::Type* arg)
		{
			return (return (::System::Exception*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_OVERFLOW_OFFSET))(arg, nullptr);
		}

		::System::Exception* ArgumentType(::System::String* str, ::System::Int32 arg, ::System::Type* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Int32, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_ARGUMENTTYPE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Exception* ArgumentTypeInteger(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_ARGUMENTTYPEINTEGER_OFFSET))(str, arg, nullptr);
		}

		::System::Exception* TypeMismatchInBinop(::System::Int32 arg, ::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Exception*(*)(::System::Int32, ::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_TYPEMISMATCHINBINOP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Exception* AmbiguousBinop(::System::Int32 arg, ::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Exception*(*)(::System::Int32, ::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_AMBIGUOUSBINOP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Exception* UnsupportedOperator(::System::Int32 arg)
		{
			return (return (::System::Exception*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNSUPPORTEDOPERATOR_OFFSET))(arg, nullptr);
		}

		::System::Exception* InvalidNameBracketing(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDNAMEBRACKETING_OFFSET))(str, nullptr);
		}

		::System::Exception* MissingOperandBefore(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERANDBEFORE_OFFSET))(str, nullptr);
		}

		::System::Exception* TooManyRightParentheses()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_TOOMANYRIGHTPARENTHESES_OFFSET))(nullptr);
		}

		::System::Exception* UnresolvedRelation(::System::String* str, ::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNRESOLVEDRELATION_OFFSET))(str, str, nullptr);
		}

		::System::Data::EvaluateException* BindFailure(::System::String* str)
		{
			return (return (::System::Data::EvaluateException*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_BINDFAILURE_OFFSET))(str, nullptr);
		}

		::System::Exception* AggregateArgument()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_AGGREGATEARGUMENT_OFFSET))(nullptr);
		}

		::System::Exception* AggregateUnbound(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_AGGREGATEUNBOUND_OFFSET))(str, nullptr);
		}

		::System::Exception* EvalNoContext()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_EVALNOCONTEXT_OFFSET))(nullptr);
		}

		::System::Exception* ExpressionUnbound(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_EXPRESSIONUNBOUND_OFFSET))(str, nullptr);
		}

		::System::Exception* ComputeNotAggregate(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_COMPUTENOTAGGREGATE_OFFSET))(str, nullptr);
		}

		::System::Exception* FilterConvertion(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_FILTERCONVERTION_OFFSET))(str, nullptr);
		}

		::System::Exception* LookupArgument()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_LOOKUPARGUMENT_OFFSET))(nullptr);
		}

		::System::Exception* InvalidType(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDTYPE_OFFSET))(str, nullptr);
		}

		::System::Exception* InvalidHoursArgument()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDHOURSARGUMENT_OFFSET))(nullptr);
		}

		::System::Exception* InvalidMinutesArgument()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDMINUTESARGUMENT_OFFSET))(nullptr);
		}

		::System::Exception* InvalidTimeZoneRange()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDTIMEZONERANGE_OFFSET))(nullptr);
		}

		::System::Exception* MismatchKindandTimeSpan()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_MISMATCHKINDANDTIMESPAN_OFFSET))(nullptr);
		}

		::System::Exception* UnsupportedDataType(::System::Type* arg)
		{
			return (return (::System::Exception*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNSUPPORTEDDATATYPE_OFFSET))(arg, nullptr);
		}

	};
}

