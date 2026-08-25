#pragma once
#include "unitysdk.h"

class UIScrollView;
class NameSearchService;

#define UIAUTOSELECTPRODUCTNAMESEARCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA7F710)
#define UIAUTOSELECTPRODUCTNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA7F720)
#define UIAUTOSELECTPRODUCTNAMESEARCH_PREPAREFOROPEN_OFFSET UNITYSDK_OFFSET(0xA7F7B0)
#define UIAUTOSELECTPRODUCTNAMESEARCH_CREATESEARCHSERVICE_OFFSET UNITYSDK_OFFSET(0xA7F9C0)

	inline static constexpr unsigned int UIAutoSelectProductNameSearch_TypeDefinitionIndex = 7896;

	class UIAutoSelectProductNameSearch : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x70
		NameSearchService* _cachedSearchService; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIAUTOSELECTPRODUCTNAMESEARCH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SyncScrollViewPositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIAUTOSELECTPRODUCTNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET))(nullptr);
		}

		::System::Void PrepareForOpen(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIAUTOSELECTPRODUCTNAMESEARCH_PREPAREFOROPEN_OFFSET))(arg, nullptr);
		}

		NameSearchService* CreateSearchService()
		{
			return ((NameSearchService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIAUTOSELECTPRODUCTNAMESEARCH_CREATESEARCHSERVICE_OFFSET))(nullptr);
		}

	};

