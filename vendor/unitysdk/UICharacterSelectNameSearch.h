#pragma once
#include "unitysdk.h"

class UIScrollView;
class NameSearchService;

#define UICHARACTERSELECTNAMESEARCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x26426F0)
#define UICHARACTERSELECTNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET UNITYSDK_OFFSET(0x2642700)
#define UICHARACTERSELECTNAMESEARCH_CREATESEARCHSERVICE_OFFSET UNITYSDK_OFFSET(0x2642790)

	inline static constexpr unsigned int UICharacterSelectNameSearch_TypeDefinitionIndex = 6611;

	class UICharacterSelectNameSearch : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSELECTNAMESEARCH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SyncScrollViewPositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSELECTNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET))(nullptr);
		}

		NameSearchService* CreateSearchService()
		{
			return ((NameSearchService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSELECTNAMESEARCH_CREATESEARCHSERVICE_OFFSET))(nullptr);
		}

	};

