#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class QueryProps; }

#define MS_INTERNAL_XML_XPATH_EMPTYQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x993F860)
#define MS_INTERNAL_XML_XPATH_EMPTYQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x993F870)
#define MS_INTERNAL_XML_XPATH_EMPTYQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x993F880)
#define MS_INTERNAL_XML_XPATH_EMPTYQUERY_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x993F890)
#define MS_INTERNAL_XML_XPATH_EMPTYQUERY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x993F8A0)
#define MS_INTERNAL_XML_XPATH_EMPTYQUERY_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x993F8B0)
#define MS_INTERNAL_XML_XPATH_EMPTYQUERY_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x993F8C0)
#define MS_INTERNAL_XML_XPATH_EMPTYQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x993F8D0)
#define MS_INTERNAL_XML_XPATH_EMPTYQUERY_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x993F8E0)
#define MS_INTERNAL_XML_XPATH_EMPTYQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993F8F0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int EmptyQuery_TypeDefinitionIndex = 28266;

	class EmptyQuery : public Il2CppObject
	{
	public:
		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EMPTYQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EMPTYQUERY_CLONE_OFFSET))(nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EMPTYQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EMPTYQUERY_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EMPTYQUERY_GET_COUNT_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::QueryProps* get_Properties()
		{
			return (return (::MS::Internal::Xml::XPath::QueryProps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EMPTYQUERY_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EMPTYQUERY_GET_STATICTYPE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EMPTYQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EMPTYQUERY_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_EMPTYQUERY_.CTOR_OFFSET))(nullptr);
		}

	};
}

