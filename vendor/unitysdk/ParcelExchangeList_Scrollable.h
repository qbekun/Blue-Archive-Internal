#pragma once
#include "unitysdk.h"

class UIExchangeItemController;

#define PARCELEXCHANGELIST_SCROLLABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2701280)
#define PARCELEXCHANGELIST_SCROLLABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2701290)

	inline static constexpr unsigned int ParcelExchangeList_Scrollable_TypeDefinitionIndex = 7074;

	class ParcelExchangeList_Scrollable : public Il2CppObject
	{
	public:
		UIExchangeItemController* controller; // 0x18
		::System::Int32 perRowCount; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELEXCHANGELIST_SCROLLABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Initialize(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARCELEXCHANGELIST_SCROLLABLE_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

