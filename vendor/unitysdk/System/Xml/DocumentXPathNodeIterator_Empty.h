#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_EMPTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x998C470)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_EMPTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x998C9B0)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_EMPTY_CLONE_OFFSET UNITYSDK_OFFSET(0x998CA00)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_EMPTY_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x998CA90)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_EMPTY_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x998CAA0)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_EMPTY_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x998CAB0)
#define SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_EMPTY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x998CAC0)

namespace System::Xml
{
	inline static constexpr unsigned int DocumentXPathNodeIterator_Empty_TypeDefinitionIndex = 27740;

	class DocumentXPathNodeIterator_Empty : public Il2CppObject
	{
	public:
		::System::Xml::XPath::XPathNavigator* nav; // 0x18

		::System::Void .ctor(::System::Xml::DocumentXPathNavigator* arg)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_EMPTY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::DocumentXPathNodeIterator_Empty* arg)
		{
			((::System::Void(*)(::System::Xml::DocumentXPathNodeIterator_Empty*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_EMPTY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_EMPTY_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_EMPTY_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_EMPTY_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_EMPTY_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOCUMENTXPATHNODEITERATOR_EMPTY_GET_COUNT_OFFSET))(nullptr);
		}

	};
}

