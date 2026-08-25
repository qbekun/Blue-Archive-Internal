#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x995A3B0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x995A4B0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x995A800)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x995A810)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x995A820)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x995A830)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x995A840)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x995A850)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x995A860)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x995A870)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x995A880)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x995A890)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x995A8A0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x995A8B0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x995A980)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x995A990)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x995A9A0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x995A9B0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x995A9C0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x995A9D0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x995A9E0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x995A9F0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x995AAF0)
#define SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x995AB10)

namespace System::Xml
{
	inline static constexpr unsigned int TextEncodedRawTextWriter_TypeDefinitionIndex = 27661;

	class TextEncodedRawTextWriter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::IO::TextWriter* arg, ::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Xml::XmlWriterSettings* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone* arg)
		{
			((::System::Void(*)(::System::Xml::XmlStandalone*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(arg, nullptr);
		}

		::System::Void WriteXmlDeclaration(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(str, nullptr);
		}

		::System::Void WriteDocType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void WriteStartElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteFullEndElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void StartElementContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET))(nullptr);
		}

		::System::Void WriteStartAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::System::Void WriteEndAttribute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET))(str, str, nullptr);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(nullptr);
		}

		::System::Void WriteCData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECDATA_OFFSET))(str, nullptr);
		}

		::System::Void WriteComment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECOMMENT_OFFSET))(str, nullptr);
		}

		::System::Void WriteProcessingInstruction(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::System::Void WriteEntityRef(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET))(str, nullptr);
		}

		::System::Void WriteCharEntity(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void WriteString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET))(str, nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITERAW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_TEXTENCODEDRAWTEXTWRITER_WRITERAW_OFFSET))(str, nullptr);
		}

	};
}

