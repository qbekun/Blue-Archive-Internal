#pragma once
#include "unitysdk.h"

#define PURCHASABLEAPCALCULATOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xABE410)
#define PURCHASABLEAPCALCULATOR_GETPURCHASABLECOUNT_OFFSET UNITYSDK_OFFSET(0xABE850)
#define PURCHASABLEAPCALCULATOR_GETREWARDS_OFFSET UNITYSDK_OFFSET(0xABE960)
#define PURCHASABLEAPCALCULATOR_GET_CURRENTCOST_OFFSET UNITYSDK_OFFSET(0xABEA60)
#define PURCHASABLEAPCALCULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xABEAF0)

	inline static constexpr unsigned int PurchasableApCalculator_TypeDefinitionIndex = 8028;

	class PurchasableApCalculator : public Il2CppObject
	{
	public:
		Il2CppObject* costRewardPairs; // 0x10
		::System::Int32 purchaseHistoryCount; // 0x18
		::System::Int32 purchaseCountLimit; // 0x1C

		::System::Void Initialize(::System::Int64 arg, ::System::Int32 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + PURCHASABLEAPCALCULATOR_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 GetPurchasableCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PURCHASABLEAPCALCULATOR_GETPURCHASABLECOUNT_OFFSET))(nullptr);
		}

		::System::Int64 GetRewards(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + PURCHASABLEAPCALCULATOR_GETREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentCost()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PURCHASABLEAPCALCULATOR_GET_CURRENTCOST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PURCHASABLEAPCALCULATOR_.CTOR_OFFSET))(nullptr);
		}

	};

