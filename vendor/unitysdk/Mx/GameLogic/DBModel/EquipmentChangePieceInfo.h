#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_EQUIPMENTCHANGEPIECEINFO_GET_DESTINATIONITEMID_OFFSET UNITYSDK_OFFSET(0xFF3A70)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTCHANGEPIECEINFO_GET_SOURCEITEMID_OFFSET UNITYSDK_OFFSET(0xFF3A80)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTCHANGEPIECEINFO_SET_CONSUMECOUNT_OFFSET UNITYSDK_OFFSET(0xFF3A90)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTCHANGEPIECEINFO_SET_SOURCEITEMID_OFFSET UNITYSDK_OFFSET(0xFF3AA0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTCHANGEPIECEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF3AB0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTCHANGEPIECEINFO_GET_CONSUMECOUNT_OFFSET UNITYSDK_OFFSET(0xFF3AC0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTCHANGEPIECEINFO_SET_DESTINATIONITEMID_OFFSET UNITYSDK_OFFSET(0xFF3AD0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EquipmentChangePieceInfo_TypeDefinitionIndex = 12561;

	class EquipmentChangePieceInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SourceItemId_k__BackingField; // 0x10
		::System::Int64 _ConsumeCount_k__BackingField; // 0x18
		::System::Int64 _DestinationItemId_k__BackingField; // 0x20

		::System::Int64 get_DestinationItemId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTCHANGEPIECEINFO_GET_DESTINATIONITEMID_OFFSET))(nullptr);
		}

		::System::Int64 get_SourceItemId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTCHANGEPIECEINFO_GET_SOURCEITEMID_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTCHANGEPIECEINFO_SET_CONSUMECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_SourceItemId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTCHANGEPIECEINFO_SET_SOURCEITEMID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTCHANGEPIECEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ConsumeCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTCHANGEPIECEINFO_GET_CONSUMECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_DestinationItemId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTCHANGEPIECEINFO_SET_DESTINATIONITEMID_OFFSET))(arg, nullptr);
		}

	};
}

