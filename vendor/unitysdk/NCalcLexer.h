#pragma once
#include "unitysdk.h"

class DFA7;
class DFA14;
namespace Antlr::Runtime { class ICharStream; }
namespace Antlr::Runtime { class RecognizerSharedState; }

#define NCALCLEXER_.CTOR_OFFSET UNITYSDK_OFFSET(0x212D790)
#define NCALCLEXER_.CTOR_OFFSET UNITYSDK_OFFSET(0x212D860)
#define NCALCLEXER_.CTOR_OFFSET UNITYSDK_OFFSET(0x212D880)
#define NCALCLEXER_GET_GRAMMARFILENAME_OFFSET UNITYSDK_OFFSET(0x212D8A0)
#define NCALCLEXER_MT__19_OFFSET UNITYSDK_OFFSET(0x212D8D0)
#define NCALCLEXER_MT__20_OFFSET UNITYSDK_OFFSET(0x212D920)
#define NCALCLEXER_MT__21_OFFSET UNITYSDK_OFFSET(0x212D970)
#define NCALCLEXER_MT__22_OFFSET UNITYSDK_OFFSET(0x212D9E0)
#define NCALCLEXER_MT__23_OFFSET UNITYSDK_OFFSET(0x212DA50)
#define NCALCLEXER_MT__24_OFFSET UNITYSDK_OFFSET(0x212DAC0)
#define NCALCLEXER_MT__25_OFFSET UNITYSDK_OFFSET(0x212DB30)
#define NCALCLEXER_MT__26_OFFSET UNITYSDK_OFFSET(0x212DB80)
#define NCALCLEXER_MT__27_OFFSET UNITYSDK_OFFSET(0x212DBD0)
#define NCALCLEXER_MT__28_OFFSET UNITYSDK_OFFSET(0x212DC20)
#define NCALCLEXER_MT__29_OFFSET UNITYSDK_OFFSET(0x212DC90)
#define NCALCLEXER_MT__30_OFFSET UNITYSDK_OFFSET(0x212DCE0)
#define NCALCLEXER_MT__31_OFFSET UNITYSDK_OFFSET(0x212DD50)
#define NCALCLEXER_MT__32_OFFSET UNITYSDK_OFFSET(0x212DDC0)
#define NCALCLEXER_MT__33_OFFSET UNITYSDK_OFFSET(0x212DE10)
#define NCALCLEXER_MT__34_OFFSET UNITYSDK_OFFSET(0x212DE80)
#define NCALCLEXER_MT__35_OFFSET UNITYSDK_OFFSET(0x212DED0)
#define NCALCLEXER_MT__36_OFFSET UNITYSDK_OFFSET(0x212DF40)
#define NCALCLEXER_MT__37_OFFSET UNITYSDK_OFFSET(0x212DFB0)
#define NCALCLEXER_MT__38_OFFSET UNITYSDK_OFFSET(0x212E020)
#define NCALCLEXER_MT__39_OFFSET UNITYSDK_OFFSET(0x212E070)
#define NCALCLEXER_MT__40_OFFSET UNITYSDK_OFFSET(0x212E0C0)
#define NCALCLEXER_MT__41_OFFSET UNITYSDK_OFFSET(0x212E110)
#define NCALCLEXER_MT__42_OFFSET UNITYSDK_OFFSET(0x212E160)
#define NCALCLEXER_MT__43_OFFSET UNITYSDK_OFFSET(0x212E1B0)
#define NCALCLEXER_MT__44_OFFSET UNITYSDK_OFFSET(0x212E200)
#define NCALCLEXER_MT__45_OFFSET UNITYSDK_OFFSET(0x212E270)
#define NCALCLEXER_MT__46_OFFSET UNITYSDK_OFFSET(0x212E2C0)
#define NCALCLEXER_MT__47_OFFSET UNITYSDK_OFFSET(0x212E310)
#define NCALCLEXER_MT__48_OFFSET UNITYSDK_OFFSET(0x212E360)
#define NCALCLEXER_MTRUE_OFFSET UNITYSDK_OFFSET(0x212E3B0)
#define NCALCLEXER_MFALSE_OFFSET UNITYSDK_OFFSET(0x212E420)
#define NCALCLEXER_MID_OFFSET UNITYSDK_OFFSET(0x212E490)
#define NCALCLEXER_MINTEGER_OFFSET UNITYSDK_OFFSET(0x212ED60)
#define NCALCLEXER_MFLOAT_OFFSET UNITYSDK_OFFSET(0x212EEE0)
#define NCALCLEXER_MSTRING_OFFSET UNITYSDK_OFFSET(0x212F7C0)
#define NCALCLEXER_MDATETIME_OFFSET UNITYSDK_OFFSET(0x212FEE0)
#define NCALCLEXER_MNAME_OFFSET UNITYSDK_OFFSET(0x21302D0)
#define NCALCLEXER_ME_OFFSET UNITYSDK_OFFSET(0x212F2C0)
#define NCALCLEXER_MLETTER_OFFSET UNITYSDK_OFFSET(0x212E9F0)
#define NCALCLEXER_MDIGIT_OFFSET UNITYSDK_OFFSET(0x212EEC0)
#define NCALCLEXER_MESCAPESEQUENCE_OFFSET UNITYSDK_OFFSET(0x212FCC0)
#define NCALCLEXER_MHEXDIGIT_OFFSET UNITYSDK_OFFSET(0x2130710)
#define NCALCLEXER_MUNICODEESCAPE_OFFSET UNITYSDK_OFFSET(0x21306C0)
#define NCALCLEXER_MWS_OFFSET UNITYSDK_OFFSET(0x2130AF0)
#define NCALCLEXER_MTOKENS_OFFSET UNITYSDK_OFFSET(0x2130E70)
#define NCALCLEXER_INITIALIZECYCLICDFAS_OFFSET UNITYSDK_OFFSET(0x212D7B0)
#define NCALCLEXER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x21316E0)

	inline static constexpr unsigned int NCalcLexer_TypeDefinitionIndex = 3933;

	class NCalcLexer : public Il2CppObject
	{
	public:
		::System::Int32 T__29; // 0x0
		::System::Int32 T__28; // 0x0
		::System::Int32 T__27; // 0x0
		::System::Int32 T__26; // 0x0
		::System::Int32 T__25; // 0x0
		::System::Int32 T__24; // 0x0
		::System::Int32 LETTER; // 0x0
		::System::Int32 T__23; // 0x0
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
		DFA7* dfa7; // 0x20
		DFA14* dfa14; // 0x28
		::System::String* DFA7_eotS; // 0x0
		::System::String* DFA7_eofS; // 0x0
		::System::String* DFA7_minS; // 0x0
		::System::String* DFA7_maxS; // 0x0
		::System::String* DFA7_acceptS; // 0x0
		::System::String* DFA7_specialS; // 0x0
		::Il2CppArray<::System::Object*>* DFA7_transitionS; // 0x0
		::Il2CppArray<::System::Object*>* DFA7_eot; // 0x8
		::Il2CppArray<::System::Object*>* DFA7_eof; // 0x10
		::Il2CppArray<::System::Object*>* DFA7_min; // 0x18
		::Il2CppArray<::System::Object*>* DFA7_max; // 0x20
		::Il2CppArray<::System::Object*>* DFA7_accept; // 0x28
		::Il2CppArray<::System::Object*>* DFA7_special; // 0x30
		::Il2CppArray<::System::Object*>* DFA7_transition; // 0x38
		::System::String* DFA14_eotS; // 0x0
		::System::String* DFA14_eofS; // 0x0
		::System::String* DFA14_minS; // 0x0
		::System::String* DFA14_maxS; // 0x0
		::System::String* DFA14_acceptS; // 0x0
		::System::String* DFA14_specialS; // 0x0
		::Il2CppArray<::System::Object*>* DFA14_transitionS; // 0x40
		::Il2CppArray<::System::Object*>* DFA14_eot; // 0x48
		::Il2CppArray<::System::Object*>* DFA14_eof; // 0x50
		::Il2CppArray<::System::Object*>* DFA14_min; // 0x58
		::Il2CppArray<::System::Object*>* DFA14_max; // 0x60
		::Il2CppArray<::System::Object*>* DFA14_accept; // 0x68
		::Il2CppArray<::System::Object*>* DFA14_special; // 0x70
		::Il2CppArray<::System::Object*>* DFA14_transition; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Antlr::Runtime::ICharStream* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::ICharStream*, ::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Antlr::Runtime::ICharStream* arg, ::Antlr::Runtime::RecognizerSharedState* arg2)
		{
			((::System::Void(*)(::Antlr::Runtime::ICharStream*, ::Antlr::Runtime::RecognizerSharedState*, ::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_GrammarFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_GET_GRAMMARFILENAME_OFFSET))(nullptr);
		}

		::System::Void mT__19()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__19_OFFSET))(nullptr);
		}

		::System::Void mT__20()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__20_OFFSET))(nullptr);
		}

		::System::Void mT__21()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__21_OFFSET))(nullptr);
		}

		::System::Void mT__22()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__22_OFFSET))(nullptr);
		}

		::System::Void mT__23()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__23_OFFSET))(nullptr);
		}

		::System::Void mT__24()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__24_OFFSET))(nullptr);
		}

		::System::Void mT__25()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__25_OFFSET))(nullptr);
		}

		::System::Void mT__26()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__26_OFFSET))(nullptr);
		}

		::System::Void mT__27()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__27_OFFSET))(nullptr);
		}

		::System::Void mT__28()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__28_OFFSET))(nullptr);
		}

		::System::Void mT__29()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__29_OFFSET))(nullptr);
		}

		::System::Void mT__30()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__30_OFFSET))(nullptr);
		}

		::System::Void mT__31()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__31_OFFSET))(nullptr);
		}

		::System::Void mT__32()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__32_OFFSET))(nullptr);
		}

		::System::Void mT__33()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__33_OFFSET))(nullptr);
		}

		::System::Void mT__34()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__34_OFFSET))(nullptr);
		}

		::System::Void mT__35()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__35_OFFSET))(nullptr);
		}

		::System::Void mT__36()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__36_OFFSET))(nullptr);
		}

		::System::Void mT__37()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__37_OFFSET))(nullptr);
		}

		::System::Void mT__38()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__38_OFFSET))(nullptr);
		}

		::System::Void mT__39()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__39_OFFSET))(nullptr);
		}

		::System::Void mT__40()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__40_OFFSET))(nullptr);
		}

		::System::Void mT__41()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__41_OFFSET))(nullptr);
		}

		::System::Void mT__42()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__42_OFFSET))(nullptr);
		}

		::System::Void mT__43()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__43_OFFSET))(nullptr);
		}

		::System::Void mT__44()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__44_OFFSET))(nullptr);
		}

		::System::Void mT__45()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__45_OFFSET))(nullptr);
		}

		::System::Void mT__46()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__46_OFFSET))(nullptr);
		}

		::System::Void mT__47()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__47_OFFSET))(nullptr);
		}

		::System::Void mT__48()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MT__48_OFFSET))(nullptr);
		}

		::System::Void mTRUE()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MTRUE_OFFSET))(nullptr);
		}

		::System::Void mFALSE()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MFALSE_OFFSET))(nullptr);
		}

		::System::Void mID()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MID_OFFSET))(nullptr);
		}

		::System::Void mINTEGER()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MINTEGER_OFFSET))(nullptr);
		}

		::System::Void mFLOAT()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MFLOAT_OFFSET))(nullptr);
		}

		::System::Void mSTRING()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MSTRING_OFFSET))(nullptr);
		}

		::System::Void mDATETIME()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MDATETIME_OFFSET))(nullptr);
		}

		::System::Void mNAME()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MNAME_OFFSET))(nullptr);
		}

		::System::Void mE()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_ME_OFFSET))(nullptr);
		}

		::System::Void mLETTER()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MLETTER_OFFSET))(nullptr);
		}

		::System::Void mDIGIT()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MDIGIT_OFFSET))(nullptr);
		}

		::System::Void mEscapeSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MESCAPESEQUENCE_OFFSET))(nullptr);
		}

		::System::Void mHexDigit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MHEXDIGIT_OFFSET))(nullptr);
		}

		::System::Void mUnicodeEscape()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MUNICODEESCAPE_OFFSET))(nullptr);
		}

		::System::Void mWS()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MWS_OFFSET))(nullptr);
		}

		::System::Void mTokens()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_MTOKENS_OFFSET))(nullptr);
		}

		::System::Void InitializeCyclicDFAs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_INITIALIZECYCLICDFAS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCLEXER_.CCTOR_OFFSET))(nullptr);
		}

	};

