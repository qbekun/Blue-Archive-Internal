#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_VALIDATINGREADERNODEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x995ACB0)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x995ADB0)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x995ADE0)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x995ADF0)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x995AE00)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x995AE10)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x995AE20)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SET_PREFIX_OFFSET UNITYSDK_OFFSET(0x995AE30)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_GETATOMIZEDNAMEWPREFIX_OFFSET UNITYSDK_OFFSET(0x995AE40)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x995AEE0)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0x995AEF0)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x995AF00)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x995AF10)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_ORIGINALSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x995AF20)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x995AF30)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x995AF40)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_ATTINFO_OFFSET UNITYSDK_OFFSET(0x995AF50)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SET_ATTINFO_OFFSET UNITYSDK_OFFSET(0x995AF60)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x995AF70)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x995AF80)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x995ACD0)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x995AF90)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x995AFA0)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0x995B0B0)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0x995B150)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0x995B190)

namespace System::Xml
{
	inline static constexpr unsigned int ValidatingReaderNodeData_TypeDefinitionIndex = 27663;

	class ValidatingReaderNodeData : public Il2CppObject
	{
	public:
		::System::String* localName; // 0x10
		::System::String* namespaceUri; // 0x18
		::System::String* prefix; // 0x20
		::System::String* nameWPrefix; // 0x28
		::System::String* rawValue; // 0x30
		::System::String* originalStringValue; // 0x38
		::System::Int32 depth; // 0x40
		::System::Xml::AttributePSVIInfo* attributePSVIInfo; // 0x48
		::System::Xml::XmlNodeType* nodeType; // 0x50
		::System::Int32 lineNo; // 0x54
		::System::Int32 linePos; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::XmlNodeType* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::Void set_LocalName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SET_LOCALNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Void set_Namespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SET_NAMESPACE_OFFSET))(str, nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::Void set_Prefix(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SET_PREFIX_OFFSET))(str, nullptr);
		}

		::System::String* GetAtomizedNameWPrefix(::System::Xml::XmlNameTable* arg)
		{
			return (return (::System::String*(*)(::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_GETATOMIZEDNAMEWPREFIX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Depth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_DEPTH_OFFSET))(nullptr);
		}

		::System::Void set_Depth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SET_DEPTH_OFFSET))(arg, nullptr);
		}

		::System::String* get_RawValue()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_RAWVALUE_OFFSET))(nullptr);
		}

		::System::Void set_RawValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SET_RAWVALUE_OFFSET))(str, nullptr);
		}

		::System::String* get_OriginalStringValue()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_ORIGINALSTRINGVALUE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Void set_NodeType(::System::Xml::XmlNodeType* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SET_NODETYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::AttributePSVIInfo* get_AttInfo()
		{
			return (return (::System::Xml::AttributePSVIInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_ATTINFO_OFFSET))(nullptr);
		}

		::System::Void set_AttInfo(::System::Xml::AttributePSVIInfo* arg)
		{
			((::System::Void(*)(::System::Xml::AttributePSVIInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SET_ATTINFO_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::Void Clear(::System::Xml::XmlNodeType* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void SetLineInfo(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SETLINEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLineInfo(::System::Xml::IXmlLineInfo* arg)
		{
			((::System::Void(*)(::System::Xml::IXmlLineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SETLINEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetItemData(::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SETITEMDATA_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Void SetItemData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SETITEMDATA_OFFSET))(str, nullptr);
		}

		::System::Void SetItemData(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SETITEMDATA_OFFSET))(str, str, nullptr);
		}

	};
}

