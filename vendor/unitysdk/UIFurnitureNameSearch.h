#pragma once
#include "unitysdk.h"

class UIScrollView;
class NameSearchService;

#define UIFURNITURENAMESEARCH_CREATESEARCHSERVICE_OFFSET UNITYSDK_OFFSET(0x258A4B0)
#define UIFURNITURENAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET UNITYSDK_OFFSET(0x258A690)
#define UIFURNITURENAMESEARCH_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x2586C50)
#define UIFURNITURENAMESEARCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x258A720)

	inline static constexpr unsigned int UIFurnitureNameSearch_TypeDefinitionIndex = 6233;

	class UIFurnitureNameSearch : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x70

		NameSearchService* CreateSearchService()
		{
			return ((NameSearchService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURENAMESEARCH_CREATESEARCHSERVICE_OFFSET))(nullptr);
		}

		::System::Void SyncScrollViewPositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURENAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET))(nullptr);
		}

		::System::Void UpdateData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURENAMESEARCH_UPDATEDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURENAMESEARCH_.CTOR_OFFSET))(nullptr);
		}

	};

