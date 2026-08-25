#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EquipmentChangePieceInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xF43480)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_GET_EQUIPMENTSERVERID_OFFSET UNITYSDK_OFFSET(0xF43490)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF434A0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF434B0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_SET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF434C0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_GET_EQUIPMENTSERVERIDS_OFFSET UNITYSDK_OFFSET(0xF434D0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xF434E0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_SET_CHANGEPIECEINFO_OFFSET UNITYSDK_OFFSET(0xF434F0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_SET_EQUIPMENTSERVERIDS_OFFSET UNITYSDK_OFFSET(0xF43500)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_SET_EQUIPMENTSERVERID_OFFSET UNITYSDK_OFFSET(0xF43510)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_GET_CHANGEPIECEINFO_OFFSET UNITYSDK_OFFSET(0xF43520)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_GET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF43530)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EquipmentItemEquipRequest_TypeDefinitionIndex = 11669;

	class EquipmentItemEquipRequest : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterServerId_k__BackingField; // 0x40
		Il2CppObject* _EquipmentServerIds_k__BackingField; // 0x48
		::System::Int64 _EquipmentServerId_k__BackingField; // 0x50
		::System::Int32 _SlotIndex_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::EquipmentChangePieceInfo* _ChangePieceInfo_k__BackingField; // 0x60

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_EquipmentServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_GET_EQUIPMENTSERVERID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_SET_CHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EquipmentServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_GET_EQUIPMENTSERVERIDS_OFFSET))(nullptr);
		}

		::System::Void set_SlotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_SET_SLOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_ChangePieceInfo(::MX::GameLogic::DBModel::EquipmentChangePieceInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EquipmentChangePieceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_SET_CHANGEPIECEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_EquipmentServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_SET_EQUIPMENTSERVERIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_EquipmentServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_SET_EQUIPMENTSERVERID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EquipmentChangePieceInfo* get_ChangePieceInfo()
		{
			return ((::MX::GameLogic::DBModel::EquipmentChangePieceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_GET_CHANGEPIECEINFO_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPREQUEST_GET_CHARACTERSERVERID_OFFSET))(nullptr);
		}

	};
}

