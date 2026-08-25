#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPRESPONSE_GET_REMOVEDEQUIPMENTSERVERID_OFFSET UNITYSDK_OFFSET(0xF43540)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPRESPONSE_SET_REMOVEDEQUIPMENTSERVERID_OFFSET UNITYSDK_OFFSET(0xF43550)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43560)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF43570)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EquipmentItemEquipResponse_TypeDefinitionIndex = 11670;

	class EquipmentItemEquipResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CharacterDB* CharacterDB; // 0x50
		Il2CppObject* EquipmentDBs; // 0x58
		::System::Int64 _RemovedEquipmentServerId_k__BackingField; // 0x60

		::System::Int64 get_RemovedEquipmentServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPRESPONSE_GET_REMOVEDEQUIPMENTSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_RemovedEquipmentServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPRESPONSE_SET_REMOVEDEQUIPMENTSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMEQUIPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

