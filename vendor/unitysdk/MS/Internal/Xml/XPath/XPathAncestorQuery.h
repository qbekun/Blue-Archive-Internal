#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class XPathAncestorQuery; }
namespace MS::Internal::Xml::XPath { class QueryProps; }

#define MS_INTERNAL_XML_XPATH_XPATHANCESTORQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x994A4D0)
#define MS_INTERNAL_XML_XPATH_XPATHANCESTORQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x994E5F0)
#define MS_INTERNAL_XML_XPATH_XPATHANCESTORQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x994E620)
#define MS_INTERNAL_XML_XPATH_XPATHANCESTORQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x994E740)
#define MS_INTERNAL_XML_XPATH_XPATHANCESTORQUERY_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x994E7B0)
#define MS_INTERNAL_XML_XPATH_XPATHANCESTORQUERY_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x994E800)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int XPathAncestorQuery_TypeDefinitionIndex = 28308;

	class XPathAncestorQuery : public Il2CppObject
	{
	public:
		::System::Boolean _matchSelf; // 0x60

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHANCESTORQUERY_.CTOR_OFFSET))(arg, str, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::XPathAncestorQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::XPathAncestorQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHANCESTORQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHANCESTORQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHANCESTORQUERY_CLONE_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHANCESTORQUERY_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::QueryProps* get_Properties()
		{
			return (return (::MS::Internal::Xml::XPath::QueryProps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHANCESTORQUERY_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

