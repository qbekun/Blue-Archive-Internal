#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class PreSiblingQuery; }
namespace MS::Internal::Xml::XPath { class QueryProps; }

#define MS_INTERNAL_XML_XPATH_PRESIBLINGQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x99488C0)
#define MS_INTERNAL_XML_XPATH_PRESIBLINGQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x99488E0)
#define MS_INTERNAL_XML_XPATH_PRESIBLINGQUERY_NOTVISITED_OFFSET UNITYSDK_OFFSET(0x99488F0)
#define MS_INTERNAL_XML_XPATH_PRESIBLINGQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9948A40)
#define MS_INTERNAL_XML_XPATH_PRESIBLINGQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x9948CC0)
#define MS_INTERNAL_XML_XPATH_PRESIBLINGQUERY_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9948D20)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int PreSiblingQuery_TypeDefinitionIndex = 28293;

	class PreSiblingQuery : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PRESIBLINGQUERY_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::PreSiblingQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::PreSiblingQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PRESIBLINGQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean NotVisited(::System::Xml::XPath::XPathNavigator* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XPath::XPathNavigator*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PRESIBLINGQUERY_NOTVISITED_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PRESIBLINGQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PRESIBLINGQUERY_CLONE_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::QueryProps* get_Properties()
		{
			return (return (::MS::Internal::Xml::XPath::QueryProps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_PRESIBLINGQUERY_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

