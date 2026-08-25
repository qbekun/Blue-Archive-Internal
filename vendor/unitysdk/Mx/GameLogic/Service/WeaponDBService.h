#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class WeaponDB; }
namespace MX::Core::Math { class BasisPoint; }
namespace FlatData { class WeaponType; }
namespace FlatData { class EquipmentCategory; }

#define MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_GETWEAPONSTARGRADE_OFFSET UNITYSDK_OFFSET(0xFCB530)
#define MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_LEVELUPCURRENCYREQUIRED_OFFSET UNITYSDK_OFFSET(0xFCB540)
#define MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_TRYGETCURRENTTRANSCENDENCERECIPE_OFFSET UNITYSDK_OFFSET(0xFCB580)
#define MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_GETWEAPONEXPBONUS_OFFSET UNITYSDK_OFFSET(0xFCB6A0)
#define MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_ISUSABLEITEMFORWEAPONEXPGROWTH_OFFSET UNITYSDK_OFFSET(0xFCB780)
#define MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFCB830)
#define MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_ISVALIDCONSUMEREQUEST_OFFSET UNITYSDK_OFFSET(0xFCB840)
#define MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_GETLEVELANDEXPAFTERFEED_OFFSET UNITYSDK_OFFSET(0xFCBBB0)
#define MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_GETTOTALEXPFROMCONSUMEDEQUIPMENTS_OFFSET UNITYSDK_OFFSET(0xFCBD10)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int WeaponDBService_TypeDefinitionIndex = 12416;

	class WeaponDBService : public Il2CppObject
	{
	public:
		::System::Int32 GetWeaponStarGrade(::MX::GameLogic::DBModel::WeaponDB* arg)
		{
			return ((::System::Int32(*)(::MX::GameLogic::DBModel::WeaponDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_GETWEAPONSTARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Int64 LevelUpCurrencyRequired(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_LEVELUPCURRENCYREQUIRED_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCurrentTranscendenceRecipe(::MX::GameLogic::DBModel::WeaponDB* arg, ::MX::Data::RecipeIngredientInfo&* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::WeaponDB*, ::MX::Data::RecipeIngredientInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_TRYGETCURRENTTRANSCENDENCERECIPE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* GetWeaponExpBonus(::FlatData::WeaponType* arg, ::FlatData::EquipmentCategory* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::FlatData::WeaponType*, ::FlatData::EquipmentCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_GETWEAPONEXPBONUS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsUsableItemForWeaponExpGrowth(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_ISUSABLEITEMFORWEAPONEXPGROWTH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsValidConsumeRequest(::System::Int64 arg, ::MX::GameLogic::DBModel::WeaponDB* arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::GameLogic::DBModel::WeaponDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_ISVALIDCONSUMEREQUEST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void GetLevelAndExpAfterFeed(::MX::GameLogic::DBModel::WeaponDB* arg, ::System::Int64 arg2, int32_t&* arg3, int64_t&* arg4, int64_t&* arg5)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WeaponDB*, ::System::Int64, int32_t&*, int64_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_GETLEVELANDEXPAFTERFEED_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 GetTotalExpFromConsumedEquipments(::MX::GameLogic::DBModel::WeaponDB* arg, Il2CppObject* arg2)
		{
			return ((::System::Int64(*)(::MX::GameLogic::DBModel::WeaponDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEAPONDBSERVICE_GETTOTALEXPFROMCONSUMEDEQUIPMENTS_OFFSET))(arg, arg2, nullptr);
		}

	};
}

