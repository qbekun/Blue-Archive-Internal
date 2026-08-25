#pragma once
#include "unitysdk.h"

#define POTENTIALSTATLEVELUPCOST_GET_CACHEDCOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x272BBA0)
#define POTENTIALSTATLEVELUPCOST_.CTOR_OFFSET UNITYSDK_OFFSET(0x272A450)
#define POTENTIALSTATLEVELUPCOST_CLEAR_OFFSET UNITYSDK_OFFSET(0x2729D90)
#define POTENTIALSTATLEVELUPCOST_ADDCOSTPERSTEP_OFFSET UNITYSDK_OFFSET(0x272BBE0)
#define POTENTIALSTATLEVELUPCOST_GET_COSTSTEPCOUNT_OFFSET UNITYSDK_OFFSET(0x272C520)
#define POTENTIALSTATLEVELUPCOST_SET_COSTSTEPCOUNT_OFFSET UNITYSDK_OFFSET(0x272C530)
#define POTENTIALSTATLEVELUPCOST_GETACCUMULATEDCOST_OFFSET UNITYSDK_OFFSET(0x272C540)

	inline static constexpr unsigned int PotentialStatLevelUpCost_TypeDefinitionIndex = 7176;

	class PotentialStatLevelUpCost : public Il2CppObject
	{
	public:
		Il2CppObject* costPerStepList; // 0x10
		::System::Int32 _CostStepCount_k__BackingField; // 0x18

		::System::Int32 get_CachedCostCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POTENTIALSTATLEVELUPCOST_GET_CACHEDCOSTCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POTENTIALSTATLEVELUPCOST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POTENTIALSTATLEVELUPCOST_CLEAR_OFFSET))(nullptr);
		}

		::System::Void AddCostPerStep(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + POTENTIALSTATLEVELUPCOST_ADDCOSTPERSTEP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CostStepCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POTENTIALSTATLEVELUPCOST_GET_COSTSTEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CostStepCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + POTENTIALSTATLEVELUPCOST_SET_COSTSTEPCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAccumulatedCost()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + POTENTIALSTATLEVELUPCOST_GETACCUMULATEDCOST_OFFSET))(nullptr);
		}

	};

