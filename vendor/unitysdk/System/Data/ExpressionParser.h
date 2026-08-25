#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_EXPRESSIONPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x975BC90)
#define SYSTEM_DATA_EXPRESSIONPARSER_LOADEXPRESSION_OFFSET UNITYSDK_OFFSET(0x975BD40)
#define SYSTEM_DATA_EXPRESSIONPARSER_STARTSCAN_OFFSET UNITYSDK_OFFSET(0x975D560)
#define SYSTEM_DATA_EXPRESSIONPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x975BE30)
#define SYSTEM_DATA_EXPRESSIONPARSER_PARSEAGGREGATEARGUMENT_OFFSET UNITYSDK_OFFSET(0x975DF50)
#define SYSTEM_DATA_EXPRESSIONPARSER_NODEPOP_OFFSET UNITYSDK_OFFSET(0x975DF10)
#define SYSTEM_DATA_EXPRESSIONPARSER_NODEPEEK_OFFSET UNITYSDK_OFFSET(0x975DED0)
#define SYSTEM_DATA_EXPRESSIONPARSER_NODEPUSH_OFFSET UNITYSDK_OFFSET(0x975DE30)
#define SYSTEM_DATA_EXPRESSIONPARSER_BUILDEXPRESSION_OFFSET UNITYSDK_OFFSET(0x975DAE0)
#define SYSTEM_DATA_EXPRESSIONPARSER_CHECKTOKEN_OFFSET UNITYSDK_OFFSET(0x975DDF0)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCAN_OFFSET UNITYSDK_OFFSET(0x975D620)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANNUMERIC_OFFSET UNITYSDK_OFFSET(0x975E760)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANNAME_OFFSET UNITYSDK_OFFSET(0x975EC00)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANNAME_OFFSET UNITYSDK_OFFSET(0x975E5F0)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANDATE_OFFSET UNITYSDK_OFFSET(0x975E400)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANBINARYCONSTANT_OFFSET UNITYSDK_OFFSET(0x975E910)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANRESERVED_OFFSET UNITYSDK_OFFSET(0x975E940)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANSTRING_OFFSET UNITYSDK_OFFSET(0x975E510)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANTOKEN_OFFSET UNITYSDK_OFFSET(0x975DDA0)
#define SYSTEM_DATA_EXPRESSIONPARSER_SCANWHITE_OFFSET UNITYSDK_OFFSET(0x975E390)
#define SYSTEM_DATA_EXPRESSIONPARSER_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x975EC90)
#define SYSTEM_DATA_EXPRESSIONPARSER_ISALPHANUMERIC_OFFSET UNITYSDK_OFFSET(0x975EBD0)
#define SYSTEM_DATA_EXPRESSIONPARSER_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x975E920)
#define SYSTEM_DATA_EXPRESSIONPARSER_ISALPHA_OFFSET UNITYSDK_OFFSET(0x975EC70)
#define SYSTEM_DATA_EXPRESSIONPARSER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x975ECB0)

namespace System::Data
{
	inline static constexpr unsigned int ExpressionParser_TypeDefinitionIndex = 32255;

	class ExpressionParser : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_reservedwords; // 0x0
		::System::Char _escape; // 0x10
		::System::Char _decimalSeparator; // 0x12
		::System::Char _listSeparator; // 0x14
		::System::Char _exponentL; // 0x16
		::System::Char _exponentU; // 0x18
		::Il2CppArray<::System::Object*>* _text; // 0x20
		::System::Int32 _pos; // 0x28
		::System::Int32 _start; // 0x2C
		::System::Data::Tokens* _token; // 0x30
		::System::Int32 _op; // 0x34
		::Il2CppArray<::System::Object*>* _ops; // 0x38
		::System::Int32 _topOperator; // 0x40
		::System::Int32 _topNode; // 0x44
		::System::Data::DataTable* _table; // 0x48
		::Il2CppArray<::System::Object*>* _nodeStack; // 0x50
		::System::Int32 _prevOperand; // 0x58
		::System::Data::ExpressionNode* _expression; // 0x60

		::System::Void .ctor(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void LoadExpression(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_LOADEXPRESSION_OFFSET))(str, nullptr);
		}

		::System::Void StartScan()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_STARTSCAN_OFFSET))(nullptr);
		}

		::System::Data::ExpressionNode* Parse()
		{
			return (return (::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_PARSE_OFFSET))(nullptr);
		}

		::System::Data::ExpressionNode* ParseAggregateArgument(::System::Data::FunctionId* arg)
		{
			return (return (::System::Data::ExpressionNode*(*)(::System::Data::FunctionId*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_PARSEAGGREGATEARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Data::ExpressionNode* NodePop()
		{
			return (return (::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_NODEPOP_OFFSET))(nullptr);
		}

		::System::Data::ExpressionNode* NodePeek()
		{
			return (return (::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_NODEPEEK_OFFSET))(nullptr);
		}

		::System::Void NodePush(::System::Data::ExpressionNode* arg)
		{
			((::System::Void(*)(::System::Data::ExpressionNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_NODEPUSH_OFFSET))(arg, nullptr);
		}

		::System::Void BuildExpression(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_BUILDEXPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Void CheckToken(::System::Data::Tokens* arg)
		{
			((::System::Void(*)(::System::Data::Tokens*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_CHECKTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Data::Tokens* Scan()
		{
			return (return (::System::Data::Tokens*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCAN_OFFSET))(nullptr);
		}

		::System::Void ScanNumeric()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANNUMERIC_OFFSET))(nullptr);
		}

		::System::Void ScanName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANNAME_OFFSET))(nullptr);
		}

		::System::Void ScanName(::System::Char arg, ::System::Char arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANNAME_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void ScanDate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANDATE_OFFSET))(nullptr);
		}

		::System::Void ScanBinaryConstant()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANBINARYCONSTANT_OFFSET))(nullptr);
		}

		::System::Void ScanReserved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANRESERVED_OFFSET))(nullptr);
		}

		::System::Void ScanString(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void ScanToken(::System::Data::Tokens* arg)
		{
			((::System::Void(*)(::System::Data::Tokens*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void ScanWhite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_SCANWHITE_OFFSET))(nullptr);
		}

		::System::Boolean IsWhiteSpace(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_ISWHITESPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAlphaNumeric(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_ISALPHANUMERIC_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDigit(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_ISDIGIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAlpha(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_ISALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONPARSER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

