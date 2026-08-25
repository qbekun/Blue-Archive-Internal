#pragma once
#include "unitysdk.h"

class NameSearchResult;

#define NAMESEARCHRESULT_GET_ISNORESULT_OFFSET UNITYSDK_OFFSET(0x26AEEC0)
#define NAMESEARCHRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26AEED0)
#define NAMESEARCHRESULT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x26AEF90)
#define NAMESEARCHRESULT_APPLYFILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NAMESEARCHRESULT_GET_ISSHOWALL_OFFSET UNITYSDK_OFFSET(0x26AF140)
#define NAMESEARCHRESULT_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x26AF240)

	inline static constexpr unsigned int NameSearchResult_TypeDefinitionIndex = 6886;

	class NameSearchResult : public Il2CppObject
	{
	public:
		NameSearchResult* ShowAll; // 0x0
		NameSearchResult* NoResult; // 0x10
		Il2CppObject* _Names_k__BackingField; // 0x10
		::System::Boolean _IsNoResult_k__BackingField; // 0x18

		::System::Boolean get_IsNoResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMESEARCHRESULT_GET_ISNORESULT_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NAMESEARCHRESULT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMESEARCHRESULT_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* ApplyFilter(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NAMESEARCHRESULT_APPLYFILTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsShowAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMESEARCHRESULT_GET_ISSHOWALL_OFFSET))(nullptr);
		}

		Il2CppObject* get_Names()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMESEARCHRESULT_GET_NAMES_OFFSET))(nullptr);
		}

	};

