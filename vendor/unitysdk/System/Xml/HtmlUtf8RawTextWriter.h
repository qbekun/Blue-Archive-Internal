#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9850AA0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x9850D10)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x9850D20)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x9850D30)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x9850F10)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x9851010)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x9851160)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x9851250)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9851340)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9851480)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x9851580)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x9851670)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x9851790)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x9851800)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x9851870)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x98518E0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_INIT_OFFSET UNITYSDK_OFFSET(0x9850AD0)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEMETAELEMENT_OFFSET UNITYSDK_OFFSET(0x9851060)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEHTMLELEMENTTEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x9851770)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEHTMLATTRIBUTETEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x9851730)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEHTMLATTRIBUTETEXT_OFFSET UNITYSDK_OFFSET(0x9851C70)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEURIATTRIBUTETEXT_OFFSET UNITYSDK_OFFSET(0x9851940)
#define SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_OUTPUTRESTAMPS_OFFSET UNITYSDK_OFFSET(0x98514F0)

namespace System::Xml
{
	inline static constexpr unsigned int HtmlUtf8RawTextWriter_TypeDefinitionIndex = 27635;

	class HtmlUtf8RawTextWriter : public Il2CppObject
	{
	public:
		::System::Xml::ByteStack* elementScope; // 0x90
		::System::Xml::ElementProperties* currentElementProperties; // 0x98
		::System::Xml::AttributeProperties* currentAttributeProperties; // 0x9C
		::System::Boolean endsWithAmpersand; // 0xA0
		::Il2CppArray<::System::Object*>* uriEscapingBuffer; // 0xA8
		::System::String* mediaType; // 0xB0
		::System::Boolean doNotEscapeUriAttributes; // 0xB8
		::System::Xml::TernaryTreeReadOnly* elementPropertySearch; // 0x0
		::System::Xml::TernaryTreeReadOnly* attributePropertySearch; // 0x8

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone* arg)
		{
			((::System::Void(*)(::System::Xml::XmlStandalone*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(arg, nullptr);
		}

		::System::Void WriteXmlDeclaration(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(str, nullptr);
		}

		::System::Void WriteDocType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEDOCTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void WriteStartElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESTARTELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void StartElementContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET))(nullptr);
		}

		::System::Void WriteEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteFullEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteStartAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteEndAttribute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void WriteProcessingInstruction(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::System::Void WriteString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESTRING_OFFSET))(str, nullptr);
		}

		::System::Void WriteEntityRef(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEENTITYREF_OFFSET))(str, nullptr);
		}

		::System::Void WriteCharEntity(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITECHARENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteMetaElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEMETAELEMENT_OFFSET))(nullptr);
		}

		::System::Void WriteHtmlElementTextBlock(::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEHTMLELEMENTTEXTBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteHtmlAttributeTextBlock(::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEHTMLATTRIBUTETEXTBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteHtmlAttributeText(::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEHTMLATTRIBUTETEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteUriAttributeText(::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_WRITEURIATTRIBUTETEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OutputRestAmps()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLUTF8RAWTEXTWRITER_OUTPUTRESTAMPS_OFFSET))(nullptr);
		}

	};
}

