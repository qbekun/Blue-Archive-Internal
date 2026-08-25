#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class NumericExpr; }

#define MS_INTERNAL_XML_XPATH_NUMERICEXPR_.CTOR_OFFSET UNITYSDK_OFFSET(0x99480E0)
#define MS_INTERNAL_XML_XPATH_NUMERICEXPR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9948210)
#define MS_INTERNAL_XML_XPATH_NUMERICEXPR_SETXSLTCONTEXT_OFFSET UNITYSDK_OFFSET(0x9948280)
#define MS_INTERNAL_XML_XPATH_NUMERICEXPR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x99482E0)
#define MS_INTERNAL_XML_XPATH_NUMERICEXPR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9948410)
#define MS_INTERNAL_XML_XPATH_NUMERICEXPR_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x9948450)
#define MS_INTERNAL_XML_XPATH_NUMERICEXPR_CLONE_OFFSET UNITYSDK_OFFSET(0x9948460)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int NumericExpr_TypeDefinitionIndex = 28287;

	class NumericExpr : public Il2CppObject
	{
	public:
		Op* _op; // 0x18
		::MS::Internal::Xml::XPath::Query* _opnd1; // 0x20
		::MS::Internal::Xml::XPath::Query* _opnd2; // 0x28

		::System::Void .ctor(Op* arg, ::MS::Internal::Xml::XPath::Query* arg, ::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(Op*, ::MS::Internal::Xml::XPath::Query*, ::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMERICEXPR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::NumericExpr* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::NumericExpr*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMERICEXPR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetXsltContext(::System::Xml::Xsl::XsltContext* arg)
		{
			((::System::Void(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMERICEXPR_SETXSLTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMERICEXPR_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Double GetValue(Op* arg, ::System::Double arg, ::System::Double arg)
		{
			return (return (::System::Double(*)(Op*, ::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMERICEXPR_GETVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMERICEXPR_GET_STATICTYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NUMERICEXPR_CLONE_OFFSET))(nullptr);
		}

	};
}

