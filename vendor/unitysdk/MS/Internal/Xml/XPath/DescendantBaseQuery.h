#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class DescendantBaseQuery; }

#define MS_INTERNAL_XML_XPATH_DESCENDANTBASEQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993EF90)
#define MS_INTERNAL_XML_XPATH_DESCENDANTBASEQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993EFD0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int DescendantBaseQuery_TypeDefinitionIndex = 28262;

	class DescendantBaseQuery : public ::TriInspector::HideLabelAttribute
	{
	public:
		::System::Boolean matchSelf; // 0x58
		::System::Boolean abbrAxis; // 0x59

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DESCENDANTBASEQUERY_.CTOR_OFFSET))(arg, str, str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::DescendantBaseQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::DescendantBaseQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DESCENDANTBASEQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

