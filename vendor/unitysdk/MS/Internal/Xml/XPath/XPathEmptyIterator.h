#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class XPathEmptyIterator; }

#define MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994F490)
#define MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x994F4B0)
#define MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x994F4C0)
#define MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x994F4D0)
#define MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x994F4E0)
#define MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x994F4F0)
#define MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x994F500)
#define MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x994F510)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int XPathEmptyIterator_TypeDefinitionIndex = 28313;

	class XPathEmptyIterator : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::XPath::XPathEmptyIterator* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHEMPTYITERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

