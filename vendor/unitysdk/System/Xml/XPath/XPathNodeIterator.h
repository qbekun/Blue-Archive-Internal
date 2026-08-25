#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_XPATH_XPATHNODEITERATOR_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x99D00C0)
#define SYSTEM_XML_XPATH_XPATHNODEITERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XPATH_XPATHNODEITERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XPATH_XPATHNODEITERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XPATH_XPATHNODEITERATOR_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XPATH_XPATHNODEITERATOR_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x99D00E0)
#define SYSTEM_XML_XPATH_XPATHNODEITERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x99D0150)
#define SYSTEM_XML_XPATH_XPATHNODEITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x99D0220)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathNodeIterator_TypeDefinitionIndex = 27853;

	class XPathNodeIterator : public Il2CppObject
	{
	public:
		::System::Int32 count; // 0x10

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNODEITERATOR_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNODEITERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNODEITERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNODEITERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNODEITERATOR_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNODEITERATOR_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNODEITERATOR_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNODEITERATOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

