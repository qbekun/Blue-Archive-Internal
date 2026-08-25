#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class ITokenStream; }
namespace Antlr::Runtime { class RecognizerSharedState; }
namespace Antlr::Runtime { class IIntStream; }
namespace Antlr::Runtime { class RecognitionException; }
namespace Antlr::Runtime { class BitSet; }

#define ANTLR_RUNTIME_PARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C59A0)
#define ANTLR_RUNTIME_PARSER_RESET_OFFSET UNITYSDK_OFFSET(0x4C5AE0)
#define ANTLR_RUNTIME_PARSER_GETCURRENTINPUTSYMBOL_OFFSET UNITYSDK_OFFSET(0x4C5C60)
#define ANTLR_RUNTIME_PARSER_GETMISSINGSYMBOL_OFFSET UNITYSDK_OFFSET(0x4C5D60)
#define ANTLR_RUNTIME_PARSER_SET_TOKENSTREAM_OFFSET UNITYSDK_OFFSET(0x4C61E0)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int Parser_TypeDefinitionIndex = 37391;

	class Parser : public ::UnityEngine::WritableAttribute
	{
	public:
		::Antlr::Runtime::ITokenStream* input; // 0x18

		::System::Void .ctor(::Antlr::Runtime::ITokenStream* arg, ::Antlr::Runtime::RecognizerSharedState* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::ITokenStream*, ::Antlr::Runtime::RecognizerSharedState*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_PARSER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_PARSER_RESET_OFFSET))(nullptr);
		}

		::System::Object* GetCurrentInputSymbol(::Antlr::Runtime::IIntStream* arg)
		{
			return (return (::System::Object*(*)(::Antlr::Runtime::IIntStream*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_PARSER_GETCURRENTINPUTSYMBOL_OFFSET))(arg, nullptr);
		}

		::System::Object* GetMissingSymbol(::Antlr::Runtime::IIntStream* arg, ::Antlr::Runtime::RecognitionException* arg, ::System::Int32 arg, ::Antlr::Runtime::BitSet* arg)
		{
			return (return (::System::Object*(*)(::Antlr::Runtime::IIntStream*, ::Antlr::Runtime::RecognitionException*, ::System::Int32, ::Antlr::Runtime::BitSet*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_PARSER_GETMISSINGSYMBOL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void set_TokenStream(::Antlr::Runtime::ITokenStream* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::ITokenStream*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_PARSER_SET_TOKENSTREAM_OFFSET))(arg, nullptr);
		}

	};
}

