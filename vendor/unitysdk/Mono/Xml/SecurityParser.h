#pragma once
#include "../../unitysdk.h"

namespace Mono::Xml { class SmallXmlParser; }

#define MONO_XML_SECURITYPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9121970)
#define MONO_XML_SECURITYPARSER_LOADXML_OFFSET UNITYSDK_OFFSET(0x9121B30)
#define MONO_XML_SECURITYPARSER_TOXML_OFFSET UNITYSDK_OFFSET(0x9121DC0)
#define MONO_XML_SECURITYPARSER_ONSTARTPARSING_OFFSET UNITYSDK_OFFSET(0x9121DD0)
#define MONO_XML_SECURITYPARSER_ONPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x9121DE0)
#define MONO_XML_SECURITYPARSER_ONIGNORABLEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9121DF0)
#define MONO_XML_SECURITYPARSER_ONSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x9121E00)
#define MONO_XML_SECURITYPARSER_ONENDELEMENT_OFFSET UNITYSDK_OFFSET(0x91220C0)
#define MONO_XML_SECURITYPARSER_ONCHARS_OFFSET UNITYSDK_OFFSET(0x9122160)
#define MONO_XML_SECURITYPARSER_ONENDPARSING_OFFSET UNITYSDK_OFFSET(0x91221D0)

namespace Mono::Xml
{
	inline static constexpr unsigned int SecurityParser_TypeDefinitionIndex = 23592;

	class SecurityParser : public Il2CppObject
	{
	public:
		::System::Security::SecurityElement* root; // 0x68
		::System::Security::SecurityElement* current; // 0x70
		::System::Collections::Stack* stack; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadXml(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_LOADXML_OFFSET))(str, nullptr);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return (return (::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_TOXML_OFFSET))(nullptr);
		}

		::System::Void OnStartParsing(::Mono::Xml::SmallXmlParser* arg)
		{
			((::System::Void(*)(::Mono::Xml::SmallXmlParser*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONSTARTPARSING_OFFSET))(arg, nullptr);
		}

		::System::Void OnProcessingInstruction(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONPROCESSINGINSTRUCTION_OFFSET))(str, str, nullptr);
		}

		::System::Void OnIgnorableWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONIGNORABLEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void OnStartElement(::System::String* str, IAttrList* arg)
		{
			((::System::Void(*)(::System::String*, IAttrList*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONSTARTELEMENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void OnEndElement(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONENDELEMENT_OFFSET))(str, nullptr);
		}

		::System::Void OnChars(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONCHARS_OFFSET))(str, nullptr);
		}

		::System::Void OnEndParsing(::Mono::Xml::SmallXmlParser* arg)
		{
			((::System::Void(*)(::Mono::Xml::SmallXmlParser*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SECURITYPARSER_ONENDPARSING_OFFSET))(arg, nullptr);
		}

	};
}

