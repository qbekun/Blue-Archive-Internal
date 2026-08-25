#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98503C0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9850470)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x98504D0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x9850500)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x9850760)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x9850810)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98508E0)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_FLUSHBUFFER_OFFSET UNITYSDK_OFFSET(0x9850990)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_INIT_OFFSET UNITYSDK_OFFSET(0x9850420)
#define SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x9850710)

namespace System::Xml
{
	inline static constexpr unsigned int HtmlEncodedRawTextWriterIndent_TypeDefinitionIndex = 27633;

	class HtmlEncodedRawTextWriterIndent : public Il2CppObject
	{
	public:
		::System::Int32 indentLevel; // 0xF0
		::System::Int32 endBlockPos; // 0xF4
		::System::String* indentChars; // 0xF8
		::System::Boolean newLineOnAttributes; // 0x100

		::System::Void .ctor(::System::IO::TextWriter* arg, ::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteDocType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void WriteStartElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void StartElementContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET))(nullptr);
		}

		::System::Void WriteEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteStartAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::System::Void FlushBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_FLUSHBUFFER_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteIndent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLENCODEDRAWTEXTWRITERINDENT_WRITEINDENT_OFFSET))(nullptr);
		}

	};
}

