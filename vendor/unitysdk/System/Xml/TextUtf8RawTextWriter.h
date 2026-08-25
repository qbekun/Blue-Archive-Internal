#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x995AB20)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x995AB30)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x995AB40)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x995AB50)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x995AB60)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x995AB70)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x995AB80)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x995AB90)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x995ABA0)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x995ABB0)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x995ABC0)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x995ABD0)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x995ABE0)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x995ABF0)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x995AC00)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x995AC10)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x995AC20)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x995AC30)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x995AC40)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x995AC50)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x995AC60)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x995AC80)
#define SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x995ACA0)

namespace System::Xml
{
	inline static constexpr unsigned int TextUtf8RawTextWriter_TypeDefinitionIndex = 27662;

	class TextUtf8RawTextWriter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::IO::Stream* arg, ::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone* arg)
		{
			((::System::Void(*)(::System::Xml::XmlStandalone*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(arg, nullptr);
		}

		::System::Void WriteXmlDeclaration(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(str, nullptr);
		}

		::System::Void WriteDocType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEDOCTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void WriteStartElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITESTARTELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteFullEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void StartElementContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET))(nullptr);
		}

		::System::Void WriteStartAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteEndAttribute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET))(str, str, nullptr);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(nullptr);
		}

		::System::Void WriteCData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITECDATA_OFFSET))(str, nullptr);
		}

		::System::Void WriteComment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITECOMMENT_OFFSET))(str, nullptr);
		}

		::System::Void WriteProcessingInstruction(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::System::Void WriteEntityRef(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEENTITYREF_OFFSET))(str, nullptr);
		}

		::System::Void WriteCharEntity(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITECHARENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void WriteString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITESTRING_OFFSET))(str, nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITERAW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTUTF8RAWTEXTWRITER_WRITERAW_OFFSET))(str, nullptr);
		}

	};
}

