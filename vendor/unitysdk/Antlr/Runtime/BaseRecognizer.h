#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class RecognizerSharedState; }
namespace Antlr::Runtime { class IIntStream; }
namespace Antlr::Runtime { class BitSet; }
namespace Antlr::Runtime { class RecognitionException; }
namespace Antlr::Runtime { class IToken; }

#define ANTLR_RUNTIME_BASERECOGNIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x4CBFE0)
#define ANTLR_RUNTIME_BASERECOGNIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C5A10)
#define ANTLR_RUNTIME_BASERECOGNIZER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4CC120)
#define ANTLR_RUNTIME_BASERECOGNIZER_RESET_OFFSET UNITYSDK_OFFSET(0x4C5B90)
#define ANTLR_RUNTIME_BASERECOGNIZER_MATCH_OFFSET UNITYSDK_OFFSET(0x4CC180)
#define ANTLR_RUNTIME_BASERECOGNIZER_MISMATCHISUNWANTEDTOKEN_OFFSET UNITYSDK_OFFSET(0x4CC320)
#define ANTLR_RUNTIME_BASERECOGNIZER_MISMATCHISMISSINGTOKEN_OFFSET UNITYSDK_OFFSET(0x4CC3C0)
#define ANTLR_RUNTIME_BASERECOGNIZER_REPORTERROR_OFFSET UNITYSDK_OFFSET(0x4CC540)
#define ANTLR_RUNTIME_BASERECOGNIZER_DISPLAYRECOGNITIONERROR_OFFSET UNITYSDK_OFFSET(0x4CC5B0)
#define ANTLR_RUNTIME_BASERECOGNIZER_GETERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x4CC650)
#define ANTLR_RUNTIME_BASERECOGNIZER_GETERRORHEADER_OFFSET UNITYSDK_OFFSET(0x4CCFA0)
#define ANTLR_RUNTIME_BASERECOGNIZER_GETTOKENERRORDISPLAY_OFFSET UNITYSDK_OFFSET(0x4CD180)
#define ANTLR_RUNTIME_BASERECOGNIZER_EMITERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x4CD450)
#define ANTLR_RUNTIME_BASERECOGNIZER_RECOVER_OFFSET UNITYSDK_OFFSET(0x4CD540)
#define ANTLR_RUNTIME_BASERECOGNIZER_BEGINRESYNC_OFFSET UNITYSDK_OFFSET(0x4CD720)
#define ANTLR_RUNTIME_BASERECOGNIZER_ENDRESYNC_OFFSET UNITYSDK_OFFSET(0x4CD730)
#define ANTLR_RUNTIME_BASERECOGNIZER_RECOVERFROMMISMATCHEDTOKEN_OFFSET UNITYSDK_OFFSET(0x4CD740)
#define ANTLR_RUNTIME_BASERECOGNIZER_CONSUMEUNTIL_OFFSET UNITYSDK_OFFSET(0x4CDA70)
#define ANTLR_RUNTIME_BASERECOGNIZER_GET_GRAMMARFILENAME_OFFSET UNITYSDK_OFFSET(0x4CDC80)
#define ANTLR_RUNTIME_BASERECOGNIZER_GET_TOKENNAMES_OFFSET UNITYSDK_OFFSET(0x4CDC90)
#define ANTLR_RUNTIME_BASERECOGNIZER_MISMATCH_OFFSET UNITYSDK_OFFSET(0x4CDCA0)
#define ANTLR_RUNTIME_BASERECOGNIZER_COMPUTEERRORRECOVERYSET_OFFSET UNITYSDK_OFFSET(0x4CDE00)
#define ANTLR_RUNTIME_BASERECOGNIZER_COMPUTECONTEXTSENSITIVERULEFOLLOW_OFFSET UNITYSDK_OFFSET(0x4CDE20)
#define ANTLR_RUNTIME_BASERECOGNIZER_COMBINEFOLLOWS_OFFSET UNITYSDK_OFFSET(0x4CDE40)
#define ANTLR_RUNTIME_BASERECOGNIZER_GETCURRENTINPUTSYMBOL_OFFSET UNITYSDK_OFFSET(0x4CDFD0)
#define ANTLR_RUNTIME_BASERECOGNIZER_GETMISSINGSYMBOL_OFFSET UNITYSDK_OFFSET(0x4CDFE0)
#define ANTLR_RUNTIME_BASERECOGNIZER_PUSHFOLLOW_OFFSET UNITYSDK_OFFSET(0x4CDFF0)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int BaseRecognizer_TypeDefinitionIndex = 37412;

	class BaseRecognizer : public Il2CppObject
	{
	public:
		::System::String* NEXT_TOKEN_RULE_NAME; // 0x0
		::Antlr::Runtime::RecognizerSharedState* state; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Antlr::Runtime::RecognizerSharedState* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::RecognizerSharedState*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_RESET_OFFSET))(nullptr);
		}

		::System::Object* Match(::Antlr::Runtime::IIntStream* arg, ::System::Int32 arg, ::Antlr::Runtime::BitSet* arg)
		{
			return (return (::System::Object*(*)(::Antlr::Runtime::IIntStream*, ::System::Int32, ::Antlr::Runtime::BitSet*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_MATCH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MismatchIsUnwantedToken(::Antlr::Runtime::IIntStream* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Antlr::Runtime::IIntStream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_MISMATCHISUNWANTEDTOKEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MismatchIsMissingToken(::Antlr::Runtime::IIntStream* arg, ::Antlr::Runtime::BitSet* arg)
		{
			return (return (::System::Boolean(*)(::Antlr::Runtime::IIntStream*, ::Antlr::Runtime::BitSet*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_MISMATCHISMISSINGTOKEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReportError(::Antlr::Runtime::RecognitionException* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::RecognitionException*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_REPORTERROR_OFFSET))(arg, nullptr);
		}

		::System::Void DisplayRecognitionError(::Il2CppArray<::System::Object*>* arg, ::Antlr::Runtime::RecognitionException* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Antlr::Runtime::RecognitionException*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_DISPLAYRECOGNITIONERROR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetErrorMessage(::Antlr::Runtime::RecognitionException* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Antlr::Runtime::RecognitionException*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_GETERRORMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetErrorHeader(::Antlr::Runtime::RecognitionException* arg)
		{
			return (return (::System::String*(*)(::Antlr::Runtime::RecognitionException*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_GETERRORHEADER_OFFSET))(arg, nullptr);
		}

		::System::String* GetTokenErrorDisplay(::Antlr::Runtime::IToken* arg)
		{
			return (return (::System::String*(*)(::Antlr::Runtime::IToken*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_GETTOKENERRORDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void EmitErrorMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_EMITERRORMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void Recover(::Antlr::Runtime::IIntStream* arg, ::Antlr::Runtime::RecognitionException* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::IIntStream*, ::Antlr::Runtime::RecognitionException*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_RECOVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BeginResync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_BEGINRESYNC_OFFSET))(nullptr);
		}

		::System::Void EndResync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_ENDRESYNC_OFFSET))(nullptr);
		}

		::System::Object* RecoverFromMismatchedToken(::Antlr::Runtime::IIntStream* arg, ::System::Int32 arg, ::Antlr::Runtime::BitSet* arg)
		{
			return (return (::System::Object*(*)(::Antlr::Runtime::IIntStream*, ::System::Int32, ::Antlr::Runtime::BitSet*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_RECOVERFROMMISMATCHEDTOKEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ConsumeUntil(::Antlr::Runtime::IIntStream* arg, ::Antlr::Runtime::BitSet* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::IIntStream*, ::Antlr::Runtime::BitSet*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_CONSUMEUNTIL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_GrammarFileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_GET_GRAMMARFILENAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_TokenNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_GET_TOKENNAMES_OFFSET))(nullptr);
		}

		::System::Void Mismatch(::Antlr::Runtime::IIntStream* arg, ::System::Int32 arg, ::Antlr::Runtime::BitSet* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::IIntStream*, ::System::Int32, ::Antlr::Runtime::BitSet*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_MISMATCH_OFFSET))(arg, arg, arg, nullptr);
		}

		::Antlr::Runtime::BitSet* ComputeErrorRecoverySet()
		{
			return (return (::Antlr::Runtime::BitSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_COMPUTEERRORRECOVERYSET_OFFSET))(nullptr);
		}

		::Antlr::Runtime::BitSet* ComputeContextSensitiveRuleFOLLOW()
		{
			return (return (::Antlr::Runtime::BitSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_COMPUTECONTEXTSENSITIVERULEFOLLOW_OFFSET))(nullptr);
		}

		::Antlr::Runtime::BitSet* CombineFollows(::System::Boolean arg)
		{
			return (return (::Antlr::Runtime::BitSet*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_COMBINEFOLLOWS_OFFSET))(arg, nullptr);
		}

		::System::Object* GetCurrentInputSymbol(::Antlr::Runtime::IIntStream* arg)
		{
			return (return (::System::Object*(*)(::Antlr::Runtime::IIntStream*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_GETCURRENTINPUTSYMBOL_OFFSET))(arg, nullptr);
		}

		::System::Object* GetMissingSymbol(::Antlr::Runtime::IIntStream* arg, ::Antlr::Runtime::RecognitionException* arg, ::System::Int32 arg, ::Antlr::Runtime::BitSet* arg)
		{
			return (return (::System::Object*(*)(::Antlr::Runtime::IIntStream*, ::Antlr::Runtime::RecognitionException*, ::System::Int32, ::Antlr::Runtime::BitSet*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_GETMISSINGSYMBOL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void PushFollow(::Antlr::Runtime::BitSet* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::BitSet*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_BASERECOGNIZER_PUSHFOLLOW_OFFSET))(arg, nullptr);
		}

	};
}

