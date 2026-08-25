#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLAUTODETECTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x995D8F0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x995DA10)
#define SYSTEM_XML_XMLAUTODETECTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x995DA40)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x995DA70)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x995DAF0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x995DE00)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x995DE60)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x995DE90)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x995DF70)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x995DFB0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x995DFF0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x995E030)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x995E0B0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x995E0F0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x995E130)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x995E1B0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x995E200)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x995E250)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x995E2B0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x995E310)
#define SYSTEM_XML_XMLAUTODETECTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x995E370)
#define SYSTEM_XML_XMLAUTODETECTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x995E3C0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x995E410)
#define SYSTEM_XML_XMLAUTODETECTWRITER_SET_NAMESPACERESOLVER_OFFSET UNITYSDK_OFFSET(0x995E460)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x995E4B0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x995E500)
#define SYSTEM_XML_XMLAUTODETECTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x995E550)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x995E580)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x995E5B0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x995E5E0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x995E640)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x995E670)
#define SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x995E6C0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_ISHTMLTAG_OFFSET UNITYSDK_OFFSET(0x995DB80)
#define SYSTEM_XML_XMLAUTODETECTWRITER_ENSUREWRAPPEDWRITER_OFFSET UNITYSDK_OFFSET(0x995DAE0)
#define SYSTEM_XML_XMLAUTODETECTWRITER_TEXTBLOCKCREATESWRITER_OFFSET UNITYSDK_OFFSET(0x995DF10)
#define SYSTEM_XML_XMLAUTODETECTWRITER_CREATEWRAPPEDWRITER_OFFSET UNITYSDK_OFFSET(0x995DC70)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAutoDetectWriter_TypeDefinitionIndex = 27672;

	class XmlAutoDetectWriter : public Il2CppObject
	{
	public:
		::System::Xml::XmlRawWriter* wrapped; // 0x28
		::System::Xml::OnRemoveWriter* onRemove; // 0x30
		::System::Xml::XmlWriterSettings* writerSettings; // 0x38
		::System::Xml::XmlEventCache* eventCache; // 0x40
		::System::IO::TextWriter* textWriter; // 0x48
		::System::IO::Stream* strm; // 0x50

		::System::Void .ctor(::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::TextWriter* arg, ::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteDocType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEDOCTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void WriteStartElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteStartAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteEndAttribute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void WriteCData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITECDATA_OFFSET))(str, nullptr);
		}

		::System::Void WriteComment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITECOMMENT_OFFSET))(str, nullptr);
		}

		::System::Void WriteProcessingInstruction(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::System::Void WriteWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void WriteString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTRING_OFFSET))(str, nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITERAW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITERAW_OFFSET))(str, nullptr);
		}

		::System::Void WriteEntityRef(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENTITYREF_OFFSET))(str, nullptr);
		}

		::System::Void WriteCharEntity(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITECHARENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITESURROGATECHARENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEBASE64_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEBINHEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_FLUSH_OFFSET))(nullptr);
		}

		::System::Void WriteValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEVALUE_OFFSET))(str, nullptr);
		}

		::System::Void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* arg)
		{
			((::System::Void(*)(::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_SET_NAMESPACERESOLVER_OFFSET))(arg, nullptr);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone* arg)
		{
			((::System::Void(*)(::System::Xml::XmlStandalone*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEXMLDECLARATION_OFFSET))(arg, nullptr);
		}

		::System::Void WriteXmlDeclaration(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEXMLDECLARATION_OFFSET))(str, nullptr);
		}

		::System::Void StartElementContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_STARTELEMENTCONTENT_OFFSET))(nullptr);
		}

		::System::Void WriteEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteFullEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEFULLENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITENAMESPACEDECLARATION_OFFSET))(str, str, nullptr);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(nullptr);
		}

		::System::Void WriteStartNamespaceDeclaration(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET))(str, nullptr);
		}

		::System::Void WriteEndNamespaceDeclaration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET))(nullptr);
		}

		::System::Boolean IsHtmlTag(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_ISHTMLTAG_OFFSET))(str, nullptr);
		}

		::System::Void EnsureWrappedWriter(::System::Xml::XmlOutputMethod* arg)
		{
			((::System::Void(*)(::System::Xml::XmlOutputMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_ENSUREWRAPPEDWRITER_OFFSET))(arg, nullptr);
		}

		::System::Boolean TextBlockCreatesWriter(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_TEXTBLOCKCREATESWRITER_OFFSET))(str, nullptr);
		}

		::System::Void CreateWrappedWriter(::System::Xml::XmlOutputMethod* arg)
		{
			((::System::Void(*)(::System::Xml::XmlOutputMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLAUTODETECTWRITER_CREATEWRAPPEDWRITER_OFFSET))(arg, nullptr);
		}

	};
}

