#pragma once
#include "unitysdk.h"

namespace Antlr::Runtime::Tree { class ITreeAdaptor; }
namespace Antlr::Runtime { class BitSet; }
namespace Antlr::Runtime { class ITokenStream; }
namespace Antlr::Runtime { class RecognizerSharedState; }
namespace Antlr::Runtime { class RecognitionException; }
class ncalcExpression_return;
class logicalExpression_return;
class conditionalExpression_return;
class booleanAndExpression_return;
class bitwiseOrExpression_return;
class bitwiseXOrExpression_return;
class bitwiseAndExpression_return;
class equalityExpression_return;
class relationalExpression_return;
class shiftExpression_return;
class additiveExpression_return;
class multiplicativeExpression_return;
class unaryExpression_return;
class primaryExpression_return;
class value_return;
class identifier_return;
class expressionList_return;
class arguments_return;

#define NCALCPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2133590)
#define NCALCPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2133650)
#define NCALCPARSER_GET_TREEADAPTOR_OFFSET UNITYSDK_OFFSET(0x21336E0)
#define NCALCPARSER_SET_TREEADAPTOR_OFFSET UNITYSDK_OFFSET(0x21336F0)
#define NCALCPARSER_GET_TOKENNAMES_OFFSET UNITYSDK_OFFSET(0x2133700)
#define NCALCPARSER_GET_GRAMMARFILENAME_OFFSET UNITYSDK_OFFSET(0x2133750)
#define NCALCPARSER_EXTRACTSTRING_OFFSET UNITYSDK_OFFSET(0x2133780)
#define NCALCPARSER_GET_ERRORS_OFFSET UNITYSDK_OFFSET(0x2133C40)
#define NCALCPARSER_SET_ERRORS_OFFSET UNITYSDK_OFFSET(0x2133C50)
#define NCALCPARSER_DISPLAYRECOGNITIONERROR_OFFSET UNITYSDK_OFFSET(0x2133C60)
#define NCALCPARSER_NCALCEXPRESSION_OFFSET UNITYSDK_OFFSET(0x2133DE0)
#define NCALCPARSER_LOGICALEXPRESSION_OFFSET UNITYSDK_OFFSET(0x2134570)
#define NCALCPARSER_CONDITIONALEXPRESSION_OFFSET UNITYSDK_OFFSET(0x2135310)
#define NCALCPARSER_BOOLEANANDEXPRESSION_OFFSET UNITYSDK_OFFSET(0x2136010)
#define NCALCPARSER_BITWISEOREXPRESSION_OFFSET UNITYSDK_OFFSET(0x2136D10)
#define NCALCPARSER_BITWISEXOREXPRESSION_OFFSET UNITYSDK_OFFSET(0x2137850)
#define NCALCPARSER_BITWISEANDEXPRESSION_OFFSET UNITYSDK_OFFSET(0x2138390)
#define NCALCPARSER_EQUALITYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x2138ED0)
#define NCALCPARSER_RELATIONALEXPRESSION_OFFSET UNITYSDK_OFFSET(0x213A080)
#define NCALCPARSER_SHIFTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x213B310)
#define NCALCPARSER_ADDITIVEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x213C150)
#define NCALCPARSER_MULTIPLICATIVEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x213CF90)
#define NCALCPARSER_UNARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x213E000)
#define NCALCPARSER_PRIMARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x213F5D0)
#define NCALCPARSER_VALUE_OFFSET UNITYSDK_OFFSET(0x21407B0)
#define NCALCPARSER_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x21424D0)
#define NCALCPARSER_EXPRESSIONLIST_OFFSET UNITYSDK_OFFSET(0x2143E80)
#define NCALCPARSER_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x2143280)
#define NCALCPARSER_INITIALIZECYCLICDFAS_OFFSET UNITYSDK_OFFSET(0x21336D0)
#define NCALCPARSER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2144AA0)

	inline static constexpr unsigned int NCalcParser_TypeDefinitionIndex = 3952;

	class NCalcParser : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* tokenNames; // 0x0
		::System::Int32 T__29; // 0x0
		::System::Int32 T__28; // 0x0
		::System::Int32 T__27; // 0x0
		::System::Int32 T__26; // 0x0
		::System::Int32 T__25; // 0x0
		::System::Int32 T__24; // 0x0
		::System::Int32 T__23; // 0x0
		::System::Int32 LETTER; // 0x0
		::System::Int32 T__22; // 0x0
		::System::Int32 T__21; // 0x0
		::System::Int32 T__20; // 0x0
		::System::Int32 FLOAT; // 0x0
		::System::Int32 ID; // 0x0
		::System::Int32 EOF; // 0x0
		::System::Int32 HexDigit; // 0x0
		::System::Int32 T__19; // 0x0
		::System::Int32 NAME; // 0x0
		::System::Int32 DIGIT; // 0x0
		::System::Int32 T__42; // 0x0
		::System::Int32 INTEGER; // 0x0
		::System::Int32 E; // 0x0
		::System::Int32 T__43; // 0x0
		::System::Int32 T__40; // 0x0
		::System::Int32 T__41; // 0x0
		::System::Int32 T__46; // 0x0
		::System::Int32 T__47; // 0x0
		::System::Int32 T__44; // 0x0
		::System::Int32 T__45; // 0x0
		::System::Int32 T__48; // 0x0
		::System::Int32 DATETIME; // 0x0
		::System::Int32 TRUE; // 0x0
		::System::Int32 T__30; // 0x0
		::System::Int32 T__31; // 0x0
		::System::Int32 T__32; // 0x0
		::System::Int32 WS; // 0x0
		::System::Int32 T__33; // 0x0
		::System::Int32 T__34; // 0x0
		::System::Int32 T__35; // 0x0
		::System::Int32 T__36; // 0x0
		::System::Int32 T__37; // 0x0
		::System::Int32 T__38; // 0x0
		::System::Int32 T__39; // 0x0
		::System::Int32 UnicodeEscape; // 0x0
		::System::Int32 FALSE; // 0x0
		::System::Int32 EscapeSequence; // 0x0
		::System::Int32 STRING; // 0x0
		::Antlr::Runtime::Tree::ITreeAdaptor* adaptor; // 0x20
		::System::Char BS; // 0x0
		::System::Globalization::NumberFormatInfo* numberFormatInfo; // 0x8
		Il2CppObject* _Errors_k__BackingField; // 0x28
		::Antlr::Runtime::BitSet* FOLLOW_logicalExpression_in_ncalcExpression56; // 0x10
		::Antlr::Runtime::BitSet* FOLLOW_EOF_in_ncalcExpression58; // 0x18
		::Antlr::Runtime::BitSet* FOLLOW_conditionalExpression_in_logicalExpression78; // 0x20
		::Antlr::Runtime::BitSet* FOLLOW_19_in_logicalExpression84; // 0x28
		::Antlr::Runtime::BitSet* FOLLOW_conditionalExpression_in_logicalExpression88; // 0x30
		::Antlr::Runtime::BitSet* FOLLOW_20_in_logicalExpression90; // 0x38
		::Antlr::Runtime::BitSet* FOLLOW_conditionalExpression_in_logicalExpression94; // 0x40
		::Antlr::Runtime::BitSet* FOLLOW_booleanAndExpression_in_conditionalExpression121; // 0x48
		::Antlr::Runtime::BitSet* FOLLOW_set_in_conditionalExpression130; // 0x50
		::Antlr::Runtime::BitSet* FOLLOW_conditionalExpression_in_conditionalExpression146; // 0x58
		::Antlr::Runtime::BitSet* FOLLOW_bitwiseOrExpression_in_booleanAndExpression180; // 0x60
		::Antlr::Runtime::BitSet* FOLLOW_set_in_booleanAndExpression189; // 0x68
		::Antlr::Runtime::BitSet* FOLLOW_bitwiseOrExpression_in_booleanAndExpression205; // 0x70
		::Antlr::Runtime::BitSet* FOLLOW_bitwiseXOrExpression_in_bitwiseOrExpression237; // 0x78
		::Antlr::Runtime::BitSet* FOLLOW_25_in_bitwiseOrExpression246; // 0x80
		::Antlr::Runtime::BitSet* FOLLOW_bitwiseOrExpression_in_bitwiseOrExpression256; // 0x88
		::Antlr::Runtime::BitSet* FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression290; // 0x90
		::Antlr::Runtime::BitSet* FOLLOW_26_in_bitwiseXOrExpression299; // 0x98
		::Antlr::Runtime::BitSet* FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression309; // 0xA0
		::Antlr::Runtime::BitSet* FOLLOW_equalityExpression_in_bitwiseAndExpression341; // 0xA8
		::Antlr::Runtime::BitSet* FOLLOW_27_in_bitwiseAndExpression350; // 0xB0
		::Antlr::Runtime::BitSet* FOLLOW_equalityExpression_in_bitwiseAndExpression360; // 0xB8
		::Antlr::Runtime::BitSet* FOLLOW_relationalExpression_in_equalityExpression394; // 0xC0
		::Antlr::Runtime::BitSet* FOLLOW_set_in_equalityExpression405; // 0xC8
		::Antlr::Runtime::BitSet* FOLLOW_set_in_equalityExpression422; // 0xD0
		::Antlr::Runtime::BitSet* FOLLOW_relationalExpression_in_equalityExpression441; // 0xD8
		::Antlr::Runtime::BitSet* FOLLOW_shiftExpression_in_relationalExpression474; // 0xE0
		::Antlr::Runtime::BitSet* FOLLOW_32_in_relationalExpression485; // 0xE8
		::Antlr::Runtime::BitSet* FOLLOW_33_in_relationalExpression495; // 0xF0
		::Antlr::Runtime::BitSet* FOLLOW_34_in_relationalExpression506; // 0xF8
		::Antlr::Runtime::BitSet* FOLLOW_35_in_relationalExpression516; // 0x100
		::Antlr::Runtime::BitSet* FOLLOW_shiftExpression_in_relationalExpression528; // 0x108
		::Antlr::Runtime::BitSet* FOLLOW_additiveExpression_in_shiftExpression560; // 0x110
		::Antlr::Runtime::BitSet* FOLLOW_36_in_shiftExpression571; // 0x118
		::Antlr::Runtime::BitSet* FOLLOW_37_in_shiftExpression581; // 0x120
		::Antlr::Runtime::BitSet* FOLLOW_additiveExpression_in_shiftExpression593; // 0x128
		::Antlr::Runtime::BitSet* FOLLOW_multiplicativeExpression_in_additiveExpression625; // 0x130
		::Antlr::Runtime::BitSet* FOLLOW_38_in_additiveExpression636; // 0x138
		::Antlr::Runtime::BitSet* FOLLOW_39_in_additiveExpression646; // 0x140
		::Antlr::Runtime::BitSet* FOLLOW_multiplicativeExpression_in_additiveExpression658; // 0x148
		::Antlr::Runtime::BitSet* FOLLOW_unaryExpression_in_multiplicativeExpression690; // 0x150
		::Antlr::Runtime::BitSet* FOLLOW_40_in_multiplicativeExpression701; // 0x158
		::Antlr::Runtime::BitSet* FOLLOW_41_in_multiplicativeExpression711; // 0x160
		::Antlr::Runtime::BitSet* FOLLOW_42_in_multiplicativeExpression721; // 0x168
		::Antlr::Runtime::BitSet* FOLLOW_unaryExpression_in_multiplicativeExpression733; // 0x170
		::Antlr::Runtime::BitSet* FOLLOW_primaryExpression_in_unaryExpression760; // 0x178
		::Antlr::Runtime::BitSet* FOLLOW_set_in_unaryExpression771; // 0x180
		::Antlr::Runtime::BitSet* FOLLOW_primaryExpression_in_unaryExpression779; // 0x188
		::Antlr::Runtime::BitSet* FOLLOW_45_in_unaryExpression791; // 0x190
		::Antlr::Runtime::BitSet* FOLLOW_primaryExpression_in_unaryExpression794; // 0x198
		::Antlr::Runtime::BitSet* FOLLOW_39_in_unaryExpression805; // 0x1A0
		::Antlr::Runtime::BitSet* FOLLOW_primaryExpression_in_unaryExpression807; // 0x1A8
		::Antlr::Runtime::BitSet* FOLLOW_46_in_primaryExpression829; // 0x1B0
		::Antlr::Runtime::BitSet* FOLLOW_logicalExpression_in_primaryExpression831; // 0x1B8
		::Antlr::Runtime::BitSet* FOLLOW_47_in_primaryExpression833; // 0x1C0
		::Antlr::Runtime::BitSet* FOLLOW_value_in_primaryExpression843; // 0x1C8
		::Antlr::Runtime::BitSet* FOLLOW_identifier_in_primaryExpression851; // 0x1D0
		::Antlr::Runtime::BitSet* FOLLOW_arguments_in_primaryExpression856; // 0x1D8
		::Antlr::Runtime::BitSet* FOLLOW_INTEGER_in_value876; // 0x1E0
		::Antlr::Runtime::BitSet* FOLLOW_FLOAT_in_value884; // 0x1E8
		::Antlr::Runtime::BitSet* FOLLOW_STRING_in_value892; // 0x1F0
		::Antlr::Runtime::BitSet* FOLLOW_DATETIME_in_value901; // 0x1F8
		::Antlr::Runtime::BitSet* FOLLOW_TRUE_in_value908; // 0x200
		::Antlr::Runtime::BitSet* FOLLOW_FALSE_in_value916; // 0x208
		::Antlr::Runtime::BitSet* FOLLOW_ID_in_identifier934; // 0x210
		::Antlr::Runtime::BitSet* FOLLOW_NAME_in_identifier942; // 0x218
		::Antlr::Runtime::BitSet* FOLLOW_logicalExpression_in_expressionList966; // 0x220
		::Antlr::Runtime::BitSet* FOLLOW_48_in_expressionList973; // 0x228
		::Antlr::Runtime::BitSet* FOLLOW_logicalExpression_in_expressionList977; // 0x230
		::Antlr::Runtime::BitSet* FOLLOW_46_in_arguments1006; // 0x238
		::Antlr::Runtime::BitSet* FOLLOW_expressionList_in_arguments1010; // 0x240
		::Antlr::Runtime::BitSet* FOLLOW_47_in_arguments1017; // 0x248

		::System::Void .ctor(::Antlr::Runtime::ITokenStream* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::ITokenStream*, ::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Antlr::Runtime::ITokenStream* arg, ::Antlr::Runtime::RecognizerSharedState* arg2)
		{
			((::System::Void(*)(::Antlr::Runtime::ITokenStream*, ::Antlr::Runtime::RecognizerSharedState*, ::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::Antlr::Runtime::Tree::ITreeAdaptor* get_TreeAdaptor()
		{
			return ((::Antlr::Runtime::Tree::ITreeAdaptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_GET_TREEADAPTOR_OFFSET))(nullptr);
		}

		::System::Void set_TreeAdaptor(::Antlr::Runtime::Tree::ITreeAdaptor* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::Tree::ITreeAdaptor*, ::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_SET_TREEADAPTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_TokenNames()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_GET_TOKENNAMES_OFFSET))(nullptr);
		}

		::System::String* get_GrammarFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_GET_GRAMMARFILENAME_OFFSET))(nullptr);
		}

		::System::String* extractString(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_EXTRACTSTRING_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Errors()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_GET_ERRORS_OFFSET))(nullptr);
		}

		::System::Void set_Errors(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_SET_ERRORS_OFFSET))(arg, nullptr);
		}

		::System::Void DisplayRecognitionError(::Il2CppArray<::System::Object*>* arg, ::Antlr::Runtime::RecognitionException* arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Antlr::Runtime::RecognitionException*, ::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_DISPLAYRECOGNITIONERROR_OFFSET))(arg, arg2, nullptr);
		}

		ncalcExpression_return* ncalcExpression()
		{
			return ((ncalcExpression_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_NCALCEXPRESSION_OFFSET))(nullptr);
		}

		logicalExpression_return* logicalExpression()
		{
			return ((logicalExpression_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_LOGICALEXPRESSION_OFFSET))(nullptr);
		}

		conditionalExpression_return* conditionalExpression()
		{
			return ((conditionalExpression_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_CONDITIONALEXPRESSION_OFFSET))(nullptr);
		}

		booleanAndExpression_return* booleanAndExpression()
		{
			return ((booleanAndExpression_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_BOOLEANANDEXPRESSION_OFFSET))(nullptr);
		}

		bitwiseOrExpression_return* bitwiseOrExpression()
		{
			return ((bitwiseOrExpression_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_BITWISEOREXPRESSION_OFFSET))(nullptr);
		}

		bitwiseXOrExpression_return* bitwiseXOrExpression()
		{
			return ((bitwiseXOrExpression_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_BITWISEXOREXPRESSION_OFFSET))(nullptr);
		}

		bitwiseAndExpression_return* bitwiseAndExpression()
		{
			return ((bitwiseAndExpression_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_BITWISEANDEXPRESSION_OFFSET))(nullptr);
		}

		equalityExpression_return* equalityExpression()
		{
			return ((equalityExpression_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_EQUALITYEXPRESSION_OFFSET))(nullptr);
		}

		relationalExpression_return* relationalExpression()
		{
			return ((relationalExpression_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_RELATIONALEXPRESSION_OFFSET))(nullptr);
		}

		shiftExpression_return* shiftExpression()
		{
			return ((shiftExpression_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_SHIFTEXPRESSION_OFFSET))(nullptr);
		}

		additiveExpression_return* additiveExpression()
		{
			return ((additiveExpression_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_ADDITIVEEXPRESSION_OFFSET))(nullptr);
		}

		multiplicativeExpression_return* multiplicativeExpression()
		{
			return ((multiplicativeExpression_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_MULTIPLICATIVEEXPRESSION_OFFSET))(nullptr);
		}

		unaryExpression_return* unaryExpression()
		{
			return ((unaryExpression_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_UNARYEXPRESSION_OFFSET))(nullptr);
		}

		primaryExpression_return* primaryExpression()
		{
			return ((primaryExpression_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_PRIMARYEXPRESSION_OFFSET))(nullptr);
		}

		value_return* value()
		{
			return ((value_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_VALUE_OFFSET))(nullptr);
		}

		identifier_return* identifier()
		{
			return ((identifier_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_IDENTIFIER_OFFSET))(nullptr);
		}

		expressionList_return* expressionList()
		{
			return ((expressionList_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_EXPRESSIONLIST_OFFSET))(nullptr);
		}

		arguments_return* arguments()
		{
			return ((arguments_return*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_ARGUMENTS_OFFSET))(nullptr);
		}

		::System::Void InitializeCyclicDFAs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_INITIALIZECYCLICDFAS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCPARSER_.CCTOR_OFFSET))(nullptr);
		}

	};

