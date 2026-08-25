#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class PrecedingQuery; }
namespace MS::Internal::Xml::XPath { class QueryProps; }

#define MS_INTERNAL_XML_XPATH_PRECEDINGQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9948D30)
#define MS_INTERNAL_XML_XPATH_PRECEDINGQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9948DE0)
#define MS_INTERNAL_XML_XPATH_PRECEDINGQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x9948E70)
#define MS_INTERNAL_XML_XPATH_PRECEDINGQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x9948F20)
#define MS_INTERNAL_XML_XPATH_PRECEDINGQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x99491E0)
#define MS_INTERNAL_XML_XPATH_PRECEDINGQUERY_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9949240)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int PrecedingQuery_TypeDefinitionIndex = 28294;

	class PrecedingQuery : public ::TriInspector::HideLabelAttribute
	{
	public:
		::System::Xml::XPath::XPathNodeIterator* _workIterator; // 0x58
		Il2CppObject* _ancestorStk; // 0x60

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PRECEDINGQUERY_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::PrecedingQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::PrecedingQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PRECEDINGQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PRECEDINGQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PRECEDINGQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PRECEDINGQUERY_CLONE_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::QueryProps* get_Properties()
		{
			return (return (::MS::Internal::Xml::XPath::QueryProps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PRECEDINGQUERY_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

