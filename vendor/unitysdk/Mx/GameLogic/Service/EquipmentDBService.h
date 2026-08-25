#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::GameLogic::DBModel { class EquipmentDB; }
namespace FlatData { class EquipmentCategory; }
namespace MX::GameLogic::DBModel { class GearDB; }
namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::DBModel { class EquipmentChangePieceInfo; }

#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_SELLREWARD_OFFSET UNITYSDK_OFFSET(0xFA42B0)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_LEVELUPCURRENCYREQUIRED_OFFSET UNITYSDK_OFFSET(0xFA4320)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_GETAVAILABLECATEGORIES_OFFSET UNITYSDK_OFFSET(0xFA4360)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYGETCALCLEVELANDEXPAFTERFEEDEXP_OFFSET UNITYSDK_OFFSET(0xFA4420)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYGETREQUIERDEXPCURTOMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xFA4570)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYGETCONSUMEEXPSUMANDOTHERINFO_OFFSET UNITYSDK_OFFSET(0xFA4690)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_ISVALIDCONSUMEREQUEST_OFFSET UNITYSDK_OFFSET(0xFA4C70)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_CANAFFORDCOST_OFFSET UNITYSDK_OFFSET(0xFA5050)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYGETTIERUPRECIPE_OFFSET UNITYSDK_OFFSET(0xFA5870)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYGETTIERUPRECIPE_OFFSET UNITYSDK_OFFSET(0xFA59A0)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_ISEQUIPMENTSLOTOPEN_OFFSET UNITYSDK_OFFSET(0xFA5AD0)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_CANEQUIP_OFFSET UNITYSDK_OFFSET(0xFA5B90)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYGETNEXTTIEREQUIPMENTID_OFFSET UNITYSDK_OFFSET(0xFA5DA0)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYGETNEXTTIERGEARID_OFFSET UNITYSDK_OFFSET(0xFA5E40)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_GETUPDATEDEQUIPMENTDBS_OFFSET UNITYSDK_OFFSET(0xFA5EE0)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_CANGEARUNLOCKORTIERUP_OFFSET UNITYSDK_OFFSET(0xFA6040)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYCREATEEQUIPMENTDBFROMCHANGEDPIECE_OFFSET UNITYSDK_OFFSET(0xFA6110)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYCREATEEQUIPMENTDBFROMEQUIP_OFFSET UNITYSDK_OFFSET(0xFA63A0)
#define MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFA6420)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int EquipmentDBService_TypeDefinitionIndex = 12329;

	class EquipmentDBService : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelInfo* SellReward(::MX::GameLogic::DBModel::EquipmentDB* arg)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_SELLREWARD_OFFSET))(arg, nullptr);
		}

		::System::Int64 LevelUpCurrencyRequired(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_LEVELUPCURRENCYREQUIRED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAvailableCategories(::FlatData::EquipmentCategory* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::EquipmentCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_GETAVAILABLECATEGORIES_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCalcLevelAndExpAfterFeedExp(::MX::GameLogic::DBModel::EquipmentDB* arg, ::System::Int64 arg2, int32_t&* arg3, int64_t&* arg4, int64_t&* arg5)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::System::Int64, int32_t&*, int64_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYGETCALCLEVELANDEXPAFTERFEEDEXP_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean TryGetRequierdExpCurToMaxLevel(::MX::GameLogic::DBModel::EquipmentDB* arg, int64_t&* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EquipmentDB*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYGETREQUIERDEXPCURTOMAXLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetConsumeExpSumAndOtherInfo(::MX::GameLogic::DBModel::EquipmentDB* arg, Il2CppObject* arg2, Il2CppObject* arg3, int64_t&* arg4, Il2CppObject&* arg5, Il2CppObject&* arg6)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EquipmentDB*, Il2CppObject*, Il2CppObject*, int64_t&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYGETCONSUMEEXPSUMANDOTHERINFO_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean IsValidConsumeRequest(::System::Int64 arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_ISVALIDCONSUMEREQUEST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CanAffordCost(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_CANAFFORDCOST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetTierUpRecipe(::MX::GameLogic::DBModel::EquipmentDB* arg, ::MX::Data::RecipeInfo&* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::MX::Data::RecipeInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYGETTIERUPRECIPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetTierUpRecipe(::MX::GameLogic::DBModel::GearDB* arg, ::MX::Data::RecipeInfo&* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::GearDB*, ::MX::Data::RecipeInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYGETTIERUPRECIPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsEquipmentSlotOpen(::MX::GameLogic::DBModel::CharacterDB* arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_ISEQUIPMENTSLOTOPEN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanEquip(::MX::GameLogic::DBModel::CharacterDB* arg, ::System::Int32 arg2, ::MX::GameLogic::DBModel::EquipmentDB* arg3)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::System::Int32, ::MX::GameLogic::DBModel::EquipmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_CANEQUIP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryGetNextTierEquipmentId(::System::Int64 arg, int64_t&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYGETNEXTTIEREQUIPMENTID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetNextTierGearId(::System::Int64 arg, int64_t&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYGETNEXTTIERGEARID_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetUpdatedEquipmentDBs(::MX::GameLogic::DBModel::EquipmentDB* arg, ::MX::GameLogic::DBModel::EquipmentDB* arg2)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::MX::GameLogic::DBModel::EquipmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_GETUPDATEDEQUIPMENTDBS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanGearUnlockOrTierUp(::MX::GameLogic::DBModel::CharacterDB* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_CANGEARUNLOCKORTIERUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryCreateEquipmentDBFromChangedPiece(::MX::GameLogic::DBModel::CharacterDB* arg, ::System::Int32 arg2, ::MX::GameLogic::DBModel::EquipmentChangePieceInfo* arg3, ::MX::GameLogic::DBModel::EquipmentDB&* arg4)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::System::Int32, ::MX::GameLogic::DBModel::EquipmentChangePieceInfo*, ::MX::GameLogic::DBModel::EquipmentDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYCREATEEQUIPMENTDBFROMCHANGEDPIECE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean TryCreateEquipmentDBFromEquip(::MX::GameLogic::DBModel::CharacterDB* arg, ::System::Int32 arg2, ::MX::GameLogic::DBModel::EquipmentDB* arg3, ::MX::GameLogic::DBModel::EquipmentDB&* arg4)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::System::Int32, ::MX::GameLogic::DBModel::EquipmentDB*, ::MX::GameLogic::DBModel::EquipmentDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_TRYCREATEEQUIPMENTDBFROMEQUIP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_EQUIPMENTDBSERVICE_.CTOR_OFFSET))(nullptr);
		}

	};
}

