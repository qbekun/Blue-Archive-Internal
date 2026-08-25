#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentConcentrationRewardExcel; }
namespace FlatData { class ConcentrationRewardType; }
namespace FlatData { class Rarity; }

#define MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_GET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x183DCA0)
#define MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x183DCB0)
#define MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183DE60)
#define MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_GET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x183DE70)
#define MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x183DE80)
#define MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x183DE90)
#define MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x183DEA0)
#define MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x183DEB0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentConcentrationRewardInfo_TypeDefinitionIndex = 15777;

	class EventContentConcentrationRewardInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::EventContentConcentrationRewardExcel* _excel; // 0x10
		Il2CppObject* _RewardParcelInfos_k__BackingField; // 0x20

		Il2CppObject* get_RewardParcelInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_GET_REWARDPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentConcentrationRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentConcentrationRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::ConcentrationRewardType* get_RewardType()
		{
			return (return (::FlatData::ConcentrationRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_GET_REWARDTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_Round()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_GET_RARITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLoop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCONCENTRATIONREWARDINFO_GET_ISLOOP_OFFSET))(nullptr);
		}

	};
}

