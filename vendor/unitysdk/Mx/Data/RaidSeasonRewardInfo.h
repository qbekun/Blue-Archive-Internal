#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::Data::Excel { class RaidStageSeasonRewardExcel; }
namespace MX::Data::Excel { class EliminateRaidStageSeasonRewardExcel; }

#define MX_DATA_RAIDSEASONREWARDINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1858EC0)
#define MX_DATA_RAIDSEASONREWARDINFO_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1858ED0)
#define MX_DATA_RAIDSEASONREWARDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1858EE0)
#define MX_DATA_RAIDSEASONREWARDINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1858EF0)
#define MX_DATA_RAIDSEASONREWARDINFO_GET_REWARD_OFFSET UNITYSDK_OFFSET(0x1858F00)
#define MX_DATA_RAIDSEASONREWARDINFO_SET_REWARD_OFFSET UNITYSDK_OFFSET(0x1858F10)
#define MX_DATA_RAIDSEASONREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1858F20)
#define MX_DATA_RAIDSEASONREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18590E0)

namespace MX::Data
{
	inline static constexpr unsigned int RaidSeasonRewardInfo_TypeDefinitionIndex = 15879;

	class RaidSeasonRewardInfo : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x10
		::System::Int64 _Id_k__BackingField; // 0x18
		Il2CppObject* _Reward_k__BackingField; // 0x20

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONREWARDINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONREWARDINFO_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONREWARDINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONREWARDINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Reward()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONREWARDINFO_GET_REWARD_OFFSET))(nullptr);
		}

		::System::Void set_Reward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONREWARDINFO_SET_REWARD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::RaidStageSeasonRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::RaidStageSeasonRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EliminateRaidStageSeasonRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EliminateRaidStageSeasonRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

