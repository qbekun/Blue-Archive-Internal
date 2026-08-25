#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CraftState; }

#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xFF3DD0)
#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xFF3DE0)
#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_SET_NODES_OFFSET UNITYSDK_OFFSET(0xFF3DF0)
#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GETCRAFTDURATION_OFFSET UNITYSDK_OFFSET(0xFF3E00)
#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF4050)
#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xFF40D0)
#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GET_SLOTSEQUENCE_OFFSET UNITYSDK_OFFSET(0xFF40E0)
#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xFF40F0)
#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GET_NODES_OFFSET UNITYSDK_OFFSET(0xFF4100)
#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GETSTATE_OFFSET UNITYSDK_OFFSET(0xFF4110)
#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GET_RESULTIDS_OFFSET UNITYSDK_OFFSET(0xFF4220)
#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_SERIALIZEREWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFF4430)
#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GET_CRAFTSLOTOPENDATE_OFFSET UNITYSDK_OFFSET(0xFF46C0)
#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_SET_CRAFTSLOTOPENDATE_OFFSET UNITYSDK_OFFSET(0xFF46D0)
#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_SET_SLOTSEQUENCE_OFFSET UNITYSDK_OFFSET(0xFF46E0)
#define MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFF46F0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CraftInfoDB_TypeDefinitionIndex = 12568;

	class CraftInfoDB : public Il2CppObject
	{
	public:
		::System::Int64 _SlotSequence_k__BackingField; // 0x10
		::System::DateTime* _StartTime_k__BackingField; // 0x18
		::System::DateTime* _EndTime_k__BackingField; // 0x20
		::System::DateTime* _CraftSlotOpenDate_k__BackingField; // 0x28
		Il2CppObject* _Nodes_k__BackingField; // 0x30

		::System::Void set_EndTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_SET_ENDTIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GET_STARTTIME_OFFSET))(nullptr);
		}

		::System::Void set_Nodes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_SET_NODES_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCraftDuration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GETCRAFTDURATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_.CTOR_OFFSET))(nullptr);
		}

		::System::DateTime* get_EndTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GET_ENDTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_SlotSequence()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GET_SLOTSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void set_StartTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_SET_STARTTIME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Nodes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GET_NODES_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CraftState* GetState(::System::DateTime* arg)
		{
			return ((::MX::GameLogic::DBModel::CraftState*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GETSTATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ResultIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GET_RESULTIDS_OFFSET))(nullptr);
		}

		::System::String* SerializeRewardParcelInfos()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_SERIALIZEREWARDPARCELINFOS_OFFSET))(nullptr);
		}

		::System::DateTime* get_CraftSlotOpenDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GET_CRAFTSLOTOPENDATE_OFFSET))(nullptr);
		}

		::System::Void set_CraftSlotOpenDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_SET_CRAFTSLOTOPENDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SlotSequence(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_SET_SLOTSEQUENCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTINFODB_GET_REWARDPARCELINFOS_OFFSET))(nullptr);
		}

	};
}

