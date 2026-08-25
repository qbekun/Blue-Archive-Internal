#pragma once
#include "unitysdk.h"

class SortingRuleWrapper;
namespace MX::SaveData { class CharacterEchelonWeekDungeonSortingSaveData; }
class <>c__DisplayClass46_0;
class UIPopup_FilterSort;

#define <>C__DISPLAYCLASS46_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF8090)
#define <>C__DISPLAYCLASS46_1__ONCLICKSORT_B__1_OFFSET UNITYSDK_OFFSET(0xAF80A0)
#define <>C__DISPLAYCLASS46_1__ONCLICKSORT_B__2_OFFSET UNITYSDK_OFFSET(0xAF8260)

	inline static constexpr unsigned int <>c__DisplayClass46_1_TypeDefinitionIndex = 8149;

	class <>c__DisplayClass46_1 : public Il2CppObject
	{
	public:
		Il2CppObject* sortingRuleWrappers; // 0x10
		SortingRuleWrapper* savedSortingRuleWrapper; // 0x18
		::MX::SaveData::CharacterEchelonWeekDungeonSortingSaveData* saveData; // 0x28
		<>c__DisplayClass46_0* CS$__8__locals1; // 0x30
		Il2CppObject* __9__2; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS46_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickSort_b__1(UIPopup_FilterSort* arg)
		{
			((::System::Void(*)(UIPopup_FilterSort*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS46_1__ONCLICKSORT_B__1_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickSort_b__2(SortingRuleWrapper* arg)
		{
			((::System::Void(*)(SortingRuleWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS46_1__ONCLICKSORT_B__2_OFFSET))(arg, nullptr);
		}

	};

