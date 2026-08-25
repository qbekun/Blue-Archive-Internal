#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class AbsoluteQuery; }

#define MS_INTERNAL_XML_XPATH_ABSOLUTEQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993C430)
#define MS_INTERNAL_XML_XPATH_ABSOLUTEQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993C470)
#define MS_INTERNAL_XML_XPATH_ABSOLUTEQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x993C4F0)
#define MS_INTERNAL_XML_XPATH_ABSOLUTEQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x993C570)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int AbsoluteQuery_TypeDefinitionIndex = 28245;

	class AbsoluteQuery : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ABSOLUTEQUERY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::AbsoluteQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::AbsoluteQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ABSOLUTEQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ABSOLUTEQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ABSOLUTEQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

