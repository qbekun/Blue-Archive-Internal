#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class IteratorFilter; }

#define MS_INTERNAL_XML_XPATH_ITERATORFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x993E9B0)
#define MS_INTERNAL_XML_XPATH_ITERATORFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9942BC0)
#define MS_INTERNAL_XML_XPATH_ITERATORFILTER_CLONE_OFFSET UNITYSDK_OFFSET(0x9942C30)
#define MS_INTERNAL_XML_XPATH_ITERATORFILTER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9942CD0)
#define MS_INTERNAL_XML_XPATH_ITERATORFILTER_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x9942D00)
#define MS_INTERNAL_XML_XPATH_ITERATORFILTER_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9942D10)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int IteratorFilter_TypeDefinitionIndex = 28279;

	class IteratorFilter : public Il2CppObject
	{
	public:
		::System::Xml::XPath::XPathNodeIterator* _innerIterator; // 0x18
		::System::String* _name; // 0x20
		::System::Int32 _position; // 0x28

		::System::Void .ctor(::System::Xml::XPath::XPathNodeIterator* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XPath::XPathNodeIterator*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ITERATORFILTER_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::IteratorFilter* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::IteratorFilter*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ITERATORFILTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ITERATORFILTER_CLONE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ITERATORFILTER_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ITERATORFILTER_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ITERATORFILTER_MOVENEXT_OFFSET))(nullptr);
		}

	};
}

