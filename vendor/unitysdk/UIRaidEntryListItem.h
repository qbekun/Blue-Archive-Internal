#pragma once
#include "unitysdk.h"

class UIRaidDamageList;

#define UIRAIDENTRYLISTITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x27A2730)
#define UIRAIDENTRYLISTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x27A27D0)

	inline static constexpr unsigned int UIRaidEntryListItem_TypeDefinitionIndex = 7483;

	class UIRaidEntryListItem : public ::System::Xml::ExceptionType
	{
	public:
		UIRaidDamageList* Left; // 0x28
		UIRaidDamageList* Right; // 0x30

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDENTRYLISTITEM_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDENTRYLISTITEM_.CTOR_OFFSET))(nullptr);
		}

	};

