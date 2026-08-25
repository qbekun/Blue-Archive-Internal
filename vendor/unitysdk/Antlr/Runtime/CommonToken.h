#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class ICharStream; }

#define ANTLR_RUNTIME_COMMONTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C2FC0)
#define ANTLR_RUNTIME_COMMONTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C2FF0)
#define ANTLR_RUNTIME_COMMONTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C3060)
#define ANTLR_RUNTIME_COMMONTOKEN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x4C30B0)
#define ANTLR_RUNTIME_COMMONTOKEN_GET_LINE_OFFSET UNITYSDK_OFFSET(0x4C30C0)
#define ANTLR_RUNTIME_COMMONTOKEN_SET_LINE_OFFSET UNITYSDK_OFFSET(0x4C30D0)
#define ANTLR_RUNTIME_COMMONTOKEN_GET_CHARPOSITIONINLINE_OFFSET UNITYSDK_OFFSET(0x4C30E0)
#define ANTLR_RUNTIME_COMMONTOKEN_SET_CHARPOSITIONINLINE_OFFSET UNITYSDK_OFFSET(0x4C30F0)
#define ANTLR_RUNTIME_COMMONTOKEN_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x4C3100)
#define ANTLR_RUNTIME_COMMONTOKEN_SET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x4C3110)
#define ANTLR_RUNTIME_COMMONTOKEN_GET_TOKENINDEX_OFFSET UNITYSDK_OFFSET(0x4C3120)
#define ANTLR_RUNTIME_COMMONTOKEN_SET_TOKENINDEX_OFFSET UNITYSDK_OFFSET(0x4C3130)
#define ANTLR_RUNTIME_COMMONTOKEN_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x4C3140)
#define ANTLR_RUNTIME_COMMONTOKEN_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x4C3210)
#define ANTLR_RUNTIME_COMMONTOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4C3220)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int CommonToken_TypeDefinitionIndex = 37379;

	class CommonToken : public Il2CppObject
	{
	public:
		::System::Int32 type; // 0x10
		::System::Int32 line; // 0x14
		::System::Int32 charPositionInLine; // 0x18
		::System::Int32 channel; // 0x1C
		::Antlr::Runtime::ICharStream* input; // 0x20
		::System::String* text; // 0x28
		::System::Int32 index; // 0x30
		::System::Int32 start; // 0x34
		::System::Int32 stop; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKEN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Antlr::Runtime::ICharStream* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Antlr::Runtime::ICharStream*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKEN_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKEN_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 get_Type()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKEN_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_Line()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKEN_GET_LINE_OFFSET))(nullptr);
		}

		::System::Void set_Line(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKEN_SET_LINE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CharPositionInLine()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKEN_GET_CHARPOSITIONINLINE_OFFSET))(nullptr);
		}

		::System::Void set_CharPositionInLine(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKEN_SET_CHARPOSITIONINLINE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Channel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKEN_GET_CHANNEL_OFFSET))(nullptr);
		}

		::System::Void set_Channel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKEN_SET_CHANNEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TokenIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKEN_GET_TOKENINDEX_OFFSET))(nullptr);
		}

		::System::Void set_TokenIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKEN_SET_TOKENINDEX_OFFSET))(arg, nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKEN_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_Text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKEN_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COMMONTOKEN_TOSTRING_OFFSET))(nullptr);
		}

	};
}

