#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9958750)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x9958800)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x9958830)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x9958BA0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x9958C40)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9958D20)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_FLUSHBUFFER_OFFSET UNITYSDK_OFFSET(0x9958DC0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_INIT_OFFSET UNITYSDK_OFFSET(0x99587B0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x9958B60)

namespace System::Xml
{
	inline static constexpr unsigned int HtmlUtf8RawTextWriterIndent_TypeDefinitionIndex = 27636;

	class HtmlUtf8RawTextWriterIndent : public Il2CppObject
	{
	public:
		::System::Int32 indentLevel; // 0xC0
		::System::Int32 endBlockPos; // 0xC4
		::System::String* indentChars; // 0xC8
		::System::Boolean newLineOnAttributes; // 0xD0

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteDocType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void WriteStartElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void StartElementContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET))(nullptr);
		}

		::System::Void WriteEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteStartAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::System::Void FlushBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_FLUSHBUFFER_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteIndent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITERINDENT_WRITEINDENT_OFFSET))(nullptr);
		}

	};
}

