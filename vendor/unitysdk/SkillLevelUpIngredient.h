#pragma once
#include "unitysdk.h"

class UINonEquipmentCard;
class UILabel;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define SKILLLEVELUPINGREDIENT_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x2733800)
#define SKILLLEVELUPINGREDIENT__SETDATA_B__3_0_OFFSET UNITYSDK_OFFSET(0x27338C0)
#define SKILLLEVELUPINGREDIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27339B0)
#define SKILLLEVELUPINGREDIENT__SETDATA_B__3_1_OFFSET UNITYSDK_OFFSET(0x27339C0)
#define SKILLLEVELUPINGREDIENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2733A80)

	inline static constexpr unsigned int SkillLevelUpIngredient_TypeDefinitionIndex = 7201;

	class SkillLevelUpIngredient : public Il2CppObject
	{
	public:
		UINonEquipmentCard* card; // 0x18
		UILabel* amountLabel; // 0x20
		::System::Boolean isEnoughItem; // 0x28

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELUPINGREDIENT_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Void _SetData_b__3_0(UINonEquipmentCard* arg)
		{
			((::System::Void(*)(UINonEquipmentCard*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELUPINGREDIENT__SETDATA_B__3_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELUPINGREDIENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetData_b__3_1(UINonEquipmentCard* arg)
		{
			((::System::Void(*)(UINonEquipmentCard*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELUPINGREDIENT__SETDATA_B__3_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELUPINGREDIENT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

