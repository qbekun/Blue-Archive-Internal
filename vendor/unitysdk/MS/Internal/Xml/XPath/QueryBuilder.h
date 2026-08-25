#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class BaseAxisQuery; }
namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class Axis; }
namespace MS::Internal::Xml::XPath { class Filter; }
namespace MS::Internal::Xml::XPath { class Operator; }
namespace MS::Internal::Xml::XPath { class Variable; }
namespace MS::Internal::Xml::XPath { class Function; }
namespace MS::Internal::Xml::XPath { class AstNode; }

#define MS_INTERNAL_XML_XPATH_QUERYBUILDER_RESET_OFFSET UNITYSDK_OFFSET(0x99498B0)
#define MS_INTERNAL_XML_XPATH_QUERYBUILDER_PROCESSAXIS_OFFSET UNITYSDK_OFFSET(0x99498C0)
#define MS_INTERNAL_XML_XPATH_QUERYBUILDER_CANBENUMBER_OFFSET UNITYSDK_OFFSET(0x994A520)
#define MS_INTERNAL_XML_XPATH_QUERYBUILDER_PROCESSFILTER_OFFSET UNITYSDK_OFFSET(0x994A570)
#define MS_INTERNAL_XML_XPATH_QUERYBUILDER_PROCESSOPERATOR_OFFSET UNITYSDK_OFFSET(0x994AB80)
#define MS_INTERNAL_XML_XPATH_QUERYBUILDER_PROCESSVARIABLE_OFFSET UNITYSDK_OFFSET(0x994ADB0)
#define MS_INTERNAL_XML_XPATH_QUERYBUILDER_PROCESSFUNCTION_OFFSET UNITYSDK_OFFSET(0x994AE80)
#define MS_INTERNAL_XML_XPATH_QUERYBUILDER_PROCESSARGUMENTS_OFFSET UNITYSDK_OFFSET(0x994B360)
#define MS_INTERNAL_XML_XPATH_QUERYBUILDER_PROCESSNODE_OFFSET UNITYSDK_OFFSET(0x994A140)
#define MS_INTERNAL_XML_XPATH_QUERYBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x994B530)
#define MS_INTERNAL_XML_XPATH_QUERYBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x994B580)
#define MS_INTERNAL_XML_XPATH_QUERYBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x994B750)
#define MS_INTERNAL_XML_XPATH_QUERYBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x994B7F0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int QueryBuilder_TypeDefinitionIndex = 28299;

	class QueryBuilder : public Il2CppObject
	{
	public:
		::System::String* _query; // 0x10
		::System::Boolean _allowVar; // 0x18
		::System::Boolean _allowKey; // 0x19
		::System::Boolean _allowCurrent; // 0x1A
		::System::Boolean _needContext; // 0x1B
		::MS::Internal::Xml::XPath::BaseAxisQuery* _firstInput; // 0x20
		::System::Int32 _parseDepth; // 0x28

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERYBUILDER_RESET_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::Query* ProcessAxis(::MS::Internal::Xml::XPath::Axis* arg, Flags* arg, Props&* arg)
		{
			return (return (::MS::Internal::Xml::XPath::Query*(*)(::MS::Internal::Xml::XPath::Axis*, Flags*, Props&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERYBUILDER_PROCESSAXIS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CanBeNumber(::MS::Internal::Xml::XPath::Query* arg)
		{
			return (return (::System::Boolean(*)(::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERYBUILDER_CANBENUMBER_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::Query* ProcessFilter(::MS::Internal::Xml::XPath::Filter* arg, Flags* arg, Props&* arg)
		{
			return (return (::MS::Internal::Xml::XPath::Query*(*)(::MS::Internal::Xml::XPath::Filter*, Flags*, Props&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERYBUILDER_PROCESSFILTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::MS::Internal::Xml::XPath::Query* ProcessOperator(::MS::Internal::Xml::XPath::Operator* arg, Props&* arg)
		{
			return (return (::MS::Internal::Xml::XPath::Query*(*)(::MS::Internal::Xml::XPath::Operator*, Props&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERYBUILDER_PROCESSOPERATOR_OFFSET))(arg, arg, nullptr);
		}

		::MS::Internal::Xml::XPath::Query* ProcessVariable(::MS::Internal::Xml::XPath::Variable* arg)
		{
			return (return (::MS::Internal::Xml::XPath::Query*(*)(::MS::Internal::Xml::XPath::Variable*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERYBUILDER_PROCESSVARIABLE_OFFSET))(arg, nullptr);
		}

		::MS::Internal::Xml::XPath::Query* ProcessFunction(::MS::Internal::Xml::XPath::Function* arg, Props&* arg)
		{
			return (return (::MS::Internal::Xml::XPath::Query*(*)(::MS::Internal::Xml::XPath::Function*, Props&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERYBUILDER_PROCESSFUNCTION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ProcessArguments(Il2CppObject* arg, Props&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Props&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERYBUILDER_PROCESSARGUMENTS_OFFSET))(arg, arg, nullptr);
		}

		::MS::Internal::Xml::XPath::Query* ProcessNode(::MS::Internal::Xml::XPath::AstNode* arg, Flags* arg, Props&* arg)
		{
			return (return (::MS::Internal::Xml::XPath::Query*(*)(::MS::Internal::Xml::XPath::AstNode*, Flags*, Props&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERYBUILDER_PROCESSNODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::MS::Internal::Xml::XPath::Query* Build(::MS::Internal::Xml::XPath::AstNode* arg, ::System::String* str)
		{
			return (return (::MS::Internal::Xml::XPath::Query*(*)(::MS::Internal::Xml::XPath::AstNode*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERYBUILDER_BUILD_OFFSET))(arg, str, nullptr);
		}

		::MS::Internal::Xml::XPath::Query* Build(::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::MS::Internal::Xml::XPath::Query*(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERYBUILDER_BUILD_OFFSET))(str, arg, arg, nullptr);
		}

		::MS::Internal::Xml::XPath::Query* Build(::System::String* str, bool&* arg)
		{
			return (return (::MS::Internal::Xml::XPath::Query*(*)(::System::String*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERYBUILDER_BUILD_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERYBUILDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

