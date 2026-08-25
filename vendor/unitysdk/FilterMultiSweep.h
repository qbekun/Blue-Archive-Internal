#pragma once
#include "unitysdk.h"

class AssetObjectBase;

#define FILTERMULTISWEEP_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FD0D00)
#define FILTERMULTISWEEP_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FD0DD0)
#define FILTERMULTISWEEP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0F00)

	inline static constexpr unsigned int FilterMultiSweep_TypeDefinitionIndex = 3014;

	class FilterMultiSweep : public ::MX::Logic::Actions::InteractionTSAAction
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEP_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(AssetObjectBase* arg)
		{
			return ((::System::Boolean(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEP_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEP_.CTOR_OFFSET))(nullptr);
		}

	};

