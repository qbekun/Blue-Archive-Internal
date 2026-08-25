#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace Newtonsoft::Json::Converters { class IXmlElement; }

#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9535590)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATECOMMENT_OFFSET UNITYSDK_OFFSET(0x9535600)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATETEXTNODE_OFFSET UNITYSDK_OFFSET(0x9535690)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATECDATASECTION_OFFSET UNITYSDK_OFFSET(0x9535720)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x95357B0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATESIGNIFICANTWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9535840)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x95358D0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEXMLDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x95359C0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x9535AC0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x9535B50)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x9535C20)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9535CC0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9535DA0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_GET_DOCUMENTELEMENT_OFFSET UNITYSDK_OFFSET(0x9535E50)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlDocumentWrapper_TypeDefinitionIndex = 32105;

	class XmlDocumentWrapper : public Il2CppObject
	{
	public:
		::System::Xml::XmlDocument* _document; // 0x28

		::System::Void .ctor(::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateComment(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATECOMMENT_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateTextNode(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATETEXTNODE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateCDataSection(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATECDATASECTION_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateWhitespace(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEWHITESPACE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateSignificantWhitespace(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATESIGNIFICANTWHITESPACE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDeclaration(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEXMLDECLARATION_OFFSET))(str, str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDocumentType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEXMLDOCUMENTTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateProcessingInstruction(::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlElement*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEELEMENT_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlElement*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEELEMENT_OFFSET))(str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET))(str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_CREATEATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlElement* get_DocumentElement()
		{
			return (return (::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLDOCUMENTWRAPPER_GET_DOCUMENTELEMENT_OFFSET))(nullptr);
		}

	};
}

