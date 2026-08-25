#pragma once
#include "unitysdk.h"

namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }

#define ITEMFILTERSHIFTINGCRAFT_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FCE660)
#define ITEMFILTERSHIFTINGCRAFT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FCC540)
#define ITEMFILTERSHIFTINGCRAFT_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCE730)

	inline static constexpr unsigned int ItemFilterShiftingCraft_TypeDefinitionIndex = 3001;

	class ItemFilterShiftingCraft : public ::MX::Logic::Actions::MoveToAttackAction
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHIFTINGCRAFT_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHIFTINGCRAFT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ContainedByFilter(::MX::Data::ShiftingCraftRecipeExcelInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::ShiftingCraftRecipeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHIFTINGCRAFT_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

	};

