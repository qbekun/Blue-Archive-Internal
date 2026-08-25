#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class XPathAxisIterator; }

#define MS_INTERNAL_XML_XPATH_XPATHAXISITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994EDE0)
#define MS_INTERNAL_XML_XPATH_XPATHAXISITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994EE20)
#define MS_INTERNAL_XML_XPATH_XPATHAXISITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994EE70)
#define MS_INTERNAL_XML_XPATH_XPATHAXISITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994EF60)
#define MS_INTERNAL_XML_XPATH_XPATHAXISITERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x994EFF0)
#define MS_INTERNAL_XML_XPATH_XPATHAXISITERATOR_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x994F000)
#define MS_INTERNAL_XML_XPATH_XPATHAXISITERATOR_GET_MATCHES_OFFSET UNITYSDK_OFFSET(0x994F010)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int XPathAxisIterator_TypeDefinitionIndex = 28310;

	class XPathAxisIterator : public Il2CppObject
	{
	public:
		::System::Xml::XPath::XPathNavigator* nav; // 0x18
		::System::Xml::XPath::XPathNodeType* type; // 0x20
		::System::String* name; // 0x28
		::System::String* uri; // 0x30
		::System::Int32 position; // 0x38
		::System::Boolean matchSelf; // 0x3C
		::System::Boolean first; // 0x3D

		::System::Void .ctor(::System::Xml::XPath::XPathNavigator* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XPath::XPathNavigator*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHAXISITERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XPath::XPathNavigator* arg, ::System::Xml::XPath::XPathNodeType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XPath::XPathNavigator*, ::System::Xml::XPath::XPathNodeType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHAXISITERATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XPath::XPathNavigator* arg, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XPath::XPathNavigator*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHAXISITERATOR_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::XPathAxisIterator* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::XPathAxisIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHAXISITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHAXISITERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHAXISITERATOR_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_Matches()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHAXISITERATOR_GET_MATCHES_OFFSET))(nullptr);
		}

	};
}

