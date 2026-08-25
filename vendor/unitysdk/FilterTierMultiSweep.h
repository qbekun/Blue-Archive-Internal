#pragma once
#include "unitysdk.h"

class AssetObjectBase;

#define FILTERTIERMULTISWEEP_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FD0B50)
#define FILTERTIERMULTISWEEP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0BF0)
#define FILTERTIERMULTISWEEP_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FD0C30)

	inline static constexpr unsigned int FilterTierMultiSweep_TypeDefinitionIndex = 3013;

	class FilterTierMultiSweep : public ::MX::Logic::Actions::HeroAction
	{
	public:
		::System::Boolean ContainedByFilter(AssetObjectBase* arg)
		{
			return ((::System::Boolean(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERTIERMULTISWEEP_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERTIERMULTISWEEP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERTIERMULTISWEEP_INITALLLIST_OFFSET))(arg, nullptr);
		}

	};

