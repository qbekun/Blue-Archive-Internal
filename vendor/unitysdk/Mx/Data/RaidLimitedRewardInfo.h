#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::Data::Excel { class EliminateRaidStageLimitedRewardExcel; }

#define MX_DATA_RAIDLIMITEDREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1857D30)
#define MX_DATA_RAIDLIMITEDREWARDINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1857EF0)
#define MX_DATA_RAIDLIMITEDREWARDINFO_SET_LIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0x1857F00)
#define MX_DATA_RAIDLIMITEDREWARDINFO_SET_REWARD_OFFSET UNITYSDK_OFFSET(0x1857F10)
#define MX_DATA_RAIDLIMITEDREWARDINFO_GET_LIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0x1857F20)
#define MX_DATA_RAIDLIMITEDREWARDINFO_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1857F30)
#define MX_DATA_RAIDLIMITEDREWARDINFO_GET_REWARD_OFFSET UNITYSDK_OFFSET(0x1857F40)

namespace MX::Data
{
	inline static constexpr unsigned int RaidLimitedRewardInfo_TypeDefinitionIndex = 15876;

	class RaidLimitedRewardInfo : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x10
		::System::Int64 _LimitedRewardId_k__BackingField; // 0x18
		Il2CppObject* _Reward_k__BackingField; // 0x20

		::System::Void .ctor(::MX::Data::Excel::EliminateRaidStageLimitedRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EliminateRaidStageLimitedRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDLIMITEDREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDLIMITEDREWARDINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_LimitedRewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDLIMITEDREWARDINFO_SET_LIMITEDREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Reward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDLIMITEDREWARDINFO_SET_REWARD_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LimitedRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDLIMITEDREWARDINFO_GET_LIMITEDREWARDID_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDLIMITEDREWARDINFO_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Reward()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDLIMITEDREWARDINFO_GET_REWARD_OFFSET))(nullptr);
		}

	};
}

