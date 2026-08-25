#pragma once
#include "unitysdk.h"

class MultiSweepListScrollInfo;

#define FILTERMULTISWEEPSTAGEDIFFICULTY_RESETSELECTEDFILTERTYPES_OFFSET UNITYSDK_OFFSET(0x1FD0F40)
#define FILTERMULTISWEEPSTAGEDIFFICULTY_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FD0FC0)
#define FILTERMULTISWEEPSTAGEDIFFICULTY_LOADSELECTEDFILTERSLOCALLY_OFFSET UNITYSDK_OFFSET(0x1FD1090)
#define FILTERMULTISWEEPSTAGEDIFFICULTY_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FD1110)
#define FILTERMULTISWEEPSTAGEDIFFICULTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FD11D0)
#define FILTERMULTISWEEPSTAGEDIFFICULTY_RESETSELECTEDFILTERSLOCALLY_OFFSET UNITYSDK_OFFSET(0x1FD1260)
#define FILTERMULTISWEEPSTAGEDIFFICULTY_SAVESELECTEDFILTERSLOCALLY_OFFSET UNITYSDK_OFFSET(0x1FD12E0)

	inline static constexpr unsigned int FilterMultiSweepStageDifficulty_TypeDefinitionIndex = 3015;

	class FilterMultiSweepStageDifficulty : public ::MX::Logic::Actions::TSADyingAction
	{
	public:
		Il2CppObject* selectedFilterTypes; // 0x28

		::System::Void ResetSelectedFilterTypes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEPSTAGEDIFFICULTY_RESETSELECTEDFILTERTYPES_OFFSET))(nullptr);
		}

		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEPSTAGEDIFFICULTY_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Void LoadSelectedFiltersLocally()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEPSTAGEDIFFICULTY_LOADSELECTEDFILTERSLOCALLY_OFFSET))(nullptr);
		}

		::System::Boolean ContainedByFilter(MultiSweepListScrollInfo* arg)
		{
			return ((::System::Boolean(*)(MultiSweepListScrollInfo*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEPSTAGEDIFFICULTY_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEPSTAGEDIFFICULTY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ResetSelectedFiltersLocally()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEPSTAGEDIFFICULTY_RESETSELECTEDFILTERSLOCALLY_OFFSET))(nullptr);
		}

		::System::Void SaveSelectedFiltersLocally()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERMULTISWEEPSTAGEDIFFICULTY_SAVESELECTEDFILTERSLOCALLY_OFFSET))(nullptr);
		}

	};

