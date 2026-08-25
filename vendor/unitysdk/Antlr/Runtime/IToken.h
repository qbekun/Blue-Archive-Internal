#pragma once
#include "../../unitysdk.h"

#define ANTLR_RUNTIME_ITOKEN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_ITOKEN_GET_LINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_ITOKEN_SET_LINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_ITOKEN_GET_CHARPOSITIONINLINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_ITOKEN_SET_CHARPOSITIONINLINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_ITOKEN_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_ITOKEN_SET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_ITOKEN_GET_TOKENINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_ITOKEN_SET_TOKENINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_ITOKEN_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_ITOKEN_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int IToken_TypeDefinitionIndex = 37415;

	class IToken : public Il2CppObject
	{
	public:
		::System::Int32 get_Type()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ITOKEN_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_Line()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ITOKEN_GET_LINE_OFFSET))(nullptr);
		}

		::System::Void set_Line(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ITOKEN_SET_LINE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CharPositionInLine()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ITOKEN_GET_CHARPOSITIONINLINE_OFFSET))(nullptr);
		}

		::System::Void set_CharPositionInLine(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ITOKEN_SET_CHARPOSITIONINLINE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Channel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ITOKEN_GET_CHANNEL_OFFSET))(nullptr);
		}

		::System::Void set_Channel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ITOKEN_SET_CHANNEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TokenIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ITOKEN_GET_TOKENINDEX_OFFSET))(nullptr);
		}

		::System::Void set_TokenIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ITOKEN_SET_TOKENINDEX_OFFSET))(arg, nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ITOKEN_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_Text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_ITOKEN_SET_TEXT_OFFSET))(str, nullptr);
		}

	};
}

