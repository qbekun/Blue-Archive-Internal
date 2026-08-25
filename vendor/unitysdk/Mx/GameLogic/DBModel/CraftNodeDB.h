#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class CraftNodeTier; }
namespace MX::GameLogic::DBModel { class CraftNodeResult; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Core::Math { class IPseudoRandomService; }

#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_NODEID_OFFSET UNITYSDK_OFFSET(0xFF4A90)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_NODETIER_OFFSET UNITYSDK_OFFSET(0xFF4AA0)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_RESULTID_OFFSET UNITYSDK_OFFSET(0xFF4AB0)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_SLOTSEQUENCE_OFFSET UNITYSDK_OFFSET(0xFF4AC0)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_NODERANDOMSEED_OFFSET UNITYSDK_OFFSET(0xFF4AD0)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_NODELEVEL_OFFSET UNITYSDK_OFFSET(0xFF4AE0)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_NODETIER_OFFSET UNITYSDK_OFFSET(0xFF4AF0)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_LEAFNODEIDS_OFFSET UNITYSDK_OFFSET(0xFF4B00)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_CRAFTNODERESULT_OFFSET UNITYSDK_OFFSET(0xFF4B10)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_NODERANDOMSEQUENCE_OFFSET UNITYSDK_OFFSET(0xFF4B20)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_NODEID_OFFSET UNITYSDK_OFFSET(0xFF4B30)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_CRAFTNODERESULT_OFFSET UNITYSDK_OFFSET(0xFF4B40)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_LEAFNODEIDS_OFFSET UNITYSDK_OFFSET(0xFF4B50)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_NODEQUALITY_OFFSET UNITYSDK_OFFSET(0xFF4B60)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_NODERANDOMSEED_OFFSET UNITYSDK_OFFSET(0xFF4B70)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_SLOTSEQUENCE_OFFSET UNITYSDK_OFFSET(0xFF4B80)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_RESULTID_OFFSET UNITYSDK_OFFSET(0xFF4B90)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_REWARDPARCELINFO_OFFSET UNITYSDK_OFFSET(0xFF4A00)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_NODELEVEL_OFFSET UNITYSDK_OFFSET(0xFF4BA0)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_NODEQUALITY_OFFSET UNITYSDK_OFFSET(0xFF4BB0)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_NODERANDOMSEQUENCE_OFFSET UNITYSDK_OFFSET(0xFF4BC0)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF4BD0)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_MAKEREWARDPARCELINFO_OFFSET UNITYSDK_OFFSET(0xFF4C50)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CraftNodeDB_TypeDefinitionIndex = 12569;

	class CraftNodeDB : public Il2CppObject
	{
	public:
		::FlatData::CraftNodeTier* _NodeTier_k__BackingField; // 0x10
		::System::Int64 _SlotSequence_k__BackingField; // 0x18
		::System::Int64 _NodeId_k__BackingField; // 0x20
		::System::Int64 _NodeQuality_k__BackingField; // 0x28
		::System::Int64 _NodeLevel_k__BackingField; // 0x30
		::System::Int32 _NodeRandomSeed_k__BackingField; // 0x38
		::System::Int32 _NodeRandomSequence_k__BackingField; // 0x3C
		Il2CppObject* _LeafNodeIds_k__BackingField; // 0x40
		::System::Int64 _ResultId_k__BackingField; // 0x48
		::MX::GameLogic::DBModel::CraftNodeResult* _CraftNodeResult_k__BackingField; // 0x50

		::System::Int64 get_NodeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_NODEID_OFFSET))(nullptr);
		}

		::System::Void set_NodeTier(::FlatData::CraftNodeTier* arg)
		{
			((::System::Void(*)(::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_NODETIER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ResultId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_RESULTID_OFFSET))(nullptr);
		}

		::System::Int64 get_SlotSequence()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_SLOTSEQUENCE_OFFSET))(nullptr);
		}

		::System::Int32 get_NodeRandomSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_NODERANDOMSEED_OFFSET))(nullptr);
		}

		::System::Int64 get_NodeLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_NODELEVEL_OFFSET))(nullptr);
		}

		::FlatData::CraftNodeTier* get_NodeTier()
		{
			return ((::FlatData::CraftNodeTier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_NODETIER_OFFSET))(nullptr);
		}

		::System::Void set_LeafNodeIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_LEAFNODEIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_CraftNodeResult(::MX::GameLogic::DBModel::CraftNodeResult* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftNodeResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_CRAFTNODERESULT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NodeRandomSequence()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_NODERANDOMSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void set_NodeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_NODEID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CraftNodeResult* get_CraftNodeResult()
		{
			return ((::MX::GameLogic::DBModel::CraftNodeResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_CRAFTNODERESULT_OFFSET))(nullptr);
		}

		Il2CppObject* get_LeafNodeIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_LEAFNODEIDS_OFFSET))(nullptr);
		}

		::System::Int64 get_NodeQuality()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_NODEQUALITY_OFFSET))(nullptr);
		}

		::System::Void set_NodeRandomSeed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_NODERANDOMSEED_OFFSET))(arg, nullptr);
		}

		::System::Void set_SlotSequence(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_SLOTSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ResultId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_RESULTID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_RewardParcelInfo()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_GET_REWARDPARCELINFO_OFFSET))(nullptr);
		}

		::System::Void set_NodeLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_NODELEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_NodeQuality(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_NODEQUALITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_NodeRandomSequence(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_SET_NODERANDOMSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MakeRewardParcelInfo(::MX::Core::Math::IPseudoRandomService* arg)
		{
			((::System::Void(*)(::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODEDB_MAKEREWARDPARCELINFO_OFFSET))(arg, nullptr);
		}

	};
}

