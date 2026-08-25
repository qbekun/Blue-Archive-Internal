#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class LogicalExpr; }

#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9942DA0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9942DF0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_SETXSLTCONTEXT_OFFSET UNITYSDK_OFFSET(0x9942E60)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9942EC0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPQUERYQUERYE_OFFSET UNITYSDK_OFFSET(0x99431E0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPQUERYQUERYO_OFFSET UNITYSDK_OFFSET(0x9943500)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPQUERYNUMBER_OFFSET UNITYSDK_OFFSET(0x9943860)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPQUERYSTRINGE_OFFSET UNITYSDK_OFFSET(0x9943A40)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPQUERYSTRINGO_OFFSET UNITYSDK_OFFSET(0x9943B90)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFQUERYE_OFFSET UNITYSDK_OFFSET(0x9943DF0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFQUERYO_OFFSET UNITYSDK_OFFSET(0x9944000)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPQUERYBOOLE_OFFSET UNITYSDK_OFFSET(0x9944260)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPQUERYBOOLO_OFFSET UNITYSDK_OFFSET(0x9944380)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPBOOLBOOLE_OFFSET UNITYSDK_OFFSET(0x9944360)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPBOOLBOOLE_OFFSET UNITYSDK_OFFSET(0x9944500)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPBOOLBOOLO_OFFSET UNITYSDK_OFFSET(0x99445D0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPBOOLNUMBERE_OFFSET UNITYSDK_OFFSET(0x9944720)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPBOOLNUMBERO_OFFSET UNITYSDK_OFFSET(0x99448A0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPBOOLSTRINGE_OFFSET UNITYSDK_OFFSET(0x99449E0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFBOOLE_OFFSET UNITYSDK_OFFSET(0x9944AC0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPBOOLSTRINGO_OFFSET UNITYSDK_OFFSET(0x9944C00)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFBOOLO_OFFSET UNITYSDK_OFFSET(0x9944D70)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPNUMBERNUMBER_OFFSET UNITYSDK_OFFSET(0x9943800)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPNUMBERNUMBERO_OFFSET UNITYSDK_OFFSET(0x9943DB0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPNUMBERNUMBER_OFFSET UNITYSDK_OFFSET(0x9944F30)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPSTRINGNUMBER_OFFSET UNITYSDK_OFFSET(0x9945060)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFNUMBER_OFFSET UNITYSDK_OFFSET(0x99451E0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPSTRINGSTRINGE_OFFSET UNITYSDK_OFFSET(0x9943B60)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPSTRINGSTRINGE_OFFSET UNITYSDK_OFFSET(0x99453A0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFSTRINGE_OFFSET UNITYSDK_OFFSET(0x9945450)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFRTFE_OFFSET UNITYSDK_OFFSET(0x99455A0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPSTRINGSTRINGO_OFFSET UNITYSDK_OFFSET(0x9945710)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFSTRINGO_OFFSET UNITYSDK_OFFSET(0x99458A0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFRTFO_OFFSET UNITYSDK_OFFSET(0x9945AA0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_CLONE_OFFSET UNITYSDK_OFFSET(0x9945CC0)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_RTF_OFFSET UNITYSDK_OFFSET(0x9943F80)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x9945D60)
#define MS_INTERNAL_XML_XPATH_LOGICALEXPR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9945D70)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int LogicalExpr_TypeDefinitionIndex = 28282;

	class LogicalExpr : public Il2CppObject
	{
	public:
		Op* _op; // 0x18
		::MS::Internal::Xml::XPath::Query* _opnd1; // 0x20
		::MS::Internal::Xml::XPath::Query* _opnd2; // 0x28
		::Il2CppArray<::System::Object*>* s_CompXsltE; // 0x0
		::Il2CppArray<::System::Object*>* s_CompXsltO; // 0x8

		::System::Void .ctor(Op* arg, ::MS::Internal::Xml::XPath::Query* arg, ::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(Op*, ::MS::Internal::Xml::XPath::Query*, ::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::LogicalExpr* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::LogicalExpr*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetXsltContext(::System::Xml::Xsl::XsltContext* arg)
		{
			((::System::Void(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_SETXSLTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean cmpQueryQueryE(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPQUERYQUERYE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpQueryQueryO(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPQUERYQUERYO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpQueryNumber(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPQUERYNUMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpQueryStringE(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPQUERYSTRINGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpQueryStringO(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPQUERYSTRINGO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpRtfQueryE(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFQUERYE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpRtfQueryO(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFQUERYO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpQueryBoolE(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPQUERYBOOLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpQueryBoolO(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPQUERYBOOLO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpBoolBoolE(Op* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPBOOLBOOLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpBoolBoolE(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPBOOLBOOLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpBoolBoolO(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPBOOLBOOLO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpBoolNumberE(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPBOOLNUMBERE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpBoolNumberO(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPBOOLNUMBERO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpBoolStringE(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPBOOLSTRINGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpRtfBoolE(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFBOOLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpBoolStringO(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPBOOLSTRINGO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpRtfBoolO(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFBOOLO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpNumberNumber(Op* arg, ::System::Double arg, ::System::Double arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPNUMBERNUMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpNumberNumberO(Op* arg, ::System::Double arg, ::System::Double arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPNUMBERNUMBERO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpNumberNumber(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPNUMBERNUMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpStringNumber(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPSTRINGNUMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpRtfNumber(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFNUMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpStringStringE(Op* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(Op*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPSTRINGSTRINGE_OFFSET))(arg, str, str, nullptr);
		}

		::System::Boolean cmpStringStringE(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPSTRINGSTRINGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpRtfStringE(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFSTRINGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpRtfRtfE(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFRTFE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpStringStringO(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPSTRINGSTRINGO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpRtfStringO(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFSTRINGO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean cmpRtfRtfO(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CMPRTFRTFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_CLONE_OFFSET))(nullptr);
		}

		::System::String* Rtf(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_RTF_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_GET_STATICTYPE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_LOGICALEXPR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

