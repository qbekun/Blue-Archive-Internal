#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLASYNCCHECKWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x995CF50)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_CHECKASYNC_OFFSET UNITYSDK_OFFSET(0x995CFD0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x995D060)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x995D0A0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDDOCUMENT_OFFSET UNITYSDK_OFFSET(0x995D0E0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x995D120)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x995D180)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x995D1E0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x995D220)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x995D260)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x995D2C0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x995D300)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x995D340)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x995D380)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x995D3D0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x995D410)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x995D450)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x995D490)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x995D4D0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x995D520)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x995D580)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x995D5E0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x995D620)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x995D680)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x995D6E0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x995D720)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x995D760)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x995D7A0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x995D7E0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x995D820)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITENODE_OFFSET UNITYSDK_OFFSET(0x995D870)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x995D8C0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAsyncCheckWriter_TypeDefinitionIndex = 27671;

	class XmlAsyncCheckWriter : public Il2CppObject
	{
	public:
		::System::Xml::XmlWriter* coreWriter; // 0x18
		::System::Threading::Tasks::Task* lastTask; // 0x20

		::System::Void .ctor(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void CheckAsync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_CHECKASYNC_OFFSET))(nullptr);
		}

		::System::Void WriteStartDocument()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTDOCUMENT_OFFSET))(nullptr);
		}

		::System::Void WriteStartDocument(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTDOCUMENT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteEndDocument()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDDOCUMENT_OFFSET))(nullptr);
		}

		::System::Void WriteDocType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEDOCTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void WriteStartElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteEndElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDELEMENT_OFFSET))(nullptr);
		}

		::System::Void WriteFullEndElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEFULLENDELEMENT_OFFSET))(nullptr);
		}

		::System::Void WriteStartAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteEndAttribute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void WriteCData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECDATA_OFFSET))(str, nullptr);
		}

		::System::Void WriteComment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECOMMENT_OFFSET))(str, nullptr);
		}

		::System::Void WriteProcessingInstruction(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::System::Void WriteEntityRef(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENTITYREF_OFFSET))(str, nullptr);
		}

		::System::Void WriteCharEntity(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECHARENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void WriteString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTRING_OFFSET))(str, nullptr);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESURROGATECHARENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITERAW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITERAW_OFFSET))(str, nullptr);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEBASE64_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEBINHEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::WriteState* get_WriteState()
		{
			return (return (::System::Xml::WriteState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_GET_WRITESTATE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_FLUSH_OFFSET))(nullptr);
		}

		::System::String* LookupPrefix(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_LOOKUPPREFIX_OFFSET))(str, nullptr);
		}

		::System::Void WriteValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEVALUE_OFFSET))(str, nullptr);
		}

		::System::Void WriteAttributes(::System::Xml::XmlReader* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteNode(::System::Xml::XmlReader* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITENODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

