#pragma once
#include "unitysdk.h"

class BuffCombination;
class FormationModel;

#define UIPOPUP_FORMATION_CHAREDIT_BUFFCALCULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x24DF370)
#define UIPOPUP_FORMATION_CHAREDIT_BUFFCALCULATOR_PROCESSREMAININGSCHOOLS_OFFSET UNITYSDK_OFFSET(0x24DF380)
#define UIPOPUP_FORMATION_CHAREDIT_BUFFCALCULATOR_WEEKDUNGEONBUFFCALCULATE_OFFSET UNITYSDK_OFFSET(0x24DFB10)

	inline static constexpr unsigned int UIPopup_Formation_CharEdit_BuffCalculator_TypeDefinitionIndex = 6007;

	class UIPopup_Formation_CharEdit_BuffCalculator : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_BUFFCALCULATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ProcessRemainingSchools(Il2CppObject* arg, ::System::Int32 arg2, ::System::Int32 arg3, BuffCombination* arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, BuffCombination*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_BUFFCALCULATOR_PROCESSREMAININGSCHOOLS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void WeekDungeonBuffCalculate(Il2CppObject* arg, FormationModel* arg2, Il2CppObject&* arg3, Il2CppObject&* arg4)
		{
			((::System::Void(*)(Il2CppObject*, FormationModel*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_BUFFCALCULATOR_WEEKDUNGEONBUFFCALCULATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

