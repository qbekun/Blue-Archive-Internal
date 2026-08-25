#pragma once
#include "unitysdk.h"

class NameSearchService;

#define UICHARACTERNAMESEARCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x26AFC50)
#define UICHARACTERNAMESEARCH_CREATESEARCHSERVICE_OFFSET UNITYSDK_OFFSET(0x26AFD30)

	inline static constexpr unsigned int UICharacterNameSearch_TypeDefinitionIndex = 6891;

	class UICharacterNameSearch : public Il2CppObject
	{
	public:
		NameSearchService* _cachedService; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERNAMESEARCH_.CTOR_OFFSET))(nullptr);
		}

		NameSearchService* CreateSearchService()
		{
			return ((NameSearchService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERNAMESEARCH_CREATESEARCHSERVICE_OFFSET))(nullptr);
		}

	};

