#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLRAWWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x9964FA0)
#define SYSTEM_XML_XMLRAWWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x9965010)
#define SYSTEM_XML_XMLRAWWRITER_WRITEENDDOCUMENT_OFFSET UNITYSDK_OFFSET(0x9965080)
#define SYSTEM_XML_XMLRAWWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x99650F0)
#define SYSTEM_XML_XMLRAWWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x9965100)
#define SYSTEM_XML_XMLRAWWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x9965170)
#define SYSTEM_XML_XMLRAWWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x9963520)
#define SYSTEM_XML_XMLRAWWRITER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x99651E0)
#define SYSTEM_XML_XMLRAWWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x9965250)
#define SYSTEM_XML_XMLRAWWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x99652C0)
#define SYSTEM_XML_XMLRAWWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x99652E0)
#define SYSTEM_XML_XMLRAWWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x9965360)
#define SYSTEM_XML_XMLRAWWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x99653F0)
#define SYSTEM_XML_XMLRAWWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x9965410)
#define SYSTEM_XML_XMLRAWWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x9965450)
#define SYSTEM_XML_XMLRAWWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x9965490)
#define SYSTEM_XML_XMLRAWWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x99654B0)
#define SYSTEM_XML_XMLRAWWRITER_WRITEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x99654D0)
#define SYSTEM_XML_XMLRAWWRITER_WRITENODE_OFFSET UNITYSDK_OFFSET(0x9965540)
#define SYSTEM_XML_XMLRAWWRITER_SET_NAMESPACERESOLVER_OFFSET UNITYSDK_OFFSET(0x99655B0)
#define SYSTEM_XML_XMLRAWWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x99655C0)
#define SYSTEM_XML_XMLRAWWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x99655D0)
#define SYSTEM_XML_XMLRAWWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLRAWWRITER_ONROOTELEMENT_OFFSET UNITYSDK_OFFSET(0x99655E0)
#define SYSTEM_XML_XMLRAWWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLRAWWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x99655F0)
#define SYSTEM_XML_XMLRAWWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLRAWWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x9965610)
#define SYSTEM_XML_XMLRAWWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x9965620)
#define SYSTEM_XML_XMLRAWWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x9965670)
#define SYSTEM_XML_XMLRAWWRITER_WRITEENDBASE64_OFFSET UNITYSDK_OFFSET(0x99656C0)
#define SYSTEM_XML_XMLRAWWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x99656E0)
#define SYSTEM_XML_XMLRAWWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9959290)

namespace System::Xml
{
	inline static constexpr unsigned int XmlRawWriter_TypeDefinitionIndex = 27679;

	class XmlRawWriter : public Il2CppObject
	{
	public:
		::System::Xml::XmlRawWriterBase64Encoder* base64Encoder; // 0x18
		::System::Xml::IXmlNamespaceResolver* resolver; // 0x20

		::System::Void WriteStartDocument()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITESTARTDOCUMENT_OFFSET))(nullptr);
		}

		::System::Void WriteStartDocument(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITESTARTDOCUMENT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteEndDocument()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEENDDOCUMENT_OFFSET))(nullptr);
		}

		::System::Void WriteDocType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEDOCTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void WriteEndElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEENDELEMENT_OFFSET))(nullptr);
		}

		::System::Void WriteFullEndElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEFULLENDELEMENT_OFFSET))(nullptr);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEBASE64_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* LookupPrefix(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_LOOKUPPREFIX_OFFSET))(str, nullptr);
		}

		::System::Xml::WriteState* get_WriteState()
		{
			return (return (::System::Xml::WriteState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_GET_WRITESTATE_OFFSET))(nullptr);
		}

		::System::Void WriteCData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITECDATA_OFFSET))(str, nullptr);
		}

		::System::Void WriteCharEntity(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITECHARENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITESURROGATECHARENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITERAW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITERAW_OFFSET))(str, nullptr);
		}

		::System::Void WriteValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEVALUE_OFFSET))(str, nullptr);
		}

		::System::Void WriteAttributes(::System::Xml::XmlReader* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteNode(::System::Xml::XmlReader* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITENODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* arg)
		{
			((::System::Void(*)(::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_SET_NAMESPACERESOLVER_OFFSET))(arg, nullptr);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone* arg)
		{
			((::System::Void(*)(::System::Xml::XmlStandalone*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEXMLDECLARATION_OFFSET))(arg, nullptr);
		}

		::System::Void WriteXmlDeclaration(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEXMLDECLARATION_OFFSET))(str, nullptr);
		}

		::System::Void StartElementContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_STARTELEMENTCONTENT_OFFSET))(nullptr);
		}

		::System::Void OnRootElement(::System::Xml::ConformanceLevel* arg)
		{
			((::System::Void(*)(::System::Xml::ConformanceLevel*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_ONROOTELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteFullEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEFULLENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITENAMESPACEDECLARATION_OFFSET))(str, str, nullptr);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(nullptr);
		}

		::System::Void WriteStartNamespaceDeclaration(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET))(str, nullptr);
		}

		::System::Void WriteEndNamespaceDeclaration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET))(nullptr);
		}

		::System::Void WriteEndBase64()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEENDBASE64_OFFSET))(nullptr);
		}

		::System::Void Close(::System::Xml::WriteState* arg)
		{
			((::System::Void(*)(::System::Xml::WriteState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_.CTOR_OFFSET))(nullptr);
		}

	};
}

