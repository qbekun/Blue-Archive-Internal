#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class IIntStream; }
namespace Antlr::Runtime { class IToken; }

#define ANTLR_RUNTIME_RECOGNITIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C4680)
#define ANTLR_RUNTIME_RECOGNITIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C68E0)
#define ANTLR_RUNTIME_RECOGNITIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C46D0)
#define ANTLR_RUNTIME_RECOGNITIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C63B0)
#define ANTLR_RUNTIME_RECOGNITIONEXCEPTION_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x4C7280)
#define ANTLR_RUNTIME_RECOGNITIONEXCEPTION_GET_NODE_OFFSET UNITYSDK_OFFSET(0x4C7290)
#define ANTLR_RUNTIME_RECOGNITIONEXCEPTION_GET_CHAR_OFFSET UNITYSDK_OFFSET(0x4C72A0)
#define ANTLR_RUNTIME_RECOGNITIONEXCEPTION_GET_CHARPOSITIONINLINE_OFFSET UNITYSDK_OFFSET(0x4C72B0)
#define ANTLR_RUNTIME_RECOGNITIONEXCEPTION_GET_LINE_OFFSET UNITYSDK_OFFSET(0x4C72C0)
#define ANTLR_RUNTIME_RECOGNITIONEXCEPTION_GET_UNEXPECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x4C72D0)
#define ANTLR_RUNTIME_RECOGNITIONEXCEPTION_EXTRACTINFORMATIONFROMTREENODESTREAM_OFFSET UNITYSDK_OFFSET(0x4C6900)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int RecognitionException_TypeDefinitionIndex = 37393;

	class RecognitionException : public Il2CppObject
	{
	public:
		::Antlr::Runtime::IIntStream* input; // 0x90
		::System::Int32 index; // 0x98
		::Antlr::Runtime::IToken* token; // 0xA0
		::System::Object* node; // 0xA8
		::System::Int32 c; // 0xB0
		::System::Int32 line; // 0xB4
		::System::Int32 charPositionInLine; // 0xB8
		::System::Boolean approximateLineInfo; // 0xBC

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RECOGNITIONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RECOGNITIONEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::Antlr::Runtime::IIntStream* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::IIntStream*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RECOGNITIONEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg, ::Antlr::Runtime::IIntStream* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::Antlr::Runtime::IIntStream*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RECOGNITIONEXCEPTION_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::Antlr::Runtime::IToken* get_Token()
		{
			return (return (::Antlr::Runtime::IToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RECOGNITIONEXCEPTION_GET_TOKEN_OFFSET))(nullptr);
		}

		::System::Object* get_Node()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RECOGNITIONEXCEPTION_GET_NODE_OFFSET))(nullptr);
		}

		::System::Int32 get_Char()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RECOGNITIONEXCEPTION_GET_CHAR_OFFSET))(nullptr);
		}

		::System::Int32 get_CharPositionInLine()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RECOGNITIONEXCEPTION_GET_CHARPOSITIONINLINE_OFFSET))(nullptr);
		}

		::System::Int32 get_Line()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RECOGNITIONEXCEPTION_GET_LINE_OFFSET))(nullptr);
		}

		::System::Int32 get_UnexpectedType()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RECOGNITIONEXCEPTION_GET_UNEXPECTEDTYPE_OFFSET))(nullptr);
		}

		::System::Void ExtractInformationFromTreeNodeStream(::Antlr::Runtime::IIntStream* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::IIntStream*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RECOGNITIONEXCEPTION_EXTRACTINFORMATIONFROMTREENODESTREAM_OFFSET))(arg, nullptr);
		}

	};
}

