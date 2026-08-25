#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class XPathArrayIterator; }

#define MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994E820)
#define MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994E870)
#define MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x994E9D0)
#define MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x994EA50)
#define MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x994EBC0)
#define MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x994EBD0)
#define MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x994EC70)
#define MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x994ED30)
#define MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x994ED40)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int XPathArrayIterator_TypeDefinitionIndex = 28309;

	class XPathArrayIterator : public Il2CppObject
	{
	public:
		::System::Collections::IList* list; // 0x18
		::System::Int32 index; // 0x20

		::System::Void .ctor(::MS::Internal::Xml::XPath::XPathArrayIterator* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::XPathArrayIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			((::System::Void(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHARRAYITERATOR_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

