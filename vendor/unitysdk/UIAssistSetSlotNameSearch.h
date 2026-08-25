#pragma once
#include "unitysdk.h"

class UIScrollView;
class NameSearchService;

#define UIASSISTSETSLOTNAMESEARCH_CREATESEARCHSERVICE_OFFSET UNITYSDK_OFFSET(0x220D180)
#define UIASSISTSETSLOTNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET UNITYSDK_OFFSET(0x220D380)
#define UIASSISTSETSLOTNAMESEARCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x220D460)

	inline static constexpr unsigned int UIAssistSetSlotNameSearch_TypeDefinitionIndex = 4358;

	class UIAssistSetSlotNameSearch : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x70
		UIScrollView* scrollViewSmall; // 0x78

		NameSearchService* CreateSearchService()
		{
			return ((NameSearchService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOTNAMESEARCH_CREATESEARCHSERVICE_OFFSET))(nullptr);
		}

		::System::Void SyncScrollViewPositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOTNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSISTSETSLOTNAMESEARCH_.CTOR_OFFSET))(nullptr);
		}

	};

