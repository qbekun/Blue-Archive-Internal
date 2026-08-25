#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class XPathDescendantIterator; }

#define MS_INTERNAL_XML_XPATH_XPATHDESCENDANTITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994F2B0)
#define MS_INTERNAL_XML_XPATH_XPATHDESCENDANTITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994F300)
#define MS_INTERNAL_XML_XPATH_XPATHDESCENDANTITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994F320)
#define MS_INTERNAL_XML_XPATH_XPATHDESCENDANTITERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x994F350)
#define MS_INTERNAL_XML_XPATH_XPATHDESCENDANTITERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x994F3B0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int XPathDescendantIterator_TypeDefinitionIndex = 28312;

	class XPathDescendantIterator : public Il2CppObject
	{
	public:
		::System::Int32 _level; // 0x40

		::System::Void .ctor(::System::Xml::XPath::XPathNavigator* arg, ::System::Xml::XPath::XPathNodeType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XPath::XPathNavigator*, ::System::Xml::XPath::XPathNodeType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHDESCENDANTITERATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XPath::XPathNavigator* arg, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XPath::XPathNavigator*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHDESCENDANTITERATOR_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::XPathDescendantIterator* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::XPathDescendantIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHDESCENDANTITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHDESCENDANTITERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHDESCENDANTITERATOR_MOVENEXT_OFFSET))(nullptr);
		}

	};
}

