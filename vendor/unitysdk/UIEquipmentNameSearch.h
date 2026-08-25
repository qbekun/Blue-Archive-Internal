#pragma once
#include "unitysdk.h"

class UIScrollView;
class NameSearchService;

#define UIEQUIPMENTNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET UNITYSDK_OFFSET(0x241BDD0)
#define UIEQUIPMENTNAMESEARCH_CREATESEARCHSERVICE_OFFSET UNITYSDK_OFFSET(0x241BE60)
#define UIEQUIPMENTNAMESEARCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x241C060)

	inline static constexpr unsigned int UIEquipmentNameSearch_TypeDefinitionIndex = 5488;

	class UIEquipmentNameSearch : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x70

		::System::Void SyncScrollViewPositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET))(nullptr);
		}

		NameSearchService* CreateSearchService()
		{
			return ((NameSearchService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTNAMESEARCH_CREATESEARCHSERVICE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTNAMESEARCH_.CTOR_OFFSET))(nullptr);
		}

	};

