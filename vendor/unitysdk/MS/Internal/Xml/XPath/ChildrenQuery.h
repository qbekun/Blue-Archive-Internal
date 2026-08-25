#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class ChildrenQuery; }

#define MS_INTERNAL_XML_XPATH_CHILDRENQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993DD60)
#define MS_INTERNAL_XML_XPATH_CHILDRENQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993DEB0)
#define MS_INTERNAL_XML_XPATH_CHILDRENQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x993DFF0)
#define MS_INTERNAL_XML_XPATH_CHILDRENQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x993E7F0)
#define MS_INTERNAL_XML_XPATH_CHILDRENQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x993EA00)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int ChildrenQuery_TypeDefinitionIndex = 28257;

	class ChildrenQuery : public ::TriInspector::HideLabelAttribute
	{
	public:
		::System::Xml::XPath::XPathNodeIterator* _iterator; // 0x58

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CHILDRENQUERY_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::ChildrenQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::ChildrenQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CHILDRENQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CHILDRENQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CHILDRENQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CHILDRENQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

