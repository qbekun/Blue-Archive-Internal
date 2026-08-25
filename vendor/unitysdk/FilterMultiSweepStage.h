#pragma once
#include "unitysdk.h"

class MultiSweepListScrollInfo;

#define FILTERMULTISWEEPSTAGE_LOADSELECTEDFILTERSLOCALLY_OFFSET UNITYSDK_OFFSET(0x1FD1330)
#define FILTERMULTISWEEPSTAGE_SAVESELECTEDFILTERSLOCALLY_OFFSET UNITYSDK_OFFSET(0x1FD13B0)
#define FILTERMULTISWEEPSTAGE_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FD1400)
#define FILTERMULTISWEEPSTAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FD14D0)
#define FILTERMULTISWEEPSTAGE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FD1560)
#define FILTERMULTISWEEPSTAGE_RESETSELECTEDFILTERTYPES_OFFSET UNITYSDK_OFFSET(0x1FD1620)
#define FILTERMULTISWEEPSTAGE_RESETSELECTEDFILTERSLOCALLY_OFFSET UNITYSDK_OFFSET(0x1FD16A0)

	inline static constexpr unsigned int FilterMultiSweepStage_TypeDefinitionIndex = 3016;

	class FilterMultiSweepStage : public ::MX::Logic::Actions::KnockbackAction
	{
	public:
		Il2CppObject* selectedFilterTypes; // 0x28

		::System::Void LoadSelectedFiltersLocally()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEPSTAGE_LOADSELECTEDFILTERSLOCALLY_OFFSET))(nullptr);
		}

		::System::Void SaveSelectedFiltersLocally()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEPSTAGE_SAVESELECTEDFILTERSLOCALLY_OFFSET))(nullptr);
		}

		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEPSTAGE_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEPSTAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ContainedByFilter(MultiSweepListScrollInfo* arg)
		{
			return ((::System::Boolean(*)(MultiSweepListScrollInfo*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEPSTAGE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void ResetSelectedFilterTypes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEPSTAGE_RESETSELECTEDFILTERTYPES_OFFSET))(nullptr);
		}

		::System::Void ResetSelectedFiltersLocally()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEPSTAGE_RESETSELECTEDFILTERSLOCALLY_OFFSET))(nullptr);
		}

	};

