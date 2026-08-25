#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class CacheChildrenQuery; }

#define MS_INTERNAL_XML_XPATH_CACHECHILDRENQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993DBE0)
#define MS_INTERNAL_XML_XPATH_CACHECHILDRENQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993DDF0)
#define MS_INTERNAL_XML_XPATH_CACHECHILDRENQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x993DF50)
#define MS_INTERNAL_XML_XPATH_CACHECHILDRENQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x993E090)
#define MS_INTERNAL_XML_XPATH_CACHECHILDRENQUERY_DECIDENEXTNODE_OFFSET UNITYSDK_OFFSET(0x993E2D0)
#define MS_INTERNAL_XML_XPATH_CACHECHILDRENQUERY_GETNEXTINPUT_OFFSET UNITYSDK_OFFSET(0x993E260)
#define MS_INTERNAL_XML_XPATH_CACHECHILDRENQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x993E420)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int CacheChildrenQuery_TypeDefinitionIndex = 28255;

	class CacheChildrenQuery : public Il2CppObject
	{
	public:
		::System::Xml::XPath::XPathNavigator* _nextInput; // 0x60
		Il2CppObject* _elementStk; // 0x68
		Il2CppObject* _positionStk; // 0x70
		::System::Boolean _needInput; // 0x78

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHECHILDRENQUERY_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::CacheChildrenQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::CacheChildrenQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHECHILDRENQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHECHILDRENQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHECHILDRENQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Boolean DecideNextNode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHECHILDRENQUERY_DECIDENEXTNODE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* GetNextInput()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHECHILDRENQUERY_GETNEXTINPUT_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHECHILDRENQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

