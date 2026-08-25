#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_QUERYOUTPUTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9958F40)
#define SYSTEM_XML_QUERYOUTPUTWRITER_SET_NAMESPACERESOLVER_OFFSET UNITYSDK_OFFSET(0x99592A0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x99592F0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x9959320)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x9959350)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x99593A0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x9959590)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x99595F0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x9959650)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9959680)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99596C0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x99596F0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x9959720)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x9959750)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x9959780)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x99597B0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x99597E0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x9959810)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9959840)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x9959900)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x9959980)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x9959A40)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x9959A70)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x9959AA0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x9959AD0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x9959B90)
#define SYSTEM_XML_QUERYOUTPUTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x9959C10)
#define SYSTEM_XML_QUERYOUTPUTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x9959CC0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_STARTCDATASECTION_OFFSET UNITYSDK_OFFSET(0x99598C0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_ENDCDATASECTION_OFFSET UNITYSDK_OFFSET(0x9959580)

namespace System::Xml
{
	inline static constexpr unsigned int QueryOutputWriter_TypeDefinitionIndex = 27652;

	class QueryOutputWriter : public Il2CppObject
	{
	public:
		::System::Xml::XmlRawWriter* wrapped; // 0x28
		::System::Boolean inCDataSection; // 0x30
		Il2CppObject* lookupCDataElems; // 0x38
		::System::Xml::BitStack* bitsCData; // 0x40
		::System::Xml::XmlQualifiedName* qnameCData; // 0x48
		::System::Boolean outputDocType; // 0x50
		::System::Boolean checkWellFormedDoc; // 0x51
		::System::Boolean hasDocElem; // 0x52
		::System::Boolean inAttr; // 0x53
		::System::String* systemId; // 0x58
		::System::String* publicId; // 0x60
		::System::Int32 depth; // 0x68

		::System::Void .ctor(::System::Xml::XmlRawWriter* arg, ::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::Xml::XmlRawWriter*, ::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* arg)
		{
			((::System::Void(*)(::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_SET_NAMESPACERESOLVER_OFFSET))(arg, nullptr);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone* arg)
		{
			((::System::Void(*)(::System::Xml::XmlStandalone*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEXMLDECLARATION_OFFSET))(arg, nullptr);
		}

		::System::Void WriteXmlDeclaration(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEXMLDECLARATION_OFFSET))(str, nullptr);
		}

		::System::Void WriteDocType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEDOCTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void WriteStartElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteFullEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEFULLENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void StartElementContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_STARTELEMENTCONTENT_OFFSET))(nullptr);
		}

		::System::Void WriteStartAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteEndAttribute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITENAMESPACEDECLARATION_OFFSET))(str, str, nullptr);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(nullptr);
		}

		::System::Void WriteStartNamespaceDeclaration(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET))(str, nullptr);
		}

		::System::Void WriteEndNamespaceDeclaration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET))(nullptr);
		}

		::System::Void WriteCData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITECDATA_OFFSET))(str, nullptr);
		}

		::System::Void WriteComment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITECOMMENT_OFFSET))(str, nullptr);
		}

		::System::Void WriteProcessingInstruction(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::System::Void WriteWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void WriteString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTRING_OFFSET))(str, nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteEntityRef(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENTITYREF_OFFSET))(str, nullptr);
		}

		::System::Void WriteCharEntity(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITECHARENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITESURROGATECHARENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITERAW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITERAW_OFFSET))(str, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_FLUSH_OFFSET))(nullptr);
		}

		::System::Boolean StartCDataSection()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_STARTCDATASECTION_OFFSET))(nullptr);
		}

		::System::Void EndCDataSection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_ENDCDATASECTION_OFFSET))(nullptr);
		}

	};
}

