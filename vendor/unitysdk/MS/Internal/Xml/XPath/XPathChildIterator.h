#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class XPathChildIterator; }

#define MS_INTERNAL_XML_XPATH_XPATHCHILDITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994F150)
#define MS_INTERNAL_XML_XPATH_XPATHCHILDITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994F190)
#define MS_INTERNAL_XML_XPATH_XPATHCHILDITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994F1B0)
#define MS_INTERNAL_XML_XPATH_XPATHCHILDITERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x994F1C0)
#define MS_INTERNAL_XML_XPATH_XPATHCHILDITERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x994F220)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int XPathChildIterator_TypeDefinitionIndex = 28311;

	class XPathChildIterator : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Xml::XPath::XPathNavigator* arg, ::System::Xml::XPath::XPathNodeType* arg)
		{
			((::System::Void(*)(::System::Xml::XPath::XPathNavigator*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHCHILDITERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XPath::XPathNavigator* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XPath::XPathNavigator*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHCHILDITERATOR_.CTOR_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::XPathChildIterator* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::XPathChildIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHCHILDITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHCHILDITERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHCHILDITERATOR_MOVENEXT_OFFSET))(nullptr);
		}

	};
}

