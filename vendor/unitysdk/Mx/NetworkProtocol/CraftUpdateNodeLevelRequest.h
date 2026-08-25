#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConsumeRequestDB; }
namespace FlatData { class CraftNodeTier; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41B40)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_GET_CONSUMEGOLDAMOUNT_OFFSET UNITYSDK_OFFSET(0xF41B50)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_GET_CRAFTNODETYPE_OFFSET UNITYSDK_OFFSET(0xF41B60)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_SET_CONSUMEREQUESTDB_OFFSET UNITYSDK_OFFSET(0xF41B70)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_GET_CONSUMEREQUESTDB_OFFSET UNITYSDK_OFFSET(0xF41B80)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41B90)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_SET_CRAFTNODETYPE_OFFSET UNITYSDK_OFFSET(0xF41BA0)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41BB0)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41BC0)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_SET_CONSUMEGOLDAMOUNT_OFFSET UNITYSDK_OFFSET(0xF41BD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftUpdateNodeLevelRequest_TypeDefinitionIndex = 11599;

	class CraftUpdateNodeLevelRequest : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ConsumeRequestDB* _ConsumeRequestDB_k__BackingField; // 0x40
		::System::Int64 _ConsumeGoldAmount_k__BackingField; // 0x48
		::System::Int64 _SlotId_k__BackingField; // 0x50
		::FlatData::CraftNodeTier* _CraftNodeType_k__BackingField; // 0x58

		::System::Int64 get_SlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Int64 get_ConsumeGoldAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_GET_CONSUMEGOLDAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::CraftNodeTier* get_CraftNodeType()
		{
			return ((::FlatData::CraftNodeTier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_GET_CRAFTNODETYPE_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeRequestDB(::MX::GameLogic::DBModel::ConsumeRequestDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_SET_CONSUMEREQUESTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* get_ConsumeRequestDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_GET_CONSUMEREQUESTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CraftNodeType(::FlatData::CraftNodeTier* arg)
		{
			((::System::Void(*)(::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_SET_CRAFTNODETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_SET_SLOTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeGoldAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELREQUEST_SET_CONSUMEGOLDAMOUNT_OFFSET))(arg, nullptr);
		}

	};
}

