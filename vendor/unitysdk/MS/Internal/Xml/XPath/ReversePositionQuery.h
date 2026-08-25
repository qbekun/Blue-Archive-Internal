#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class ReversePositionQuery; }
namespace MS::Internal::Xml::XPath { class QueryProps; }

#define MS_INTERNAL_XML_XPATH_REVERSEPOSITIONQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x994AB70)
#define MS_INTERNAL_XML_XPATH_REVERSEPOSITIONQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x994B810)
#define MS_INTERNAL_XML_XPATH_REVERSEPOSITIONQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x994B820)
#define MS_INTERNAL_XML_XPATH_REVERSEPOSITIONQUERY_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x994B880)
#define MS_INTERNAL_XML_XPATH_REVERSEPOSITIONQUERY_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x994B8D0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int ReversePositionQuery_TypeDefinitionIndex = 28301;

	class ReversePositionQuery : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_REVERSEPOSITIONQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::ReversePositionQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::ReversePositionQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_REVERSEPOSITIONQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_REVERSEPOSITIONQUERY_CLONE_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_REVERSEPOSITIONQUERY_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::QueryProps* get_Properties()
		{
			return (return (::MS::Internal::Xml::XPath::QueryProps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_REVERSEPOSITIONQUERY_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

