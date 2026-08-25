#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::Cache { class XPathNodeInfoAtom; }
namespace MS::Internal::Xml::Cache { class XPathNodePageInfo; }

#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x99555A0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x99557B0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x99555F0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9955700)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x9955650)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x9955970)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x99558C0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x9958250)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x9958350)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_COLLAPSEDLINEPOSITION_OFFSET UNITYSDK_OFFSET(0x9958320)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_PAGEINFO_OFFSET UNITYSDK_OFFSET(0x99583C0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GETROOT_OFFSET UNITYSDK_OFFSET(0x9956930)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GETPARENT_OFFSET UNITYSDK_OFFSET(0x99558E0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GETSIBLING_OFFSET UNITYSDK_OFFSET(0x99560E0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GETSIMILARELEMENT_OFFSET UNITYSDK_OFFSET(0x99583E0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_NAMEMATCH_OFFSET UNITYSDK_OFFSET(0x9958420)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_ELEMENTMATCH_OFFSET UNITYSDK_OFFSET(0x9958380)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_ISXMLNAMESPACENODE_OFFSET UNITYSDK_OFFSET(0x9956070)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASSIBLING_OFFSET UNITYSDK_OFFSET(0x9958460)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASCOLLAPSEDTEXT_OFFSET UNITYSDK_OFFSET(0x99564C0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9958470)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASCONTENTCHILD_OFFSET UNITYSDK_OFFSET(0x9958480)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASELEMENTCHILD_OFFSET UNITYSDK_OFFSET(0x9958490)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_ISATTRNMSP_OFFSET UNITYSDK_OFFSET(0x99584A0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x99584C0)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASNAMESPACEDECLS_OFFSET UNITYSDK_OFFSET(0x9958510)
#define MS_INTERNAL_XML_CACHE_XPATHNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9958520)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNode_TypeDefinitionIndex = 28327;

	class XPathNode : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::Cache::XPathNodeInfoAtom* _info; // 0x10
		::System::UInt16 _idxSibling; // 0x18
		::System::UInt16 _idxParent; // 0x1A
		::System::UInt16 _idxSimilar; // 0x1C
		::System::UInt16 _posOffset; // 0x1E
		::System::UInt32 _props; // 0x20
		::System::String* _value; // 0x28

		::System::Xml::XPath::XPathNodeType* get_NodeType()
		{
			return (return (::System::Xml::XPath::XPathNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_NamespaceUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_NAMESPACEURI_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathDocument* get_Document()
		{
			return (return (::System::Xml::XPath::XPathDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_DOCUMENT_OFFSET))(nullptr);
		}

		::System::String* get_BaseUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_BASEURI_OFFSET))(nullptr);
		}

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 get_CollapsedLinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_COLLAPSEDLINEPOSITION_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::Cache::XPathNodePageInfo* get_PageInfo()
		{
			return (return (::MS::Internal::Xml::Cache::XPathNodePageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_PAGEINFO_OFFSET))(nullptr);
		}

		::System::Int32 GetRoot(::System::Object[]&* arg)
		{
			return (return (::System::Int32(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GETROOT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetParent(::System::Object[]&* arg)
		{
			return (return (::System::Int32(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GETPARENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSibling(::System::Object[]&* arg)
		{
			return (return (::System::Int32(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GETSIBLING_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSimilarElement(::System::Object[]&* arg)
		{
			return (return (::System::Int32(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GETSIMILARELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean NameMatch(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_NAMEMATCH_OFFSET))(str, str, nullptr);
		}

		::System::Boolean ElementMatch(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_ELEMENTMATCH_OFFSET))(str, str, nullptr);
		}

		::System::Boolean get_IsXmlNamespaceNode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_ISXMLNAMESPACENODE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasSibling()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASSIBLING_OFFSET))(nullptr);
		}

		::System::Boolean get_HasCollapsedText()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASCOLLAPSEDTEXT_OFFSET))(nullptr);
		}

		::System::Boolean get_HasAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasContentChild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASCONTENTCHILD_OFFSET))(nullptr);
		}

		::System::Boolean get_HasElementChild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASELEMENTCHILD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAttrNmsp()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_ISATTRNMSP_OFFSET))(nullptr);
		}

		::System::Boolean get_IsText()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_ISTEXT_OFFSET))(nullptr);
		}

		::System::Boolean get_HasNamespaceDecls()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_HASNAMESPACEDECLS_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODE_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

