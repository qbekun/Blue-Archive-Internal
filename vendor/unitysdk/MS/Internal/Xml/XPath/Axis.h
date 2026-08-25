#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class AstNode; }

#define MS_INTERNAL_XML_XPATH_AXIS_.CTOR_OFFSET UNITYSDK_OFFSET(0x993C9B0)
#define MS_INTERNAL_XML_XPATH_AXIS_.CTOR_OFFSET UNITYSDK_OFFSET(0x993CA60)
#define MS_INTERNAL_XML_XPATH_AXIS_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x993CB30)
#define MS_INTERNAL_XML_XPATH_AXIS_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x993CB40)
#define MS_INTERNAL_XML_XPATH_AXIS_GET_INPUT_OFFSET UNITYSDK_OFFSET(0x993CB50)
#define MS_INTERNAL_XML_XPATH_AXIS_SET_INPUT_OFFSET UNITYSDK_OFFSET(0x993CB60)
#define MS_INTERNAL_XML_XPATH_AXIS_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x993CB70)
#define MS_INTERNAL_XML_XPATH_AXIS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x993CB80)
#define MS_INTERNAL_XML_XPATH_AXIS_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x993CB90)
#define MS_INTERNAL_XML_XPATH_AXIS_GET_TYPEOFAXIS_OFFSET UNITYSDK_OFFSET(0x993CBA0)
#define MS_INTERNAL_XML_XPATH_AXIS_GET_ABBRAXIS_OFFSET UNITYSDK_OFFSET(0x993CBB0)
#define MS_INTERNAL_XML_XPATH_AXIS_GET_URN_OFFSET UNITYSDK_OFFSET(0x993CBC0)
#define MS_INTERNAL_XML_XPATH_AXIS_SET_URN_OFFSET UNITYSDK_OFFSET(0x993CBD0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Axis_TypeDefinitionIndex = 28250;

	class Axis : public WorldUpType
	{
	public:
		AxisType* _axisType; // 0x10
		::MS::Internal::Xml::XPath::AstNode* _input; // 0x18
		::System::String* _prefix; // 0x20
		::System::String* _name; // 0x28
		::System::Xml::XPath::XPathNodeType* _nodeType; // 0x30
		::System::Boolean abbrAxis; // 0x34
		::System::String* _urn; // 0x38

		::System::Void .ctor(AxisType* arg, ::MS::Internal::Xml::XPath::AstNode* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg)
		{
			((::System::Void(*)(AxisType*, ::MS::Internal::Xml::XPath::AstNode*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS_.CTOR_OFFSET))(arg, arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(AxisType* arg, ::MS::Internal::Xml::XPath::AstNode* arg)
		{
			((::System::Void(*)(AxisType*, ::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		AstType* get_Type()
		{
			return (return (AstType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_ReturnType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* get_Input()
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS_GET_INPUT_OFFSET))(nullptr);
		}

		::System::Void set_Input(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS_SET_INPUT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS_GET_NAME_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeType* get_NodeType()
		{
			return (return (::System::Xml::XPath::XPathNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS_GET_NODETYPE_OFFSET))(nullptr);
		}

		AxisType* get_TypeOfAxis()
		{
			return (return (AxisType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS_GET_TYPEOFAXIS_OFFSET))(nullptr);
		}

		::System::Boolean get_AbbrAxis()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS_GET_ABBRAXIS_OFFSET))(nullptr);
		}

		::System::String* get_Urn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS_GET_URN_OFFSET))(nullptr);
		}

		::System::Void set_Urn(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_AXIS_SET_URN_OFFSET))(str, nullptr);
		}

	};
}

