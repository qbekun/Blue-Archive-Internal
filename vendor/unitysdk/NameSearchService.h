#pragma once
#include "unitysdk.h"

class NameSearchResult;

#define NAMESEARCHSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26AF250)
#define NAMESEARCHSERVICE_SEARCH_OFFSET UNITYSDK_OFFSET(0x26AF700)

	inline static constexpr unsigned int NameSearchService_TypeDefinitionIndex = 6888;

	class NameSearchService : public Il2CppObject
	{
	public:
		Il2CppObject* _allList; // 0x10

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NAMESEARCHSERVICE_.CTOR_OFFSET))(arg, nullptr);
		}

		NameSearchResult* Search(::System::String* str)
		{
			return ((NameSearchResult*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NAMESEARCHSERVICE_SEARCH_OFFSET))(str, nullptr);
		}

	};

