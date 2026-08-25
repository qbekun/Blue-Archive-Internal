#pragma once
#include "../../unitysdk.h"

#define MONO_XML_SMALLXMLPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91219E0)
#define MONO_XML_SMALLXMLPARSER_ERROR_OFFSET UNITYSDK_OFFSET(0x9122290)
#define MONO_XML_SMALLXMLPARSER_UNEXPECTEDENDERROR_OFFSET UNITYSDK_OFFSET(0x91223B0)
#define MONO_XML_SMALLXMLPARSER_ISNAMECHAR_OFFSET UNITYSDK_OFFSET(0x91224C0)
#define MONO_XML_SMALLXMLPARSER_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x91225C0)
#define MONO_XML_SMALLXMLPARSER_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x91225E0)
#define MONO_XML_SMALLXMLPARSER_HANDLEWHITESPACES_OFFSET UNITYSDK_OFFSET(0x91226D0)
#define MONO_XML_SMALLXMLPARSER_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x91225F0)
#define MONO_XML_SMALLXMLPARSER_PEEK_OFFSET UNITYSDK_OFFSET(0x9122860)
#define MONO_XML_SMALLXMLPARSER_READ_OFFSET UNITYSDK_OFFSET(0x91227F0)
#define MONO_XML_SMALLXMLPARSER_EXPECT_OFFSET UNITYSDK_OFFSET(0x9122890)
#define MONO_XML_SMALLXMLPARSER_READUNTIL_OFFSET UNITYSDK_OFFSET(0x91229A0)
#define MONO_XML_SMALLXMLPARSER_READNAME_OFFSET UNITYSDK_OFFSET(0x9122CF0)
#define MONO_XML_SMALLXMLPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x9121BD0)
#define MONO_XML_SMALLXMLPARSER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x9123980)
#define MONO_XML_SMALLXMLPARSER_READCONTENT_OFFSET UNITYSDK_OFFSET(0x9122F20)
#define MONO_XML_SMALLXMLPARSER_HANDLEBUFFEREDCONTENT_OFFSET UNITYSDK_OFFSET(0x91237F0)
#define MONO_XML_SMALLXMLPARSER_READCHARACTERS_OFFSET UNITYSDK_OFFSET(0x9123FB0)
#define MONO_XML_SMALLXMLPARSER_READREFERENCE_OFFSET UNITYSDK_OFFSET(0x9122B00)
#define MONO_XML_SMALLXMLPARSER_READCHARACTERREFERENCE_OFFSET UNITYSDK_OFFSET(0x91240F0)
#define MONO_XML_SMALLXMLPARSER_READATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9123DF0)
#define MONO_XML_SMALLXMLPARSER_READCDATASECTION_OFFSET UNITYSDK_OFFSET(0x9123AC0)
#define MONO_XML_SMALLXMLPARSER_READCOMMENT_OFFSET UNITYSDK_OFFSET(0x9123C30)

namespace Mono::Xml
{
	inline static constexpr unsigned int SmallXmlParser_TypeDefinitionIndex = 23596;

	class SmallXmlParser : public Il2CppObject
	{
	public:
		IContentHandler* handler; // 0x10
		::System::IO::TextReader* reader; // 0x18
		::System::Collections::Stack* elementNames; // 0x20
		::System::Collections::Stack* xmlSpaces; // 0x28
		::System::String* xmlSpace; // 0x30
		::System::Text::StringBuilder* buffer; // 0x38
		::Il2CppArray<::System::Object*>* nameBuffer; // 0x40
		::System::Boolean isWhitespace; // 0x48
		AttrListImpl* attributes; // 0x50
		::System::Int32 line; // 0x58
		::System::Int32 column; // 0x5C
		::System::Boolean resetColumn; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_.CTOR_OFFSET))(nullptr);
		}

		::System::Exception* Error(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ERROR_OFFSET))(str, nullptr);
		}

		::System::Exception* UnexpectedEndError()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_UNEXPECTEDENDERROR_OFFSET))(nullptr);
		}

		::System::Boolean IsNameChar(::System::Char arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ISNAMECHAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsWhitespace(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ISWHITESPACE_OFFSET))(arg, nullptr);
		}

		::System::Void SkipWhitespaces()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_SKIPWHITESPACES_OFFSET))(nullptr);
		}

		::System::Void HandleWhitespaces()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_HANDLEWHITESPACES_OFFSET))(nullptr);
		}

		::System::Void SkipWhitespaces(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_SKIPWHITESPACES_OFFSET))(arg, nullptr);
		}

		::System::Int32 Peek()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_PEEK_OFFSET))(nullptr);
		}

		::System::Int32 Read()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READ_OFFSET))(nullptr);
		}

		::System::Void Expect(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_EXPECT_OFFSET))(arg, nullptr);
		}

		::System::String* ReadUntil(::System::Char arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Char, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READUNTIL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ReadName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READNAME_OFFSET))(nullptr);
		}

		::System::Void Parse(::System::IO::TextReader* arg, IContentHandler* arg)
		{
			((::System::Void(*)(::System::IO::TextReader*, IContentHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_PARSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void ReadContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READCONTENT_OFFSET))(nullptr);
		}

		::System::Void HandleBufferedContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_HANDLEBUFFEREDCONTENT_OFFSET))(nullptr);
		}

		::System::Void ReadCharacters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void ReadReference()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READREFERENCE_OFFSET))(nullptr);
		}

		::System::Int32 ReadCharacterReference()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READCHARACTERREFERENCE_OFFSET))(nullptr);
		}

		::System::Void ReadAttribute(AttrListImpl* arg)
		{
			((::System::Void(*)(AttrListImpl*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void ReadCDATASection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READCDATASECTION_OFFSET))(nullptr);
		}

		::System::Void ReadComment()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_READCOMMENT_OFFSET))(nullptr);
		}

	};
}

