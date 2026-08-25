#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_GET_SOLDOUT_OFFSET UNITYSDK_OFFSET(0xFEA680)
#define MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_GET_CARDSHOPELEMENTID_OFFSET UNITYSDK_OFFSET(0xFEA690)
#define MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_SET_CARDSHOPELEMENTID_OFFSET UNITYSDK_OFFSET(0xFEA6A0)
#define MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_SET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xFEA6B0)
#define MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEA6C0)
#define MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEA6D0)
#define MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_GET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xFEA6E0)
#define MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEA6F0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CardShopElementDB_TypeDefinitionIndex = 12515;

	class CardShopElementDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int32 _SlotNumber_k__BackingField; // 0x18
		::System::Int64 _CardShopElementId_k__BackingField; // 0x20

		::System::Boolean get_SoldOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_GET_SOLDOUT_OFFSET))(nullptr);
		}

		::System::Int64 get_CardShopElementId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_GET_CARDSHOPELEMENTID_OFFSET))(nullptr);
		}

		::System::Void set_CardShopElementId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_SET_CARDSHOPELEMENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SlotNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_SET_SLOTNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int32 get_SlotNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_GET_SLOTNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CARDSHOPELEMENTDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

