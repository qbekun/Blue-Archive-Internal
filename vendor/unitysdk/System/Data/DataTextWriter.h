#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATATEXTWRITER_CREATEWRITER_OFFSET UNITYSDK_OFFSET(0x97A6AD0)
#define SYSTEM_DATA_DATATEXTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x97ABF60)
#define SYSTEM_DATA_DATATEXTWRITER_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x97A3300)
#define SYSTEM_DATA_DATATEXTWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x97ABF90)
#define SYSTEM_DATA_DATATEXTWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x97ABFC0)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEENDDOCUMENT_OFFSET UNITYSDK_OFFSET(0x97ABFF0)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x97AC020)
#define SYSTEM_DATA_DATATEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x97AC060)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x97AC090)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x97AC0C0)
#define SYSTEM_DATA_DATATEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x97AC0F0)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x97AC120)
#define SYSTEM_DATA_DATATEXTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x97AC150)
#define SYSTEM_DATA_DATATEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x97AC180)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x97AC1B0)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x97AC1E0)
#define SYSTEM_DATA_DATATEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x97AC210)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x97AC240)
#define SYSTEM_DATA_DATATEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x97AC270)
#define SYSTEM_DATA_DATATEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x97AC2A0)
#define SYSTEM_DATA_DATATEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x97AC2D0)
#define SYSTEM_DATA_DATATEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x97AC300)
#define SYSTEM_DATA_DATATEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x97AC330)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x97AC360)
#define SYSTEM_DATA_DATATEXTWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x97AC390)
#define SYSTEM_DATA_DATATEXTWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x97AC3C0)
#define SYSTEM_DATA_DATATEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x97AC3F0)
#define SYSTEM_DATA_DATATEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x97AC420)
#define SYSTEM_DATA_DATATEXTWRITER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x97AC450)

namespace System::Data
{
	inline static constexpr unsigned int DataTextWriter_TypeDefinitionIndex = 32321;

	class DataTextWriter : public Il2CppObject
	{
	public:
		::System::Xml::XmlWriter* _xmltextWriter; // 0x18

		::System::Xml::XmlWriter* CreateWriter(::System::Xml::XmlWriter* arg)
		{
			return (return (::System::Xml::XmlWriter*(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_CREATEWRITER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_GET_BASESTREAM_OFFSET))(nullptr);
		}

		::System::Void WriteStartDocument()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITESTARTDOCUMENT_OFFSET))(nullptr);
		}

		::System::Void WriteStartDocument(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITESTARTDOCUMENT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteEndDocument()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEENDDOCUMENT_OFFSET))(nullptr);
		}

		::System::Void WriteDocType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEDOCTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void WriteStartElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITESTARTELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteEndElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEENDELEMENT_OFFSET))(nullptr);
		}

		::System::Void WriteFullEndElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(nullptr);
		}

		::System::Void WriteStartAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteEndAttribute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void WriteCData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITECDATA_OFFSET))(str, nullptr);
		}

		::System::Void WriteComment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITECOMMENT_OFFSET))(str, nullptr);
		}

		::System::Void WriteProcessingInstruction(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::System::Void WriteEntityRef(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEENTITYREF_OFFSET))(str, nullptr);
		}

		::System::Void WriteCharEntity(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITECHARENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void WriteString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITESTRING_OFFSET))(str, nullptr);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITERAW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITERAW_OFFSET))(str, nullptr);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEBASE64_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_WRITEBINHEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::WriteState* get_WriteState()
		{
			return (return (::System::Xml::WriteState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_GET_WRITESTATE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_FLUSH_OFFSET))(nullptr);
		}

		::System::String* LookupPrefix(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTWRITER_LOOKUPPREFIX_OFFSET))(str, nullptr);
		}

	};
}

