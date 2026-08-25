#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class BooleanExpr; }

#define MS_INTERNAL_XML_XPATH_BOOLEANEXPR_.CTOR_OFFSET UNITYSDK_OFFSET(0x993CED0)
#define MS_INTERNAL_XML_XPATH_BOOLEANEXPR_.CTOR_OFFSET UNITYSDK_OFFSET(0x993D050)
#define MS_INTERNAL_XML_XPATH_BOOLEANEXPR_SETXSLTCONTEXT_OFFSET UNITYSDK_OFFSET(0x993D0C0)
#define MS_INTERNAL_XML_XPATH_BOOLEANEXPR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x993D120)
#define MS_INTERNAL_XML_XPATH_BOOLEANEXPR_CLONE_OFFSET UNITYSDK_OFFSET(0x993D1F0)
#define MS_INTERNAL_XML_XPATH_BOOLEANEXPR_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x993D290)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int BooleanExpr_TypeDefinitionIndex = 28252;

	class BooleanExpr : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::XPath::Query* _opnd1; // 0x18
		::MS::Internal::Xml::XPath::Query* _opnd2; // 0x20
		::System::Boolean _isOr; // 0x28

		::System::Void .ctor(Op* arg, ::MS::Internal::Xml::XPath::Query* arg, ::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(Op*, ::MS::Internal::Xml::XPath::Query*, ::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANEXPR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::BooleanExpr* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::BooleanExpr*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANEXPR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetXsltContext(::System::Xml::Xsl::XsltContext* arg)
		{
			((::System::Void(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANEXPR_SETXSLTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANEXPR_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANEXPR_CLONE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_BOOLEANEXPR_GET_STATICTYPE_OFFSET))(nullptr);
		}

	};
}

