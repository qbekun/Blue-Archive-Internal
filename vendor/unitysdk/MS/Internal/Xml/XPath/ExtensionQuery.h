#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class ResetableIterator; }
namespace MS::Internal::Xml::XPath { class ExtensionQuery; }

#define MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993F900)
#define MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993F950)
#define MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x993FA60)
#define MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x993FA80)
#define MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x993FB10)
#define MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x993FBA0)
#define MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_PROCESSRESULT_OFFSET UNITYSDK_OFFSET(0x993FBC0)
#define MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_GET_QNAME_OFFSET UNITYSDK_OFFSET(0x9940010)
#define MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9940070)
#define MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x99400A0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int ExtensionQuery_TypeDefinitionIndex = 28267;

	class ExtensionQuery : public Il2CppObject
	{
	public:
		::System::String* prefix; // 0x18
		::System::String* name; // 0x20
		::System::Xml::Xsl::XsltContext* xsltContext; // 0x28
		::MS::Internal::Xml::XPath::ResetableIterator* _queryIterator; // 0x30

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::ExtensionQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::ExtensionQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Object* ProcessResult(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_PROCESSRESULT_OFFSET))(arg, nullptr);
		}

		::System::String* get_QName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_GET_QNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EXTENSIONQUERY_GET_STATICTYPE_OFFSET))(nullptr);
		}

	};
}

