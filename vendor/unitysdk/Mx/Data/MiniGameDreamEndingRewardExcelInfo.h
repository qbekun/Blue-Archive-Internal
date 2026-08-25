#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MiniGameDreamEndingRewardExcel; }
namespace FlatData { class DreamMakerEndingRewardType; }

#define MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1904B50)
#define MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_GET_REWARDTAG_OFFSET UNITYSDK_OFFSET(0x1904B70)
#define MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_GET__EXCEL_OFFSET UNITYSDK_OFFSET(0x1904B90)
#define MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_SET__EXCEL_OFFSET UNITYSDK_OFFSET(0x1904BA0)
#define MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x19048B0)
#define MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_GET_ENDINGID_OFFSET UNITYSDK_OFFSET(0x1904BC0)
#define MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_GETREWARDS_OFFSET UNITYSDK_OFFSET(0x1904BE0)
#define MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1904D10)
#define MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1904D20)
#define MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1904D40)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameDreamEndingRewardExcelInfo_TypeDefinitionIndex = 16216;

	class MiniGameDreamEndingRewardExcelInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _Rewards_k__BackingField; // 0x10
		::MX::Data::Excel::MiniGameDreamEndingRewardExcel* __excel_k__BackingField; // 0x18

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::FlatData::DreamMakerEndingRewardType* get_RewardTag()
		{
			return (return (::FlatData::DreamMakerEndingRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_GET_REWARDTAG_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDreamEndingRewardExcel* get__excel()
		{
			return (return (::MX::Data::Excel::MiniGameDreamEndingRewardExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_GET__EXCEL_OFFSET))(nullptr);
		}

		::System::Void set__excel(::MX::Data::Excel::MiniGameDreamEndingRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameDreamEndingRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_SET__EXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MiniGameDreamEndingRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameDreamEndingRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EndingId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_GET_ENDINGID_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_GETREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGREWARDEXCELINFO_GET_REWARDS_OFFSET))(nullptr);
		}

	};
}

