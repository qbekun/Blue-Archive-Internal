#pragma once
#include "../../../../unitysdk.h"

#define MS_INTERNAL_XML_CACHE_XPATHNODEREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x9958530)
#define MS_INTERNAL_XML_CACHE_XPATHNODEREF_GET_PAGE_OFFSET UNITYSDK_OFFSET(0x9958550)
#define MS_INTERNAL_XML_CACHE_XPATHNODEREF_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9958560)
#define MS_INTERNAL_XML_CACHE_XPATHNODEREF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9958570)

namespace MS::Internal::Xml::Cache
{
	inline static constexpr unsigned int XPathNodeRef_TypeDefinitionIndex = 28328;

	class XPathNodeRef : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _page; // 0x10
		::System::Int32 _idx; // 0x18

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEREF_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Page()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEREF_GET_PAGE_OFFSET))(nullptr);
		}

		::System::Int32 get_Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEREF_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_CACHE_XPATHNODEREF_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

