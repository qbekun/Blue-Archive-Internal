#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLREADERSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x995B890)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_ASYNC_OFFSET UNITYSDK_OFFSET(0x9967A80)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_ASYNC_OFFSET UNITYSDK_OFFSET(0x995B8B0)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x9967B50)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x9967B60)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_ISXMLRESOLVERSET_OFFSET UNITYSDK_OFFSET(0x9967BB0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_ISXMLRESOLVERSET_OFFSET UNITYSDK_OFFSET(0x9967BC0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x9967BD0)
#define SYSTEM_XML_XMLREADERSETTINGS_GETXMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x9967C30)
#define SYSTEM_XML_XMLREADERSETTINGS_GETXMLRESOLVER_CHECKCONFIG_OFFSET UNITYSDK_OFFSET(0x9967C40)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_LINENUMBEROFFSET_OFFSET UNITYSDK_OFFSET(0x9967C70)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_LINENUMBEROFFSET_OFFSET UNITYSDK_OFFSET(0x9967C80)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_LINEPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x9967CC0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_LINEPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x9967CD0)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_CONFORMANCELEVEL_OFFSET UNITYSDK_OFFSET(0x9967D10)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_CONFORMANCELEVEL_OFFSET UNITYSDK_OFFSET(0x9967D20)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_CHECKCHARACTERS_OFFSET UNITYSDK_OFFSET(0x9967DC0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_CHECKCHARACTERS_OFFSET UNITYSDK_OFFSET(0x9967DD0)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_MAXCHARACTERSINDOCUMENT_OFFSET UNITYSDK_OFFSET(0x9967E10)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_MAXCHARACTERSINDOCUMENT_OFFSET UNITYSDK_OFFSET(0x9967E20)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_MAXCHARACTERSFROMENTITIES_OFFSET UNITYSDK_OFFSET(0x9967EC0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_MAXCHARACTERSFROMENTITIES_OFFSET UNITYSDK_OFFSET(0x9967ED0)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_IGNOREWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9967F70)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_IGNOREWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9967F80)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_IGNOREPROCESSINGINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x9967FC0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_IGNOREPROCESSINGINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x9967FD0)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_IGNORECOMMENTS_OFFSET UNITYSDK_OFFSET(0x9968010)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_IGNORECOMMENTS_OFFSET UNITYSDK_OFFSET(0x9968020)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_DTDPROCESSING_OFFSET UNITYSDK_OFFSET(0x9968060)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_DTDPROCESSING_OFFSET UNITYSDK_OFFSET(0x9968070)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_CLOSEINPUT_OFFSET UNITYSDK_OFFSET(0x9968110)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_CLOSEINPUT_OFFSET UNITYSDK_OFFSET(0x9968120)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_VALIDATIONTYPE_OFFSET UNITYSDK_OFFSET(0x9968160)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_VALIDATIONTYPE_OFFSET UNITYSDK_OFFSET(0x9968170)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_VALIDATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x9968210)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_VALIDATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x9968220)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_SCHEMAS_OFFSET UNITYSDK_OFFSET(0x99682C0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_SCHEMAS_OFFSET UNITYSDK_OFFSET(0x9968330)
#define SYSTEM_XML_XMLREADERSETTINGS_CLONE_OFFSET UNITYSDK_OFFSET(0x995B830)
#define SYSTEM_XML_XMLREADERSETTINGS_GETEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x9968380)
#define SYSTEM_XML_XMLREADERSETTINGS_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x9967120)
#define SYSTEM_XML_XMLREADERSETTINGS_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x9967340)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_READONLY_OFFSET UNITYSDK_OFFSET(0x9968390)
#define SYSTEM_XML_XMLREADERSETTINGS_CHECKREADONLY_OFFSET UNITYSDK_OFFSET(0x9967A90)
#define SYSTEM_XML_XMLREADERSETTINGS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9967A70)
#define SYSTEM_XML_XMLREADERSETTINGS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x99683A0)
#define SYSTEM_XML_XMLREADERSETTINGS_CREATEDEFAULTRESOLVER_OFFSET UNITYSDK_OFFSET(0x99685B0)
#define SYSTEM_XML_XMLREADERSETTINGS_ADDVALIDATION_OFFSET UNITYSDK_OFFSET(0x99678B0)
#define SYSTEM_XML_XMLREADERSETTINGS_CREATEDTDVALIDATINGREADER_OFFSET UNITYSDK_OFFSET(0x9968600)
#define SYSTEM_XML_XMLREADERSETTINGS_ENABLELEGACYXMLSETTINGS_OFFSET UNITYSDK_OFFSET(0x99684B0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlReaderSettings_TypeDefinitionIndex = 27681;

	class XmlReaderSettings : public Il2CppObject
	{
	public:
		::System::Boolean useAsync; // 0x10
		::System::Xml::XmlNameTable* nameTable; // 0x18
		::System::Xml::XmlResolver* xmlResolver; // 0x20
		::System::Int32 lineNumberOffset; // 0x28
		::System::Int32 linePositionOffset; // 0x2C
		::System::Xml::ConformanceLevel* conformanceLevel; // 0x30
		::System::Boolean checkCharacters; // 0x34
		::System::Int64 maxCharactersInDocument; // 0x38
		::System::Int64 maxCharactersFromEntities; // 0x40
		::System::Boolean ignoreWhitespace; // 0x48
		::System::Boolean ignorePIs; // 0x49
		::System::Boolean ignoreComments; // 0x4A
		::System::Xml::DtdProcessing* dtdProcessing; // 0x4C
		::System::Xml::ValidationType* validationType; // 0x50
		::System::Xml::Schema::XmlSchemaValidationFlags* validationFlags; // 0x54
		::System::Xml::Schema::XmlSchemaSet* schemas; // 0x58
		::System::Xml::Schema::ValidationEventHandler* valEventHandler; // 0x60
		::System::Boolean closeInput; // 0x68
		::System::Boolean isReadOnly; // 0x69
		::System::Boolean _IsXmlResolverSet_k__BackingField; // 0x6A
		Il2CppObject* s_enableLegacyXmlSettings; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_Async()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_ASYNC_OFFSET))(nullptr);
		}

		::System::Void set_Async(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_ASYNC_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return (return (::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_NAMETABLE_OFFSET))(nullptr);
		}

		::System::Void set_NameTable(::System::Xml::XmlNameTable* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_NAMETABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsXmlResolverSet()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_ISXMLRESOLVERSET_OFFSET))(nullptr);
		}

		::System::Void set_IsXmlResolverSet(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_ISXMLRESOLVERSET_OFFSET))(arg, nullptr);
		}

		::System::Void set_XmlResolver(::System::Xml::XmlResolver* arg)
		{
			((::System::Void(*)(::System::Xml::XmlResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_XMLRESOLVER_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlResolver* GetXmlResolver()
		{
			return (return (::System::Xml::XmlResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GETXMLRESOLVER_OFFSET))(nullptr);
		}

		::System::Xml::XmlResolver* GetXmlResolver_CheckConfig()
		{
			return (return (::System::Xml::XmlResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GETXMLRESOLVER_CHECKCONFIG_OFFSET))(nullptr);
		}

		::System::Int32 get_LineNumberOffset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_LINENUMBEROFFSET_OFFSET))(nullptr);
		}

		::System::Void set_LineNumberOffset(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_LINENUMBEROFFSET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LinePositionOffset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_LINEPOSITIONOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_LinePositionOffset(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_LINEPOSITIONOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Xml::ConformanceLevel* get_ConformanceLevel()
		{
			return (return (::System::Xml::ConformanceLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_CONFORMANCELEVEL_OFFSET))(nullptr);
		}

		::System::Void set_ConformanceLevel(::System::Xml::ConformanceLevel* arg)
		{
			((::System::Void(*)(::System::Xml::ConformanceLevel*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_CONFORMANCELEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CheckCharacters()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_CHECKCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void set_CheckCharacters(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_CHECKCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxCharactersInDocument()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_MAXCHARACTERSINDOCUMENT_OFFSET))(nullptr);
		}

		::System::Void set_MaxCharactersInDocument(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_MAXCHARACTERSINDOCUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxCharactersFromEntities()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_MAXCHARACTERSFROMENTITIES_OFFSET))(nullptr);
		}

		::System::Void set_MaxCharactersFromEntities(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_MAXCHARACTERSFROMENTITIES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreWhitespace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_IGNOREWHITESPACE_OFFSET))(nullptr);
		}

		::System::Void set_IgnoreWhitespace(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_IGNOREWHITESPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreProcessingInstructions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_IGNOREPROCESSINGINSTRUCTIONS_OFFSET))(nullptr);
		}

		::System::Void set_IgnoreProcessingInstructions(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_IGNOREPROCESSINGINSTRUCTIONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreComments()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_IGNORECOMMENTS_OFFSET))(nullptr);
		}

		::System::Void set_IgnoreComments(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_IGNORECOMMENTS_OFFSET))(arg, nullptr);
		}

		::System::Xml::DtdProcessing* get_DtdProcessing()
		{
			return (return (::System::Xml::DtdProcessing*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_DTDPROCESSING_OFFSET))(nullptr);
		}

		::System::Void set_DtdProcessing(::System::Xml::DtdProcessing* arg)
		{
			((::System::Void(*)(::System::Xml::DtdProcessing*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_DTDPROCESSING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CloseInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_CLOSEINPUT_OFFSET))(nullptr);
		}

		::System::Void set_CloseInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_CLOSEINPUT_OFFSET))(arg, nullptr);
		}

		::System::Xml::ValidationType* get_ValidationType()
		{
			return (return (::System::Xml::ValidationType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_VALIDATIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ValidationType(::System::Xml::ValidationType* arg)
		{
			((::System::Void(*)(::System::Xml::ValidationType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_VALIDATIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaValidationFlags* get_ValidationFlags()
		{
			return (return (::System::Xml::Schema::XmlSchemaValidationFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_VALIDATIONFLAGS_OFFSET))(nullptr);
		}

		::System::Void set_ValidationFlags(::System::Xml::Schema::XmlSchemaValidationFlags* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaValidationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_VALIDATIONFLAGS_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaSet* get_Schemas()
		{
			return (return (::System::Xml::Schema::XmlSchemaSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_SCHEMAS_OFFSET))(nullptr);
		}

		::System::Void set_Schemas(::System::Xml::Schema::XmlSchemaSet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_SCHEMAS_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlReaderSettings* Clone()
		{
			return (return (::System::Xml::XmlReaderSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_CLONE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::ValidationEventHandler* GetEventHandler()
		{
			return (return (::System::Xml::Schema::ValidationEventHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GETEVENTHANDLER_OFFSET))(nullptr);
		}

		::System::Xml::XmlReader* CreateReader(::System::IO::Stream* arg, ::System::Uri* arg, ::System::String* str, ::System::Xml::XmlParserContext* arg)
		{
			return (return (::System::Xml::XmlReader*(*)(::System::IO::Stream*, ::System::Uri*, ::System::String*, ::System::Xml::XmlParserContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_CREATEREADER_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Xml::XmlReader* CreateReader(::System::IO::TextReader* arg, ::System::String* str, ::System::Xml::XmlParserContext* arg)
		{
			return (return (::System::Xml::XmlReader*(*)(::System::IO::TextReader*, ::System::String*, ::System::Xml::XmlParserContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_CREATEREADER_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void set_ReadOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_READONLY_OFFSET))(arg, nullptr);
		}

		::System::Void CheckReadOnly(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_CHECKREADONLY_OFFSET))(str, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Xml::XmlResolver* arg)
		{
			((::System::Void(*)(::System::Xml::XmlResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlResolver* CreateDefaultResolver()
		{
			return (return (::System::Xml::XmlResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_CREATEDEFAULTRESOLVER_OFFSET))(nullptr);
		}

		::System::Xml::XmlReader* AddValidation(::System::Xml::XmlReader* arg)
		{
			return (return (::System::Xml::XmlReader*(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_ADDVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlValidatingReaderImpl* CreateDtdValidatingReader(::System::Xml::XmlReader* arg)
		{
			return (return (::System::Xml::XmlValidatingReaderImpl*(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_CREATEDTDVALIDATINGREADER_OFFSET))(arg, nullptr);
		}

		::System::Boolean EnableLegacyXmlSettings()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_ENABLELEGACYXMLSETTINGS_OFFSET))(nullptr);
		}

	};
}

