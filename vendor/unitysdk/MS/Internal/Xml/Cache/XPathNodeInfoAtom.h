#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::Cache { class XPathNodePageInfo; }

#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_PAGEINFO_OFFSET UNITYSDK_OFFSET(0x9958650)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x9958660)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x9958670)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x9958680)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x9958690)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_SIBLINGPAGE_OFFSET UNITYSDK_OFFSET(0x99586A0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_SIMILARELEMENTPAGE_OFFSET UNITYSDK_OFFSET(0x99586B0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_PARENTPAGE_OFFSET UNITYSDK_OFFSET(0x99586C0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x99586D0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_LINENUMBERBASE_OFFSET UNITYSDK_OFFSET(0x99586E0)
#define MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_LINEPOSITIONBASE_OFFSET UNITYSDK_OFFSET(0x99586F0)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNodeInfoAtom_TypeDefinitionIndex = 28331;

	class XPathNodeInfoAtom : public Il2CppObject
	{
	public:
		::System::String* _localName; // 0x10
		::System::String* _namespaceUri; // 0x18
		::System::String* _prefix; // 0x20
		::System::String* _baseUri; // 0x28
		::Il2CppArray<::System::Object*>* _pageParent; // 0x30
		::Il2CppArray<::System::Object*>* _pageSibling; // 0x38
		::Il2CppArray<::System::Object*>* _pageSimilar; // 0x40
		::System::Xml::XPath::XPathDocument* _doc; // 0x48
		::System::Int32 _lineNumBase; // 0x50
		::System::Int32 _linePosBase; // 0x54
		::MS::Internal::Xml::Cache::XPathNodePageInfo* _pageInfo; // 0x58

		::MS::Internal::Xml::Cache::XPathNodePageInfo* get_PageInfo()
		{
			return (return (::MS::Internal::Xml::Cache::XPathNodePageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_PAGEINFO_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::String* get_NamespaceUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_NAMESPACEURI_OFFSET))(nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::String* get_BaseUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_BASEURI_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SiblingPage()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_SIBLINGPAGE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SimilarElementPage()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_SIMILARELEMENTPAGE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ParentPage()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_PARENTPAGE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathDocument* get_Document()
		{
			return (return (::System::Xml::XPath::XPathDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_DOCUMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_LineNumberBase()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_LINENUMBERBASE_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePositionBase()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEINFOATOM_GET_LINEPOSITIONBASE_OFFSET))(nullptr);
		}

	};
}

