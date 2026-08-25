#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ItemDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ITEMBULKCONSUMERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47820)
#define MX_NETWORKPROTOCOL_ITEMBULKCONSUMERESPONSE_SET_PARCELINFOSINMAILBOX_OFFSET UNITYSDK_OFFSET(0xF47830)
#define MX_NETWORKPROTOCOL_ITEMBULKCONSUMERESPONSE_SET_USEDITEMDB_OFFSET UNITYSDK_OFFSET(0xF47840)
#define MX_NETWORKPROTOCOL_ITEMBULKCONSUMERESPONSE_GET_USEDITEMDB_OFFSET UNITYSDK_OFFSET(0xF47850)
#define MX_NETWORKPROTOCOL_ITEMBULKCONSUMERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47860)
#define MX_NETWORKPROTOCOL_ITEMBULKCONSUMERESPONSE_GET_PARCELINFOSINMAILBOX_OFFSET UNITYSDK_OFFSET(0xF47870)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ItemBulkConsumeResponse_TypeDefinitionIndex = 11832;

	class ItemBulkConsumeResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ItemDB* _UsedItemDB_k__BackingField; // 0x50
		Il2CppObject* _ParcelInfosInMailBox_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMBULKCONSUMERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelInfosInMailBox(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMBULKCONSUMERESPONSE_SET_PARCELINFOSINMAILBOX_OFFSET))(arg, nullptr);
		}

		::System::Void set_UsedItemDB(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMBULKCONSUMERESPONSE_SET_USEDITEMDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ItemDB* get_UsedItemDB()
		{
			return ((::MX::GameLogic::DBModel::ItemDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMBULKCONSUMERESPONSE_GET_USEDITEMDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMBULKCONSUMERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParcelInfosInMailBox()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMBULKCONSUMERESPONSE_GET_PARCELINFOSINMAILBOX_OFFSET))(nullptr);
		}

	};
}

