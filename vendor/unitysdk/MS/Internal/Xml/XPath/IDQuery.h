#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class IDQuery; }

#define MS_INTERNAL_XML_XPATH_IDQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x99427C0)
#define MS_INTERNAL_XML_XPATH_IDQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x99427D0)
#define MS_INTERNAL_XML_XPATH_IDQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x99427E0)
#define MS_INTERNAL_XML_XPATH_IDQUERY_PROCESSIDS_OFFSET UNITYSDK_OFFSET(0x9942AA0)
#define MS_INTERNAL_XML_XPATH_IDQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x9942B60)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int IDQuery_TypeDefinitionIndex = 28278;

	class IDQuery : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_IDQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::IDQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::IDQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_IDQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_IDQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessIds(::System::Xml::XPath::XPathNavigator* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XPath::XPathNavigator*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_IDQUERY_PROCESSIDS_OFFSET))(arg, str, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_IDQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

