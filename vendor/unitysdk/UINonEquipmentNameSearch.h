#pragma once
#include "unitysdk.h"

class UIScrollView;
class NameSearchService;

#define UINONEQUIPMENTNAMESEARCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x26B9B30)
#define UINONEQUIPMENTNAMESEARCH_CREATESEARCHSERVICE_OFFSET UNITYSDK_OFFSET(0x26B9BA0)
#define UINONEQUIPMENTNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET UNITYSDK_OFFSET(0x26B9D80)

	inline static constexpr unsigned int UINonEquipmentNameSearch_TypeDefinitionIndex = 6913;

	class UINonEquipmentNameSearch : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTNAMESEARCH_.CTOR_OFFSET))(nullptr);
		}

		NameSearchService* CreateSearchService()
		{
			return ((NameSearchService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTNAMESEARCH_CREATESEARCHSERVICE_OFFSET))(nullptr);
		}

		::System::Void SyncScrollViewPositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET))(nullptr);
		}

	};

