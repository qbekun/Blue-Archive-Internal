#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class XPathSelectionIterator; }

#define MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9953BB0)
#define MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9953C20)
#define MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9953D40)
#define MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9953D70)
#define MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9953E00)
#define MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9953E30)
#define MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x9953E40)
#define MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x9953E50)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int XPathSelectionIterator_TypeDefinitionIndex = 28318;

	class XPathSelectionIterator : public Il2CppObject
	{
	public:
		::System::Xml::XPath::XPathNavigator* _nav; // 0x18
		::MS::Internal::Xml::XPath::Query* _query; // 0x20
		::System::Int32 _position; // 0x28

		::System::Void .ctor(::System::Xml::XPath::XPathNavigator* arg, ::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(::System::Xml::XPath::XPathNavigator*, ::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::XPathSelectionIterator* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::XPathSelectionIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHSELECTIONITERATOR_CLONE_OFFSET))(nullptr);
		}

	};
}

