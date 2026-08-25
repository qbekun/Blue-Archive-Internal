#pragma once
#include "unitysdk.h"

class UIScrollView;
class NameSearchService;

#define UIFORMATIONNAMESEARCH_CREATESEARCHSERVICE_OFFSET UNITYSDK_OFFSET(0x2545310)
#define UIFORMATIONNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET UNITYSDK_OFFSET(0x2545780)
#define UIFORMATIONNAMESEARCH_TABCHANGE_OFFSET UNITYSDK_OFFSET(0x2545890)
#define UIFORMATIONNAMESEARCH_ONSEARCHRESET_OFFSET UNITYSDK_OFFSET(0x25458A0)
#define UIFORMATIONNAMESEARCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x2545990)
#define UIFORMATIONNAMESEARCH_GETMYCHARACTERLIST_OFFSET UNITYSDK_OFFSET(0x2545580)
#define UIFORMATIONNAMESEARCH_GETASSISTCHARACTERLIST_OFFSET UNITYSDK_OFFSET(0x25453A0)

	inline static constexpr unsigned int UIFormationNameSearch_TypeDefinitionIndex = 6070;

	class UIFormationNameSearch : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x70
		UIScrollView* scrollViewSmall; // 0x78
		::Il2CppArray<::System::Object*>* anchorChainTargetRects; // 0x80
		::System::Int32 _currentTabIndex; // 0x88
		::System::Boolean _needToForceAnchorUpdate; // 0x8C

		NameSearchService* CreateSearchService()
		{
			return ((NameSearchService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONNAMESEARCH_CREATESEARCHSERVICE_OFFSET))(nullptr);
		}

		::System::Void SyncScrollViewPositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET))(nullptr);
		}

		::System::Void TabChange(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONNAMESEARCH_TABCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSearchReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONNAMESEARCH_ONSEARCHRESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONNAMESEARCH_.CTOR_OFFSET))(nullptr);
		}

		NameSearchService* GetMyCharacterList()
		{
			return ((NameSearchService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONNAMESEARCH_GETMYCHARACTERLIST_OFFSET))(nullptr);
		}

		NameSearchService* GetAssistCharacterList()
		{
			return ((NameSearchService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONNAMESEARCH_GETASSISTCHARACTERLIST_OFFSET))(nullptr);
		}

	};

