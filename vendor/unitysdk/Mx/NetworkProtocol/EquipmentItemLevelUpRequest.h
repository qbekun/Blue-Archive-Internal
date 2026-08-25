#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConsumeRequestDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43580)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_SET_CONSUMESERVERIDS_OFFSET UNITYSDK_OFFSET(0xF43590)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_SET_CONSUMEREQUESTDB_OFFSET UNITYSDK_OFFSET(0xF435A0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_SET_TARGETSERVERID_OFFSET UNITYSDK_OFFSET(0xF435B0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_GET_CONSUMESERVERIDS_OFFSET UNITYSDK_OFFSET(0xF435C0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_GET_CONSUMEREQUESTDB_OFFSET UNITYSDK_OFFSET(0xF435D0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF435E0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_GET_TARGETSERVERID_OFFSET UNITYSDK_OFFSET(0xF435F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EquipmentItemLevelUpRequest_TypeDefinitionIndex = 11671;

	class EquipmentItemLevelUpRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TargetServerId_k__BackingField; // 0x40
		Il2CppObject* _ConsumeServerIds_k__BackingField; // 0x48
		::MX::GameLogic::DBModel::ConsumeRequestDB* _ConsumeRequestDB_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_SET_CONSUMESERVERIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConsumeRequestDB(::MX::GameLogic::DBModel::ConsumeRequestDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_SET_CONSUMEREQUESTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_SET_TARGETSERVERID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConsumeServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_GET_CONSUMESERVERIDS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* get_ConsumeRequestDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_GET_CONSUMEREQUESTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPREQUEST_GET_TARGETSERVERID_OFFSET))(nullptr);
		}

	};
}

