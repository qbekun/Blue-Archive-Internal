#pragma once
#include "../../../../unitysdk.h"

#define MS_INTERNAL_XML_CACHE_XPATHNODEPAGEINFO_GET_PAGENUMBER_OFFSET UNITYSDK_OFFSET(0x9958620)
#define MS_INTERNAL_XML_CACHE_XPATHNODEPAGEINFO_GET_NODECOUNT_OFFSET UNITYSDK_OFFSET(0x9958630)
#define MS_INTERNAL_XML_CACHE_XPATHNODEPAGEINFO_GET_NEXTPAGE_OFFSET UNITYSDK_OFFSET(0x9958640)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNodePageInfo_TypeDefinitionIndex = 28330;

	class XPathNodePageInfo : public Il2CppObject
	{
	public:
		::System::Int32 _pageNum; // 0x10
		::System::Int32 _nodeCount; // 0x14
		::Il2CppArray<::System::Object*>* _pageNext; // 0x18

		::System::Int32 get_PageNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEPAGEINFO_GET_PAGENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_NodeCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEPAGEINFO_GET_NODECOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_NextPage()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEPAGEINFO_GET_NEXTPAGE_OFFSET))(nullptr);
		}

	};
}

