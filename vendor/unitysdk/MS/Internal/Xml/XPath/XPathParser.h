#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class XPathScanner; }
namespace MS::Internal::Xml::XPath { class AstNode; }

#define MS_INTERNAL_XML_XPATH_XPATHPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x994F590)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEXPATHEXPRESSION_OFFSET UNITYSDK_OFFSET(0x994B620)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x994F6A0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEOREXPR_OFFSET UNITYSDK_OFFSET(0x994F700)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEANDEXPR_OFFSET UNITYSDK_OFFSET(0x994F810)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEEQUALITYEXPR_OFFSET UNITYSDK_OFFSET(0x994F990)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSERELATIONALEXPR_OFFSET UNITYSDK_OFFSET(0x994FCC0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEADDITIVEEXPR_OFFSET UNITYSDK_OFFSET(0x994FEB0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEMULTIPLICATIVEEXPR_OFFSET UNITYSDK_OFFSET(0x994FF80)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEUNARYEXPR_OFFSET UNITYSDK_OFFSET(0x9950100)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEUNIONEXPR_OFFSET UNITYSDK_OFFSET(0x99501E0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_ISNODETYPE_OFFSET UNITYSDK_OFFSET(0x9950510)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEPATHEXPR_OFFSET UNITYSDK_OFFSET(0x9950330)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEFILTEREXPR_OFFSET UNITYSDK_OFFSET(0x9950680)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEPREDICATE_OFFSET UNITYSDK_OFFSET(0x9950CE0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSELOCATIONPATH_OFFSET UNITYSDK_OFFSET(0x99508C0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSERELATIVELOCATIONPATH_OFFSET UNITYSDK_OFFSET(0x9950800)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_ISSTEP_OFFSET UNITYSDK_OFFSET(0x9950E40)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSESTEP_OFFSET UNITYSDK_OFFSET(0x9950E70)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSENODETEST_OFFSET UNITYSDK_OFFSET(0x99511C0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_ISPRIMARYEXPR_OFFSET UNITYSDK_OFFSET(0x99505F0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEPRIMARYEXPR_OFFSET UNITYSDK_OFFSET(0x9950A00)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEMETHOD_OFFSET UNITYSDK_OFFSET(0x9951560)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_CHECKTOKEN_OFFSET UNITYSDK_OFFSET(0x9951500)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_PASSTOKEN_OFFSET UNITYSDK_OFFSET(0x9950DD0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_NEXTLEX_OFFSET UNITYSDK_OFFSET(0x994F970)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_TESTOP_OFFSET UNITYSDK_OFFSET(0x994F920)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_CHECKNODESET_OFFSET UNITYSDK_OFFSET(0x99504B0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_CREATEFUNCTIONTABLE_OFFSET UNITYSDK_OFFSET(0x9952200)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_CREATEAXESTABLE_OFFSET UNITYSDK_OFFSET(0x9953050)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_GETAXIS_OFFSET UNITYSDK_OFFSET(0x99510C0)
#define MS_INTERNAL_XML_XPATH_XPATHPARSER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x99532D0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int XPathParser_TypeDefinitionIndex = 28315;

	class XPathParser : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::XPath::XPathScanner* _scanner; // 0x10
		::System::Int32 _parseDepth; // 0x18
		::Il2CppArray<::System::Object*>* s_temparray1; // 0x0
		::Il2CppArray<::System::Object*>* s_temparray2; // 0x8
		::Il2CppArray<::System::Object*>* s_temparray3; // 0x10
		::Il2CppArray<::System::Object*>* s_temparray4; // 0x18
		::Il2CppArray<::System::Object*>* s_temparray5; // 0x20
		::Il2CppArray<::System::Object*>* s_temparray6; // 0x28
		::Il2CppArray<::System::Object*>* s_temparray7; // 0x30
		::Il2CppArray<::System::Object*>* s_temparray8; // 0x38
		::Il2CppArray<::System::Object*>* s_temparray9; // 0x40
		Il2CppObject* s_functionTable; // 0x48
		Il2CppObject* s_AxesTable; // 0x50

		::System::Void .ctor(::MS::Internal::Xml::XPath::XPathScanner* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::XPathScanner*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseXPathExpression(::System::String* str)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEXPATHEXPRESSION_OFFSET))(str, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseExpression(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEEXPRESSION_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseOrExpr(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEOREXPR_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseAndExpr(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEANDEXPR_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseEqualityExpr(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEEQUALITYEXPR_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseRelationalExpr(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSERELATIONALEXPR_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseAdditiveExpr(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEADDITIVEEXPR_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseMultiplicativeExpr(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEMULTIPLICATIVEEXPR_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseUnaryExpr(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEUNARYEXPR_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseUnionExpr(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEUNIONEXPR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNodeType(::MS::Internal::Xml::XPath::XPathScanner* arg)
		{
			return (return (::System::Boolean(*)(::MS::Internal::Xml::XPath::XPathScanner*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_ISNODETYPE_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParsePathExpr(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEPATHEXPR_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseFilterExpr(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEFILTEREXPR_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParsePredicate(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEPREDICATE_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseLocationPath(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSELOCATIONPATH_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseRelativeLocationPath(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSERELATIVELOCATIONPATH_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStep(LexKind* arg)
		{
			return (return (::System::Boolean(*)(LexKind*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_ISSTEP_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseStep(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSESTEP_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseNodeTest(::MS::Internal::Xml::XPath::AstNode* arg, AxisType* arg, ::System::Xml::XPath::XPathNodeType* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, AxisType*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSENODETEST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsPrimaryExpr(::MS::Internal::Xml::XPath::XPathScanner* arg)
		{
			return (return (::System::Boolean(*)(::MS::Internal::Xml::XPath::XPathScanner*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_ISPRIMARYEXPR_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParsePrimaryExpr(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEPRIMARYEXPR_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* ParseMethod(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PARSEMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Void CheckToken(LexKind* arg)
		{
			((::System::Void(*)(LexKind*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_CHECKTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void PassToken(LexKind* arg)
		{
			((::System::Void(*)(LexKind*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_PASSTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void NextLex()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_NEXTLEX_OFFSET))(nullptr);
		}

		::System::Boolean TestOp(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_TESTOP_OFFSET))(str, nullptr);
		}

		::System::Void CheckNodeSet(::System::Xml::XPath::XPathResultType* arg)
		{
			((::System::Void(*)(::System::Xml::XPath::XPathResultType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_CHECKNODESET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateFunctionTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_CREATEFUNCTIONTABLE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAxesTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_CREATEAXESTABLE_OFFSET))(nullptr);
		}

		AxisType* GetAxis()
		{
			return (return (AxisType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_GETAXIS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_XPATHPARSER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

