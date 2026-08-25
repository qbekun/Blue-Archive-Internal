#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITEENDDOCUMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x99807B0)
#define SYSTEM_XML_XMLWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_OFFSET UNITYSDK_OFFSET(0x99807E0)
#define SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_OFFSET UNITYSDK_OFFSET(0x9980840)
#define SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_OFFSET UNITYSDK_OFFSET(0x99808A0)
#define SYSTEM_XML_XMLWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x9980900)
#define SYSTEM_XML_XMLWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x9980930)
#define SYSTEM_XML_XMLWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9980940)
#define SYSTEM_XML_XMLWRITER_WRITEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9980960)
#define SYSTEM_XML_XMLWRITER_WRITENODE_OFFSET UNITYSDK_OFFSET(0x9980C20)
#define SYSTEM_XML_XMLWRITER_WRITEELEMENTSTRING_OFFSET UNITYSDK_OFFSET(0x99810E0)
#define SYSTEM_XML_XMLWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9981150)
#define SYSTEM_XML_XMLWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9981170)
#define SYSTEM_XML_XMLWRITER_CREATE_OFFSET UNITYSDK_OFFSET(0x99811C0)
#define SYSTEM_XML_XMLWRITER_CREATE_OFFSET UNITYSDK_OFFSET(0x99817F0)
#define SYSTEM_XML_XMLWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9981BD0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWriter_TypeDefinitionIndex = 27728;

	class XmlWriter : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* writeNodeBuffer; // 0x10

		::System::Void WriteStartDocument()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITESTARTDOCUMENT_OFFSET))(nullptr);
		}

		::System::Void WriteStartDocument(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITESTARTDOCUMENT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteEndDocument()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEENDDOCUMENT_OFFSET))(nullptr);
		}

		::System::Void WriteDocType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEDOCTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void WriteStartElement(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITESTARTELEMENT_OFFSET))(str, str, nullptr);
		}

		::System::Void WriteStartElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITESTARTELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteEndElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEENDELEMENT_OFFSET))(nullptr);
		}

		::System::Void WriteFullEndElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEFULLENDELEMENT_OFFSET))(nullptr);
		}

		::System::Void WriteAttributeString(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteAttributeString(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_OFFSET))(str, str, nullptr);
		}

		::System::Void WriteAttributeString(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void WriteStartAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITESTARTATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteEndAttribute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEENDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void WriteCData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITECDATA_OFFSET))(str, nullptr);
		}

		::System::Void WriteComment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITECOMMENT_OFFSET))(str, nullptr);
		}

		::System::Void WriteProcessingInstruction(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::System::Void WriteEntityRef(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEENTITYREF_OFFSET))(str, nullptr);
		}

		::System::Void WriteCharEntity(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITECHARENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void WriteString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITESTRING_OFFSET))(str, nullptr);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITESURROGATECHARENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITERAW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITERAW_OFFSET))(str, nullptr);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEBASE64_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEBINHEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::WriteState* get_WriteState()
		{
			return (return (::System::Xml::WriteState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_GET_WRITESTATE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_FLUSH_OFFSET))(nullptr);
		}

		::System::String* LookupPrefix(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_LOOKUPPREFIX_OFFSET))(str, nullptr);
		}

		::System::Void WriteValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEVALUE_OFFSET))(str, nullptr);
		}

		::System::Void WriteAttributes(::System::Xml::XmlReader* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteNode(::System::Xml::XmlReader* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITENODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteElementString(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEELEMENTSTRING_OFFSET))(str, str, str, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlWriter* Create(::System::IO::Stream* arg, ::System::Xml::XmlWriterSettings* arg)
		{
			return (return (::System::Xml::XmlWriter*(*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XmlWriter* Create(::System::IO::TextWriter* arg, ::System::Xml::XmlWriterSettings* arg)
		{
			return (return (::System::Xml::XmlWriter*(*)(::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_.CTOR_OFFSET))(nullptr);
		}

	};
}

