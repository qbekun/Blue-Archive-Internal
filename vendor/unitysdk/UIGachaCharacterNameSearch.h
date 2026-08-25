#pragma once
#include "unitysdk.h"

class UIScrollView;
class NameSearchService;

#define UIGACHACHARACTERNAMESEARCH_SETCHARACTERPOOL_OFFSET UNITYSDK_OFFSET(0xA94CE0)
#define UIGACHACHARACTERNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA94EF0)
#define UIGACHACHARACTERNAMESEARCH_CREATESEARCHSERVICE_OFFSET UNITYSDK_OFFSET(0xA94F80)
#define UIGACHACHARACTERNAMESEARCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA95060)

	inline static constexpr unsigned int UIGachaCharacterNameSearch_TypeDefinitionIndex = 7944;

	class UIGachaCharacterNameSearch : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x70
		NameSearchService* _cachedSearchService; // 0x78

		::System::Void SetCharacterPool(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHACHARACTERNAMESEARCH_SETCHARACTERPOOL_OFFSET))(arg, nullptr);
		}

		::System::Void SyncScrollViewPositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHACHARACTERNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET))(nullptr);
		}

		NameSearchService* CreateSearchService()
		{
			return ((NameSearchService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHACHARACTERNAMESEARCH_CREATESEARCHSERVICE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHACHARACTERNAMESEARCH_.CTOR_OFFSET))(nullptr);
		}

	};

