#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class UnionExpr; }

#define MS_INTERNAL_XML_XPATH_UNIONEXPR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994AD60)
#define MS_INTERNAL_XML_XPATH_UNIONEXPR_.CTOR_OFFSET UNITYSDK_OFFSET(0x994DAE0)
#define MS_INTERNAL_XML_XPATH_UNIONEXPR_RESET_OFFSET UNITYSDK_OFFSET(0x994DC90)
#define MS_INTERNAL_XML_XPATH_UNIONEXPR_SETXSLTCONTEXT_OFFSET UNITYSDK_OFFSET(0x994DD00)
#define MS_INTERNAL_XML_XPATH_UNIONEXPR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x994DD60)
#define MS_INTERNAL_XML_XPATH_UNIONEXPR_PROCESSSAMEPOSITION_OFFSET UNITYSDK_OFFSET(0x994DDE0)
#define MS_INTERNAL_XML_XPATH_UNIONEXPR_PROCESSBEFOREPOSITION_OFFSET UNITYSDK_OFFSET(0x994DE10)
#define MS_INTERNAL_XML_XPATH_UNIONEXPR_PROCESSAFTERPOSITION_OFFSET UNITYSDK_OFFSET(0x994DE50)
#define MS_INTERNAL_XML_XPATH_UNIONEXPR_ADVANCE_OFFSET UNITYSDK_OFFSET(0x994DE90)
#define MS_INTERNAL_XML_XPATH_UNIONEXPR_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x994E000)
#define MS_INTERNAL_XML_XPATH_UNIONEXPR_CLONE_OFFSET UNITYSDK_OFFSET(0x994E010)
#define MS_INTERNAL_XML_XPATH_UNIONEXPR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x994E070)
#define MS_INTERNAL_XML_XPATH_UNIONEXPR_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x994E080)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int UnionExpr_TypeDefinitionIndex = 28304;

	class UnionExpr : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::XPath::Query* qy1; // 0x18
		::MS::Internal::Xml::XPath::Query* qy2; // 0x20
		::System::Boolean _advance1; // 0x28
		::System::Boolean _advance2; // 0x29
		::System::Xml::XPath::XPathNavigator* _currentNode; // 0x30
		::System::Xml::XPath::XPathNavigator* _nextNode; // 0x38

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_UNIONEXPR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::UnionExpr* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::UnionExpr*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_UNIONEXPR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_UNIONEXPR_RESET_OFFSET))(nullptr);
		}

		::System::Void SetXsltContext(::System::Xml::Xsl::XsltContext* arg)
		{
			((::System::Void(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_UNIONEXPR_SETXSLTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_UNIONEXPR_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* ProcessSamePosition(::System::Xml::XPath::XPathNavigator* arg)
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::System::Xml::XPath::XPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_UNIONEXPR_PROCESSSAMEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* ProcessBeforePosition(::System::Xml::XPath::XPathNavigator* arg, ::System::Xml::XPath::XPathNavigator* arg)
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::System::Xml::XPath::XPathNavigator*, ::System::Xml::XPath::XPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_UNIONEXPR_PROCESSBEFOREPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* ProcessAfterPosition(::System::Xml::XPath::XPathNavigator* arg, ::System::Xml::XPath::XPathNavigator* arg)
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::System::Xml::XPath::XPathNavigator*, ::System::Xml::XPath::XPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_UNIONEXPR_PROCESSAFTERPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_UNIONEXPR_ADVANCE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_UNIONEXPR_GET_STATICTYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_UNIONEXPR_CLONE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_UNIONEXPR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_UNIONEXPR_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

	};
}

