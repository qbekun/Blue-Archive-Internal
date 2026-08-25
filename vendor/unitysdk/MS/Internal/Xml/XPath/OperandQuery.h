#pragma once
#include "../../../../unitysdk.h"

#define MS_INTERNAL_XML_XPATH_OPERANDQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x99485F0)
#define MS_INTERNAL_XML_XPATH_OPERANDQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9948620)
#define MS_INTERNAL_XML_XPATH_OPERANDQUERY_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x9948630)
#define MS_INTERNAL_XML_XPATH_OPERANDQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x9948640)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int OperandQuery_TypeDefinitionIndex = 28289;

	class OperandQuery : public Il2CppObject
	{
	public:
		::System::Object* val; // 0x18

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERANDQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERANDQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERANDQUERY_GET_STATICTYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERANDQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

