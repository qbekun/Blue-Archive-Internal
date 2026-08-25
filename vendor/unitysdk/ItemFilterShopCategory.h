#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class ShopFilterClassifiedExcel; }

#define ITEMFILTERSHOPCATEGORY_LOADSELECTEDFILTERSLOCALLY_OFFSET UNITYSDK_OFFSET(0x1FCBAF0)
#define ITEMFILTERSHOPCATEGORY_SAVESELECTEDFILTERSLOCALLY_OFFSET UNITYSDK_OFFSET(0x1FCBDB0)
#define ITEMFILTERSHOPCATEGORY_RESETSELECTEDFILTERSLOCALLY_OFFSET UNITYSDK_OFFSET(0x1FCB520)
#define ITEMFILTERSHOPCATEGORY_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FCDB90)
#define ITEMFILTERSHOPCATEGORY_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCB340)
#define ITEMFILTERSHOPCATEGORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FCC470)

	inline static constexpr unsigned int ItemFilterShopCategory_TypeDefinitionIndex = 2996;

	class ItemFilterShopCategory : public ::MX::Logic::Actions::MoveToFormationBeaconAction
	{
	public:
		Il2CppObject* selectedFilterTypes; // 0x28

		::System::Void LoadSelectedFiltersLocally()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHOPCATEGORY_LOADSELECTEDFILTERSLOCALLY_OFFSET))(nullptr);
		}

		::System::Void SaveSelectedFiltersLocally()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHOPCATEGORY_SAVESELECTEDFILTERSLOCALLY_OFFSET))(nullptr);
		}

		::System::Void ResetSelectedFiltersLocally()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHOPCATEGORY_RESETSELECTEDFILTERSLOCALLY_OFFSET))(nullptr);
		}

		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHOPCATEGORY_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(::MX::Data::Excel::ShopFilterClassifiedExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ShopFilterClassifiedExcel*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHOPCATEGORY_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHOPCATEGORY_.CTOR_OFFSET))(nullptr);
		}

	};

