#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class CraftNodeTier; }
namespace MX::GameLogic::DBModel { class ConsumeRequestDB; }
namespace MX::Data::Excel { class ItemExcel; }
namespace MX::Data::Excel { class FurnitureExcel; }
namespace MX::Data::Excel { class EquipmentExcel; }
namespace MX::Core::Math { class IPseudoRandomService; }
namespace MX::GameLogic::DBModel { class CraftNodeDB; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::GameLogic::DBModel { class IConsumableItemBaseExcel; }

#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_CALCCRAFTNODEEXP_OFFSET UNITYSDK_OFFSET(0xF98FB0)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_CALCCRAFTNODEEXP_OFFSET UNITYSDK_OFFSET(0xF99070)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_CALCSHIFTINGCRAFTNODEEXP_OFFSET UNITYSDK_OFFSET(0xF99860)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_GETCRAFTQUALITY_OFFSET UNITYSDK_OFFSET(0xF99620)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_GETCRAFTQUALITY_OFFSET UNITYSDK_OFFSET(0xF996E0)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_GETCRAFTQUALITY_OFFSET UNITYSDK_OFFSET(0xF997A0)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_CONVERTSERVERIDSTOEXCELIDSDIC_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_GENERATELEAFNODEID_OFFSET UNITYSDK_OFFSET(0xF99DD0)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_GENERATELEAFNODEIDS_OFFSET UNITYSDK_OFFSET(0xF9A180)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_CRAFTTIMER_OFFSET UNITYSDK_OFFSET(0xF9A6E0)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_GACHACRAFTRESULT_OFFSET UNITYSDK_OFFSET(0xF9A830)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_GETGOLDCOSTPARCELINFOBYNODETIER_OFFSET UNITYSDK_OFFSET(0xF9B170)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_VALIDATECRAFTCONSUMEREQUESTANDCALCNODEEXP_OFFSET UNITYSDK_OFFSET(0xF9B270)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_VALIDATECRAFTCONSUMEREQUESTANDCALCNODEEXP_OFFSET UNITYSDK_OFFSET(0xF9C130)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_VALIDATECRAFTCONSUMEREQUEST_OFFSET UNITYSDK_OFFSET(0xF9BD20)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_VALIDATEANDCALCSHIFTINGCRAFTCOUNT_OFFSET UNITYSDK_OFFSET(0xF9C5A0)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_TRYGETSHIFTINGCRAFTREWARDRARITY_OFFSET UNITYSDK_OFFSET(0xF9D210)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_TRYGETSHIFTINGCRAFTREWARDRARITY2_OFFSET UNITYSDK_OFFSET(0xF9D4B0)
#define MX_GAMELOGIC_SERVICE_CRAFTSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF9D680)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int CraftService_TypeDefinitionIndex = 12307;

	class CraftService : public Il2CppObject
	{
	public:
		::System::Int64 CalcCraftNodeExp(::FlatData::CraftNodeTier* arg, ::MX::GameLogic::DBModel::ConsumeRequestDB* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			return ((::System::Int64(*)(::FlatData::CraftNodeTier*, ::MX::GameLogic::DBModel::ConsumeRequestDB*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_CALCCRAFTNODEEXP_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 CalcCraftNodeExp(::FlatData::CraftNodeTier* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((::System::Int64(*)(::FlatData::CraftNodeTier*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_CALCCRAFTNODEEXP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 CalcShiftingCraftNodeExp(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((::System::Int64(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_CALCSHIFTINGCRAFTNODEEXP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 GetCraftQuality(::MX::Data::Excel::ItemExcel* arg, ::FlatData::CraftNodeTier* arg2)
		{
			return ((::System::Int64(*)(::MX::Data::Excel::ItemExcel*, ::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_GETCRAFTQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetCraftQuality(::MX::Data::Excel::FurnitureExcel* arg, ::FlatData::CraftNodeTier* arg2)
		{
			return ((::System::Int64(*)(::MX::Data::Excel::FurnitureExcel*, ::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_GETCRAFTQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetCraftQuality(::MX::Data::Excel::EquipmentExcel* arg, ::FlatData::CraftNodeTier* arg2)
		{
			return ((::System::Int64(*)(::MX::Data::Excel::EquipmentExcel*, ::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_GETCRAFTQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* ConvertServerIdsToExcelIdsDic(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_CONVERTSERVERIDSTOEXCELIDSDIC_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GenerateLeafNodeId(::FlatData::CraftNodeTier* arg, Il2CppObject* arg2, ::System::Int64 arg3, Il2CppObject* arg4, ::MX::Core::Math::IPseudoRandomService* arg5)
		{
			return ((Il2CppObject*(*)(::FlatData::CraftNodeTier*, Il2CppObject*, ::System::Int64, Il2CppObject*, ::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_GENERATELEAFNODEID_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* GenerateLeafNodeIds(Il2CppObject* arg, ::MX::Core::Math::IPseudoRandomService* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_GENERATELEAFNODEIDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Double CraftTimer(::System::DateTime* arg, ::System::DateTime* arg2, ::System::String&* arg3)
		{
			return ((::System::Double(*)(::System::DateTime*, ::System::DateTime*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_CRAFTTIMER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 GachaCraftResult(::MX::GameLogic::DBModel::CraftNodeDB* arg, ::MX::Core::Math::IPseudoRandomService* arg2)
		{
			return ((::System::Int64(*)(::MX::GameLogic::DBModel::CraftNodeDB*, ::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_GACHACRAFTRESULT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* GetGoldCostParcelInfoByNodeTier(::FlatData::CraftNodeTier* arg)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_GETGOLDCOSTPARCELINFOBYNODETIER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateCraftConsumeRequestAndCalcNodeExp(::FlatData::CraftNodeTier* arg, ::MX::GameLogic::DBModel::ConsumeRequestDB* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, int64_t&* arg6)
		{
			return ((::System::Boolean(*)(::FlatData::CraftNodeTier*, ::MX::GameLogic::DBModel::ConsumeRequestDB*, Il2CppObject*, Il2CppObject*, Il2CppObject*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_VALIDATECRAFTCONSUMEREQUESTANDCALCNODEEXP_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean ValidateCraftConsumeRequestAndCalcNodeExp(::FlatData::CraftNodeTier* arg, Il2CppObject* arg2, int64_t&* arg3)
		{
			return ((::System::Boolean(*)(::FlatData::CraftNodeTier*, Il2CppObject*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_VALIDATECRAFTCONSUMEREQUESTANDCALCNODEEXP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ValidateCraftConsumeRequest(::FlatData::CraftNodeTier* arg, Il2CppObject* arg2, ::MX::GameLogic::DBModel::IConsumableItemBaseExcel* arg3, int64_t&* arg4)
		{
			return ((::System::Boolean(*)(::FlatData::CraftNodeTier*, Il2CppObject*, ::MX::GameLogic::DBModel::IConsumableItemBaseExcel*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_VALIDATECRAFTCONSUMEREQUEST_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean ValidateAndCalcShiftingCraftCount(::System::Int64 arg, ::MX::GameLogic::DBModel::ConsumeRequestDB* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, int64_t&* arg6)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::GameLogic::DBModel::ConsumeRequestDB*, Il2CppObject*, Il2CppObject*, Il2CppObject*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_VALIDATEANDCALCSHIFTINGCRAFTCOUNT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean TryGetShiftingCraftRewardRarity(::System::Int64 arg, ::FlatData::Rarity&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::FlatData::Rarity&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_TRYGETSHIFTINGCRAFTREWARDRARITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetShiftingCraftRewardRarity2(::System::Int64 arg, ::FlatData::Rarity&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::FlatData::Rarity&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_TRYGETSHIFTINGCRAFTREWARDRARITY2_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CRAFTSERVICE_.CTOR_OFFSET))(nullptr);
		}

	};
}

