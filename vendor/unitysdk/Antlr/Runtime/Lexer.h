#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class ICharStream; }
namespace Antlr::Runtime { class RecognizerSharedState; }
namespace Antlr::Runtime { class IToken; }
namespace Antlr::Runtime { class RecognitionException; }

#define ANTLR_RUNTIME_LEXER_.CTOR_OFFSET UNITYSDK_OFFSET(0x4CF5E0)
#define ANTLR_RUNTIME_LEXER_.CTOR_OFFSET UNITYSDK_OFFSET(0x4CF630)
#define ANTLR_RUNTIME_LEXER_GET_CHARINDEX_OFFSET UNITYSDK_OFFSET(0x4CF6A0)
#define ANTLR_RUNTIME_LEXER_RESET_OFFSET UNITYSDK_OFFSET(0x4CF740)
#define ANTLR_RUNTIME_LEXER_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x4CF880)
#define ANTLR_RUNTIME_LEXER_MTOKENS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_LEXER_EMIT_OFFSET UNITYSDK_OFFSET(0x4CFD30)
#define ANTLR_RUNTIME_LEXER_EMIT_OFFSET UNITYSDK_OFFSET(0x4CFD60)
#define ANTLR_RUNTIME_LEXER_MATCH_OFFSET UNITYSDK_OFFSET(0x4CFFA0)
#define ANTLR_RUNTIME_LEXER_MATCH_OFFSET UNITYSDK_OFFSET(0x4D01A0)
#define ANTLR_RUNTIME_LEXER_MATCHRANGE_OFFSET UNITYSDK_OFFSET(0x4D0340)
#define ANTLR_RUNTIME_LEXER_RECOVER_OFFSET UNITYSDK_OFFSET(0x4D0570)
#define ANTLR_RUNTIME_LEXER_REPORTERROR_OFFSET UNITYSDK_OFFSET(0x4D0610)
#define ANTLR_RUNTIME_LEXER_GETERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x4D0650)
#define ANTLR_RUNTIME_LEXER_GETCHARERRORDISPLAY_OFFSET UNITYSDK_OFFSET(0x4D0C20)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int Lexer_TypeDefinitionIndex = 37417;

	class Lexer : public ::UnityEngine::WritableAttribute
	{
	public:
		::Antlr::Runtime::ICharStream* input; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_LEXER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Antlr::Runtime::ICharStream* arg, ::Antlr::Runtime::RecognizerSharedState* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::ICharStream*, ::Antlr::Runtime::RecognizerSharedState*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_LEXER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_CharIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_LEXER_GET_CHARINDEX_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_LEXER_RESET_OFFSET))(nullptr);
		}

		::Antlr::Runtime::IToken* NextToken()
		{
			return (return (::Antlr::Runtime::IToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_LEXER_NEXTTOKEN_OFFSET))(nullptr);
		}

		::System::Void mTokens()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_LEXER_MTOKENS_OFFSET))(nullptr);
		}

		::System::Void Emit(::Antlr::Runtime::IToken* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::IToken*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_LEXER_EMIT_OFFSET))(arg, nullptr);
		}

		::Antlr::Runtime::IToken* Emit()
		{
			return (return (::Antlr::Runtime::IToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_LEXER_EMIT_OFFSET))(nullptr);
		}

		::System::Void Match(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_LEXER_MATCH_OFFSET))(str, nullptr);
		}

		::System::Void Match(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_LEXER_MATCH_OFFSET))(arg, nullptr);
		}

		::System::Void MatchRange(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_LEXER_MATCHRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Recover(::Antlr::Runtime::RecognitionException* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::RecognitionException*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_LEXER_RECOVER_OFFSET))(arg, nullptr);
		}

		::System::Void ReportError(::Antlr::Runtime::RecognitionException* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::RecognitionException*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_LEXER_REPORTERROR_OFFSET))(arg, nullptr);
		}

		::System::String* GetErrorMessage(::Antlr::Runtime::RecognitionException* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Antlr::Runtime::RecognitionException*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_LEXER_GETERRORMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetCharErrorDisplay(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_LEXER_GETCHARERRORDISPLAY_OFFSET))(arg, nullptr);
		}

	};
}

