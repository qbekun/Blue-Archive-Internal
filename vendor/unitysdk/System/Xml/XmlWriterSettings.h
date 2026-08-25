#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLWRITERSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9981220)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_ASYNC_OFFSET UNITYSDK_OFFSET(0x9981D20)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x9981D30)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_OMITXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x9981D40)
#define SYSTEM_XML_XMLWRITERSETTINGS_SET_OMITXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x9981D50)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_NEWLINEHANDLING_OFFSET UNITYSDK_OFFSET(0x9981E50)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_NEWLINECHARS_OFFSET UNITYSDK_OFFSET(0x9981E60)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_INDENT_OFFSET UNITYSDK_OFFSET(0x9981E70)
#define SYSTEM_XML_XMLWRITERSETTINGS_SET_INDENT_OFFSET UNITYSDK_OFFSET(0x9981E80)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_INDENTCHARS_OFFSET UNITYSDK_OFFSET(0x9981EE0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_NEWLINEONATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9981EF0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_CLOSEOUTPUT_OFFSET UNITYSDK_OFFSET(0x9981F00)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_CONFORMANCELEVEL_OFFSET UNITYSDK_OFFSET(0x9981F10)
#define SYSTEM_XML_XMLWRITERSETTINGS_SET_CONFORMANCELEVEL_OFFSET UNITYSDK_OFFSET(0x9981F20)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_CHECKCHARACTERS_OFFSET UNITYSDK_OFFSET(0x9981FC0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_NAMESPACEHANDLING_OFFSET UNITYSDK_OFFSET(0x9981FD0)
#define SYSTEM_XML_XMLWRITERSETTINGS_SET_NAMESPACEHANDLING_OFFSET UNITYSDK_OFFSET(0x9981FE0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_WRITEENDDOCUMENTONCLOSE_OFFSET UNITYSDK_OFFSET(0x9982080)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_OUTPUTMETHOD_OFFSET UNITYSDK_OFFSET(0x9982090)
#define SYSTEM_XML_XMLWRITERSETTINGS_SET_OUTPUTMETHOD_OFFSET UNITYSDK_OFFSET(0x99820A0)
#define SYSTEM_XML_XMLWRITERSETTINGS_CLONE_OFFSET UNITYSDK_OFFSET(0x99820B0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_CDATASECTIONELEMENTS_OFFSET UNITYSDK_OFFSET(0x9982170)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_DONOTESCAPEURIATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9982180)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_MERGECDATASECTIONS_OFFSET UNITYSDK_OFFSET(0x9982190)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_MEDIATYPE_OFFSET UNITYSDK_OFFSET(0x99821A0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_DOCTYPESYSTEM_OFFSET UNITYSDK_OFFSET(0x99821B0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_DOCTYPEPUBLIC_OFFSET UNITYSDK_OFFSET(0x99821C0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x99821D0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_AUTOXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x99821E0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_INDENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x99821F0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_ISQUERYSPECIFIC_OFFSET UNITYSDK_OFFSET(0x9982200)
#define SYSTEM_XML_XMLWRITERSETTINGS_CREATEWRITER_OFFSET UNITYSDK_OFFSET(0x99812B0)
#define SYSTEM_XML_XMLWRITERSETTINGS_CREATEWRITER_OFFSET UNITYSDK_OFFSET(0x9981850)
#define SYSTEM_XML_XMLWRITERSETTINGS_SET_READONLY_OFFSET UNITYSDK_OFFSET(0x9982260)
#define SYSTEM_XML_XMLWRITERSETTINGS_CHECKREADONLY_OFFSET UNITYSDK_OFFSET(0x9981D90)
#define SYSTEM_XML_XMLWRITERSETTINGS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9981BE0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWriterSettings_TypeDefinitionIndex = 27732;

	class XmlWriterSettings : public Il2CppObject
	{
	public:
		::System::Boolean useAsync; // 0x10
		::System::Text::Encoding* encoding; // 0x18
		::System::Boolean omitXmlDecl; // 0x20
		::System::Xml::NewLineHandling* newLineHandling; // 0x24
		::System::String* newLineChars; // 0x28
		::System::Xml::TriState* indent; // 0x30
		::System::String* indentChars; // 0x38
		::System::Boolean newLineOnAttributes; // 0x40
		::System::Boolean closeOutput; // 0x41
		::System::Xml::NamespaceHandling* namespaceHandling; // 0x44
		::System::Xml::ConformanceLevel* conformanceLevel; // 0x48
		::System::Boolean checkCharacters; // 0x4C
		::System::Boolean writeEndDocumentOnClose; // 0x4D
		::System::Xml::XmlOutputMethod* outputMethod; // 0x50
		Il2CppObject* cdataSections; // 0x58
		::System::Boolean doNotEscapeUriAttributes; // 0x60
		::System::Boolean mergeCDataSections; // 0x61
		::System::String* mediaType; // 0x68
		::System::String* docTypeSystem; // 0x70
		::System::String* docTypePublic; // 0x78
		::System::Xml::XmlStandalone* standalone; // 0x80
		::System::Boolean autoXmlDecl; // 0x84
		::System::Boolean isReadOnly; // 0x85

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_Async()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_ASYNC_OFFSET))(nullptr);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::Boolean get_OmitXmlDeclaration()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_OMITXMLDECLARATION_OFFSET))(nullptr);
		}

		::System::Void set_OmitXmlDeclaration(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_SET_OMITXMLDECLARATION_OFFSET))(arg, nullptr);
		}

		::System::Xml::NewLineHandling* get_NewLineHandling()
		{
			return (return (::System::Xml::NewLineHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_NEWLINEHANDLING_OFFSET))(nullptr);
		}

		::System::String* get_NewLineChars()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_NEWLINECHARS_OFFSET))(nullptr);
		}

		::System::Boolean get_Indent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_INDENT_OFFSET))(nullptr);
		}

		::System::Void set_Indent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_SET_INDENT_OFFSET))(arg, nullptr);
		}

		::System::String* get_IndentChars()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_INDENTCHARS_OFFSET))(nullptr);
		}

		::System::Boolean get_NewLineOnAttributes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_NEWLINEONATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Boolean get_CloseOutput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_CLOSEOUTPUT_OFFSET))(nullptr);
		}

		::System::Xml::ConformanceLevel* get_ConformanceLevel()
		{
			return (return (::System::Xml::ConformanceLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_CONFORMANCELEVEL_OFFSET))(nullptr);
		}

		::System::Void set_ConformanceLevel(::System::Xml::ConformanceLevel* arg)
		{
			((::System::Void(*)(::System::Xml::ConformanceLevel*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_SET_CONFORMANCELEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CheckCharacters()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_CHECKCHARACTERS_OFFSET))(nullptr);
		}

		::System::Xml::NamespaceHandling* get_NamespaceHandling()
		{
			return (return (::System::Xml::NamespaceHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_NAMESPACEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_NamespaceHandling(::System::Xml::NamespaceHandling* arg)
		{
			((::System::Void(*)(::System::Xml::NamespaceHandling*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_SET_NAMESPACEHANDLING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_WriteEndDocumentOnClose()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_WRITEENDDOCUMENTONCLOSE_OFFSET))(nullptr);
		}

		::System::Xml::XmlOutputMethod* get_OutputMethod()
		{
			return (return (::System::Xml::XmlOutputMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_OUTPUTMETHOD_OFFSET))(nullptr);
		}

		::System::Void set_OutputMethod(::System::Xml::XmlOutputMethod* arg)
		{
			((::System::Void(*)(::System::Xml::XmlOutputMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_SET_OUTPUTMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlWriterSettings* Clone()
		{
			return (return (::System::Xml::XmlWriterSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_CLONE_OFFSET))(nullptr);
		}

		Il2CppObject* get_CDataSectionElements()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_CDATASECTIONELEMENTS_OFFSET))(nullptr);
		}

		::System::Boolean get_DoNotEscapeUriAttributes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_DONOTESCAPEURIATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Boolean get_MergeCDataSections()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_MERGECDATASECTIONS_OFFSET))(nullptr);
		}

		::System::String* get_MediaType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_MEDIATYPE_OFFSET))(nullptr);
		}

		::System::String* get_DocTypeSystem()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_DOCTYPESYSTEM_OFFSET))(nullptr);
		}

		::System::String* get_DocTypePublic()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_DOCTYPEPUBLIC_OFFSET))(nullptr);
		}

		::System::Xml::XmlStandalone* get_Standalone()
		{
			return (return (::System::Xml::XmlStandalone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_STANDALONE_OFFSET))(nullptr);
		}

		::System::Boolean get_AutoXmlDeclaration()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_AUTOXMLDECLARATION_OFFSET))(nullptr);
		}

		::System::Xml::TriState* get_IndentInternal()
		{
			return (return (::System::Xml::TriState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_INDENTINTERNAL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsQuerySpecific()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_ISQUERYSPECIFIC_OFFSET))(nullptr);
		}

		::System::Xml::XmlWriter* CreateWriter(::System::IO::Stream* arg)
		{
			return (return (::System::Xml::XmlWriter*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_CREATEWRITER_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlWriter* CreateWriter(::System::IO::TextWriter* arg)
		{
			return (return (::System::Xml::XmlWriter*(*)(::System::IO::TextWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_CREATEWRITER_OFFSET))(arg, nullptr);
		}

		::System::Void set_ReadOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_SET_READONLY_OFFSET))(arg, nullptr);
		}

		::System::Void CheckReadOnly(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_CHECKREADONLY_OFFSET))(str, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_INITIALIZE_OFFSET))(nullptr);
		}

	};
}

