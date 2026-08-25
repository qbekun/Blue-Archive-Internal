#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace Newtonsoft::Json::Converters { class IXmlElement; }

#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATECOMMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATETEXTNODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATECDATASECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATESIGNIFICANTWHITESPACE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEXMLDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_GET_DOCUMENTELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int IXmlDocument_TypeDefinitionIndex = 32110;

	class IXmlDocument : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Converters::IXmlNode* CreateComment(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATECOMMENT_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateTextNode(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATETEXTNODE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateCDataSection(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATECDATASECTION_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateWhitespace(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEWHITESPACE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateSignificantWhitespace(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATESIGNIFICANTWHITESPACE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDeclaration(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEXMLDECLARATION_OFFSET))(str, str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDocumentType(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEXMLDOCUMENTTYPE_OFFSET))(str, str, str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateProcessingInstruction(::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlElement*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEELEMENT_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlElement*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEELEMENT_OFFSET))(str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEATTRIBUTE_OFFSET))(str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_CREATEATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlElement* get_DocumentElement()
		{
			return (return (::Newtonsoft::Json::Converters::IXmlElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLDOCUMENT_GET_DOCUMENTELEMENT_OFFSET))(nullptr);
		}

	};
}

