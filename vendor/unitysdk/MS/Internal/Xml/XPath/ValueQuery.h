#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class ValueQuery; }

#define MS_INTERNAL_XML_XPATH_VALUEQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x994B920)
#define MS_INTERNAL_XML_XPATH_VALUEQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x994BBE0)
#define MS_INTERNAL_XML_XPATH_VALUEQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x994E0D0)
#define MS_INTERNAL_XML_XPATH_VALUEQUERY_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x994E0E0)
#define MS_INTERNAL_XML_XPATH_VALUEQUERY_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x994E120)
#define MS_INTERNAL_XML_XPATH_VALUEQUERY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x994E160)
#define MS_INTERNAL_XML_XPATH_VALUEQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x994E1A0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int ValueQuery_TypeDefinitionIndex = 28305;

	class ValueQuery : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VALUEQUERY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::ValueQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::ValueQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VALUEQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VALUEQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VALUEQUERY_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VALUEQUERY_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VALUEQUERY_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VALUEQUERY_ADVANCE_OFFSET))(nullptr);
		}

	};
}

