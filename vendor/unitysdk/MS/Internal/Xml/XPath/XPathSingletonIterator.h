#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class XPathSingletonIterator; }

#define MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9953FB0)
#define MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9953FF0)
#define MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9954040)
#define MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x99540A0)
#define MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9954140)
#define MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x9954150)
#define MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9954160)
#define MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9954170)
#define MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9954190)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int XPathSingletonIterator_TypeDefinitionIndex = 28320;

	class XPathSingletonIterator : public Il2CppObject
	{
	public:
		::System::Xml::XPath::XPathNavigator* _nav; // 0x18
		::System::Int32 _position; // 0x20

		::System::Void .ctor(::System::Xml::XPath::XPathNavigator* arg)
		{
			((::System::Void(*)(::System::Xml::XPath::XPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XPath::XPathNavigator* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XPath::XPathNavigator*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::XPathSingletonIterator* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::XPathSingletonIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSINGLETONITERATOR_RESET_OFFSET))(nullptr);
		}

	};
}

