#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class DescendantOverDescendantQuery; }

#define MS_INTERNAL_XML_XPATH_DESCENDANTOVERDESCENDANTQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993F370)
#define MS_INTERNAL_XML_XPATH_DESCENDANTOVERDESCENDANTQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993F3B0)
#define MS_INTERNAL_XML_XPATH_DESCENDANTOVERDESCENDANTQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x993F3F0)
#define MS_INTERNAL_XML_XPATH_DESCENDANTOVERDESCENDANTQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x993F450)
#define MS_INTERNAL_XML_XPATH_DESCENDANTOVERDESCENDANTQUERY_MOVETOFIRSTCHILD_OFFSET UNITYSDK_OFFSET(0x993F600)
#define MS_INTERNAL_XML_XPATH_DESCENDANTOVERDESCENDANTQUERY_MOVEUPUNTILNEXT_OFFSET UNITYSDK_OFFSET(0x993F640)
#define MS_INTERNAL_XML_XPATH_DESCENDANTOVERDESCENDANTQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x993F6B0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int DescendantOverDescendantQuery_TypeDefinitionIndex = 28264;

	class DescendantOverDescendantQuery : public Il2CppObject
	{
	public:
		::System::Int32 _level; // 0x60

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::Boolean arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::Boolean, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DESCENDANTOVERDESCENDANTQUERY_.CTOR_OFFSET))(arg, arg, str, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::DescendantOverDescendantQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::DescendantOverDescendantQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DESCENDANTOVERDESCENDANTQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DESCENDANTOVERDESCENDANTQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DESCENDANTOVERDESCENDANTQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Boolean MoveToFirstChild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DESCENDANTOVERDESCENDANTQUERY_MOVETOFIRSTCHILD_OFFSET))(nullptr);
		}

		::System::Boolean MoveUpUntilNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DESCENDANTOVERDESCENDANTQUERY_MOVEUPUNTILNEXT_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DESCENDANTOVERDESCENDANTQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

