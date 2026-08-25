#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace Newtonsoft::Json::Converters { class IXmlElement; }

#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x9537270)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95372F0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x9537350)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_HASCHILDNODES_OFFSET UNITYSDK_OFFSET(0x9537A20)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATECOMMENT_OFFSET UNITYSDK_OFFSET(0x9537B80)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATETEXTNODE_OFFSET UNITYSDK_OFFSET(0x9537C20)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATECDATASECTION_OFFSET UNITYSDK_OFFSET(0x9537CC0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9537D60)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATESIGNIFICANTWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9537E00)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x9537EA0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEXMLDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x9537F60)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x9538030)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x9538100)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x95381E0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x95382A0)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9538380)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_DOCUMENTELEMENT_OFFSET UNITYSDK_OFFSET(0x9538440)
#define NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x9538590)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XDocumentWrapper_TypeDefinitionIndex = 32117;

	class XDocumentWrapper : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XDocument* get_Document()
		{
			return (return (::System::Xml::Linq::XDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_DOCUMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XDocument* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XDocument*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ChildNodes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_CHILDNODES_OFFSET))(nullptr);
		}

		::System::Boolean get_HasChildNodes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_HASCHILDNODES_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateComment(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATECOMMENT_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateTextNode(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATETEXTNODE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateCDataSection(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATECDATASECTION_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateWhitespace(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEWHITESPACE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateSignificantWhitespace(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATESIGNIFICANTWHITESPACE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDeclaration(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEXMLDECLARATION_OFFSET))(str, str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDocumentType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEXMLDOCUMENTTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateProcessingInstruction(::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlElement*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEELEMENT_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlElement*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEELEMENT_OFFSET))(str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET))(str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlElement* get_DocumentElement()
		{
			return (return (::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_GET_DOCUMENTELEMENT_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* arg)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::Newtonsoft::Json::Converters::IXmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XDOCUMENTWRAPPER_APPENDCHILD_OFFSET))(arg, nullptr);
		}

	};
}

