#pragma once
#include "unitysdk.h"

namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }

#define ITEMFILTERSHIFTINGCRAFTFAVORITE_CHECKMAXANDFILL_OFFSET UNITYSDK_OFFSET(0x1FCEE50)
#define ITEMFILTERSHIFTINGCRAFTFAVORITE_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FCEE60)
#define ITEMFILTERSHIFTINGCRAFTFAVORITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FCC5C0)
#define ITEMFILTERSHIFTINGCRAFTFAVORITE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCEF10)

	inline static constexpr unsigned int ItemFilterShiftingCraftFavorite_TypeDefinitionIndex = 3002;

	class ItemFilterShiftingCraftFavorite : public ::MX::Logic::Actions::DyingAction
	{
	public:
		::System::Void CheckMaxAndFill(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHIFTINGCRAFTFAVORITE_CHECKMAXANDFILL_OFFSET))(arg, nullptr);
		}

		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHIFTINGCRAFTFAVORITE_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHIFTINGCRAFTFAVORITE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ContainedByFilter(::MX::Data::ShiftingCraftRecipeExcelInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::ShiftingCraftRecipeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHIFTINGCRAFTFAVORITE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

	};

