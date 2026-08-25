#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class FollSiblingQuery; }

#define MS_INTERNAL_XML_XPATH_FOLLSIBLINGQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x99405F0)
#define MS_INTERNAL_XML_XPATH_FOLLSIBLINGQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x99406E0)
#define MS_INTERNAL_XML_XPATH_FOLLSIBLINGQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x99407D0)
#define MS_INTERNAL_XML_XPATH_FOLLSIBLINGQUERY_VISITED_OFFSET UNITYSDK_OFFSET(0x99408B0)
#define MS_INTERNAL_XML_XPATH_FOLLSIBLINGQUERY_FETCHINPUT_OFFSET UNITYSDK_OFFSET(0x99409E0)
#define MS_INTERNAL_XML_XPATH_FOLLSIBLINGQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x9940A50)
#define MS_INTERNAL_XML_XPATH_FOLLSIBLINGQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x9940CE0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int FollSiblingQuery_TypeDefinitionIndex = 28270;

	class FollSiblingQuery : public ::TriInspector::HideLabelAttribute
	{
	public:
		Il2CppObject* _elementStk; // 0x58
		Il2CppObject* _parentStk; // 0x60
		::System::Xml::XPath::XPathNavigator* _nextInput; // 0x68

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FOLLSIBLINGQUERY_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::FollSiblingQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::FollSiblingQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FOLLSIBLINGQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FOLLSIBLINGQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Boolean Visited(::System::Xml::XPath::XPathNavigator* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XPath::XPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FOLLSIBLINGQUERY_VISITED_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* FetchInput()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FOLLSIBLINGQUERY_FETCHINPUT_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FOLLSIBLINGQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FOLLSIBLINGQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

