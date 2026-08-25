#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexaTileMapCommandType; }
namespace MX::Campaign { class HexLocation; }
namespace UnityEngine { class Vector3; }

#define MX_CAMPAIGN_HEXATILEMAPCOMMAND_GET_UNITID_OFFSET UNITYSDK_OFFSET(0x14382F0)
#define MX_CAMPAIGN_HEXATILEMAPCOMMAND_SET_COMMANDTYPE_OFFSET UNITYSDK_OFFSET(0x1438300)
#define MX_CAMPAIGN_HEXATILEMAPCOMMAND_GET_COMMANDTYPE_OFFSET UNITYSDK_OFFSET(0x1438310)
#define MX_CAMPAIGN_HEXATILEMAPCOMMAND_SET_UNITID_OFFSET UNITYSDK_OFFSET(0x1438320)
#define MX_CAMPAIGN_HEXATILEMAPCOMMAND_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1438330)
#define MX_CAMPAIGN_HEXATILEMAPCOMMAND_SET_SCENARIOID_OFFSET UNITYSDK_OFFSET(0x1438350)
#define MX_CAMPAIGN_HEXATILEMAPCOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x1438360)
#define MX_CAMPAIGN_HEXATILEMAPCOMMAND_GET_SCENARIOID_OFFSET UNITYSDK_OFFSET(0x1438370)
#define MX_CAMPAIGN_HEXATILEMAPCOMMAND_SET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1438380)
#define MX_CAMPAIGN_HEXATILEMAPCOMMAND_SET_STRATEGYOBJECTID_OFFSET UNITYSDK_OFFSET(0x1438390)
#define MX_CAMPAIGN_HEXATILEMAPCOMMAND_GET_STRATEGYOBJECTID_OFFSET UNITYSDK_OFFSET(0x14383A0)

namespace MX::Campaign
{
	inline static constexpr unsigned int HexaTileMapCommand_TypeDefinitionIndex = 14893;

	class HexaTileMapCommand : public Il2CppObject
	{
	public:
		::System::Int64 Id; // 0x10
		::MX::Campaign::HexaTileMapCommandType* _CommandType_k__BackingField; // 0x18
		::System::Int64 _ScenarioId_k__BackingField; // 0x20
		::System::Int64 _UnitId_k__BackingField; // 0x28
		::System::Int64 _StrategyObjectId_k__BackingField; // 0x30
		::MX::Campaign::HexLocation* _Location_k__BackingField; // 0x38
		::UnityEngine::Vector3* Rotate; // 0x44

		::System::Int64 get_UnitId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCOMMAND_GET_UNITID_OFFSET))(nullptr);
		}

		::System::Void set_CommandType(::MX::Campaign::HexaTileMapCommandType* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapCommandType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCOMMAND_SET_COMMANDTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMapCommandType* get_CommandType()
		{
			return ((::MX::Campaign::HexaTileMapCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCOMMAND_GET_COMMANDTYPE_OFFSET))(nullptr);
		}

		::System::Void set_UnitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCOMMAND_SET_UNITID_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexLocation* get_Location()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCOMMAND_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCOMMAND_SET_SCENARIOID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCOMMAND_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCOMMAND_GET_SCENARIOID_OFFSET))(nullptr);
		}

		::System::Void set_Location(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCOMMAND_SET_LOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_StrategyObjectId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCOMMAND_SET_STRATEGYOBJECTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StrategyObjectId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCOMMAND_GET_STRATEGYOBJECTID_OFFSET))(nullptr);
		}

	};
}

