#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class XPathSelfQuery; }

#define MS_INTERNAL_XML_XPATH_XPATHSELFQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x994A500)
#define MS_INTERNAL_XML_XPATH_XPATHSELFQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9953EB0)
#define MS_INTERNAL_XML_XPATH_XPATHSELFQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x9953EC0)
#define MS_INTERNAL_XML_XPATH_XPATHSELFQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x9953F50)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int XPathSelfQuery_TypeDefinitionIndex = 28319;

	class XPathSelfQuery : public ::TriInspector::HideLabelAttribute
	{
	public:
		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSELFQUERY_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::XPathSelfQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::XPathSelfQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSELFQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSELFQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSELFQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

