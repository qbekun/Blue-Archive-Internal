#pragma once
#include "../../unitysdk.h"

namespace FlatData { class Difficulty; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::Data::Excel { class MiniGameShootingStageExcel; }

#define MX_DATA_MINIGAMESHOOTINGSTAGEINFO_SET_COST_OFFSET UNITYSDK_OFFSET(0x190A410)
#define MX_DATA_MINIGAMESHOOTINGSTAGEINFO_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x190A420)
#define MX_DATA_MINIGAMESHOOTINGSTAGEINFO_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0x190A430)
#define MX_DATA_MINIGAMESHOOTINGSTAGEINFO_GET_STAGECLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x190A440)
#define MX_DATA_MINIGAMESHOOTINGSTAGEINFO_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x190A450)
#define MX_DATA_MINIGAMESHOOTINGSTAGEINFO_SET_REWARDSBYSECTION_OFFSET UNITYSDK_OFFSET(0x190A460)
#define MX_DATA_MINIGAMESHOOTINGSTAGEINFO_GET_COST_OFFSET UNITYSDK_OFFSET(0x190A470)
#define MX_DATA_MINIGAMESHOOTINGSTAGEINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x190A480)
#define MX_DATA_MINIGAMESHOOTINGSTAGEINFO_GETREWARDS_OFFSET UNITYSDK_OFFSET(0x190A490)
#define MX_DATA_MINIGAMESHOOTINGSTAGEINFO_SET_STAGECLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x190A4F0)
#define MX_DATA_MINIGAMESHOOTINGSTAGEINFO_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x190A500)
#define MX_DATA_MINIGAMESHOOTINGSTAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1909DB0)
#define MX_DATA_MINIGAMESHOOTINGSTAGEINFO_GET_REWARDSBYSECTION_OFFSET UNITYSDK_OFFSET(0x190A520)
#define MX_DATA_MINIGAMESHOOTINGSTAGEINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x190A530)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameShootingStageInfo_TypeDefinitionIndex = 16225;

	class MiniGameShootingStageInfo : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::FlatData::Difficulty* _Difficulty_k__BackingField; // 0x18
		::System::Int64 _RewardId_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelCost* _Cost_k__BackingField; // 0x28
		Il2CppObject* _StageClearRewards_k__BackingField; // 0x30
		Il2CppObject* _RewardsBySection_k__BackingField; // 0x38

		::System::Void set_Cost(::MX::GameLogic::Parcel::ParcelCost* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGSTAGEINFO_SET_COST_OFFSET))(arg, nullptr);
		}

		::FlatData::Difficulty* get_Difficulty()
		{
			return (return (::FlatData::Difficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGSTAGEINFO_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_RewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGSTAGEINFO_SET_REWARDID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_StageClearRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGSTAGEINFO_GET_STAGECLEARREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::Difficulty* arg)
		{
			((::System::Void(*)(::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGSTAGEINFO_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardsBySection(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGSTAGEINFO_SET_REWARDSBYSECTION_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* get_Cost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGSTAGEINFO_GET_COST_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGSTAGEINFO_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRewards(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGSTAGEINFO_GETREWARDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_StageClearRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGSTAGEINFO_SET_STAGECLEARREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGSTAGEINFO_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MiniGameShootingStageExcel* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameShootingStageExcel*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGSTAGEINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get_RewardsBySection()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGSTAGEINFO_GET_REWARDSBYSECTION_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGSTAGEINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

