#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class CacheAxisQuery; }
namespace MS::Internal::Xml::XPath { class QueryProps; }

#define MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993D8B0)
#define MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993D960)
#define MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x993DA00)
#define MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x993DA10)
#define MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x993DAB0)
#define MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x993DB20)
#define MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x993DB80)
#define MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x993DB90)
#define MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x993DBD0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int CacheAxisQuery_TypeDefinitionIndex = 28254;

	class CacheAxisQuery : public ::TriInspector::HideLabelAttribute
	{
	public:
		Il2CppObject* outputBuffer; // 0x58

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::CacheAxisQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::CacheAxisQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_GET_COUNT_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::QueryProps* get_Properties()
		{
			return (return (::MS::Internal::Xml::XPath::QueryProps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEAXISQUERY_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

