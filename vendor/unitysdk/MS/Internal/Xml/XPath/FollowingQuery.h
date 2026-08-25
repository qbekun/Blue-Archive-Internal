#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class FollowingQuery; }

#define MS_INTERNAL_XML_XPATH_FOLLOWINGQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9940D40)
#define MS_INTERNAL_XML_XPATH_FOLLOWINGQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9940D60)
#define MS_INTERNAL_XML_XPATH_FOLLOWINGQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x9940DC0)
#define MS_INTERNAL_XML_XPATH_FOLLOWINGQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x9940E20)
#define MS_INTERNAL_XML_XPATH_FOLLOWINGQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x99410E0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int FollowingQuery_TypeDefinitionIndex = 28271;

	class FollowingQuery : public ::TriInspector::HideLabelAttribute
	{
	public:
		::System::Xml::XPath::XPathNavigator* _input; // 0x58
		::System::Xml::XPath::XPathNodeIterator* _iterator; // 0x60

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FOLLOWINGQUERY_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::FollowingQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::FollowingQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FOLLOWINGQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FOLLOWINGQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FOLLOWINGQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FOLLOWINGQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

