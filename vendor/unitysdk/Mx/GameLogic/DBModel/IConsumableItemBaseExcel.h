#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class CraftNodeTier; }
namespace FlatData { class Rarity; }
namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_TRYGETCRAFTQUALITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_GET_SHIFTINGCRAFTQUALITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_GET_CRAFTQUALITYDICT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_GET_STACKABLEMAX_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int IConsumableItemBaseExcel_TypeDefinitionIndex = 12549;

	class IConsumableItemBaseExcel : public Il2CppObject
	{
	public:
		Il2CppObject* get_Tags()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetCraftQuality(::FlatData::CraftNodeTier* arg, int64_t&* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::CraftNodeTier*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_TRYGETCRAFTQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_ShiftingCraftQuality()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_GET_SHIFTINGCRAFTQUALITY_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return ((::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_GET_RARITY_OFFSET))(nullptr);
		}

		Il2CppObject* get_CraftQualityDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_GET_CRAFTQUALITYDICT_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_StackableMax()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ICONSUMABLEITEMBASEEXCEL_GET_STACKABLEMAX_OFFSET))(nullptr);
		}

	};
}

