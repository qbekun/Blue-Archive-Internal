#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9974FB0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x9975100)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x99751E0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x9975250)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_ONROOTELEMENT_OFFSET UNITYSDK_OFFSET(0x99752C0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x99752D0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x9975340)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99753B0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x99753F0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x9975400)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x9975440)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x9975480)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x9975490)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x99754A0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x99754B0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x9975510)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x9975570)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITERAW_OFFSET UNITYSDK_OFFSET(0x99755D0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITERAW_OFFSET UNITYSDK_OFFSET(0x9975630)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x9975680)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_INIT_OFFSET UNITYSDK_OFFSET(0x9974FE0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x9975160)

namespace System::Xml
{
	inline static constexpr unsigned int XmlUtf8RawTextWriterIndent_TypeDefinitionIndex = 27709;

	class XmlUtf8RawTextWriterIndent : public Il2CppObject
	{
	public:
		::System::Int32 indentLevel; // 0x90
		::System::Boolean newLineOnAttributes; // 0x94
		::System::String* indentChars; // 0x98
		::System::Boolean mixedContent; // 0xA0
		::System::Xml::BitStack* mixedContentStack; // 0xA8
		::System::Xml::ConformanceLevel* conformanceLevel; // 0xB0

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteDocType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEDOCTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void WriteStartElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESTARTELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void StartElementContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_STARTELEMENTCONTENT_OFFSET))(nullptr);
		}

		::System::Void OnRootElement(::System::Xml::ConformanceLevel* arg)
		{
			((::System::Void(*)(::System::Xml::ConformanceLevel*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_ONROOTELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteFullEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEFULLENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteStartAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESTARTATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteCData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECDATA_OFFSET))(str, nullptr);
		}

		::System::Void WriteComment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECOMMENT_OFFSET))(str, nullptr);
		}

		::System::Void WriteProcessingInstruction(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::System::Void WriteEntityRef(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEENTITYREF_OFFSET))(str, nullptr);
		}

		::System::Void WriteCharEntity(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECHARENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESURROGATECHARENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void WriteString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITESTRING_OFFSET))(str, nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITERAW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITERAW_OFFSET))(str, nullptr);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEBASE64_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteIndent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITERINDENT_WRITEINDENT_OFFSET))(nullptr);
		}

	};
}

