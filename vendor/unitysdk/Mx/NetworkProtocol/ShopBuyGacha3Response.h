#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ShopFreeRecruitHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBUYGACHA3RESPONSE_GET_FREERECRUITHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4ED10)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA3RESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4ED20)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA3RESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4ED30)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA3RESPONSE_SET_FREERECRUITHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4ED40)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA3RESPONSE_GET_PICKUPFIRSTGETHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF4ED50)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA3RESPONSE_SET_PICKUPFIRSTGETHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF4ED60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBuyGacha3Response_TypeDefinitionIndex = 12115;

	class ShopBuyGacha3Response : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ShopFreeRecruitHistoryDB* _FreeRecruitHistoryDB_k__BackingField; // 0x80
		Il2CppObject* _PickupFirstGetHistoryDBs_k__BackingField; // 0x88

		::MX::GameLogic::DBModel::ShopFreeRecruitHistoryDB* get_FreeRecruitHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::ShopFreeRecruitHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA3RESPONSE_GET_FREERECRUITHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA3RESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA3RESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_FreeRecruitHistoryDB(::MX::GameLogic::DBModel::ShopFreeRecruitHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopFreeRecruitHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA3RESPONSE_SET_FREERECRUITHISTORYDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PickupFirstGetHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA3RESPONSE_GET_PICKUPFIRSTGETHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_PickupFirstGetHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA3RESPONSE_SET_PICKUPFIRSTGETHISTORYDBS_OFFSET))(arg, nullptr);
		}

	};
}

