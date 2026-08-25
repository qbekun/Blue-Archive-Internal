#pragma once
#include "../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace FlatData { class EventTargetType; }
namespace MX::Data::Excel { class WelcomeCampaignRewardIncreaseExcel; }

#define MX_DATA_WELCOMECAMPAIGNREWARDINCREASEINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x18632A0)
#define MX_DATA_WELCOMECAMPAIGNREWARDINCREASEINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x18632B0)
#define MX_DATA_WELCOMECAMPAIGNREWARDINCREASEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18632C0)
#define MX_DATA_WELCOMECAMPAIGNREWARDINCREASEINFO_GETEVENTINCREASE_OFFSET UNITYSDK_OFFSET(0x1863350)
#define MX_DATA_WELCOMECAMPAIGNREWARDINCREASEINFO_GET_INCREASEINFOS_OFFSET UNITYSDK_OFFSET(0x1863460)
#define MX_DATA_WELCOMECAMPAIGNREWARDINCREASEINFO_ADDEVENTINCREASE_OFFSET UNITYSDK_OFFSET(0x1863470)
#define MX_DATA_WELCOMECAMPAIGNREWARDINCREASEINFO_SET_INCREASEINFOS_OFFSET UNITYSDK_OFFSET(0x18635E0)

namespace MX::Data
{
	inline static constexpr unsigned int WelcomeCampaignRewardIncreaseInfo_TypeDefinitionIndex = 15917;

	class WelcomeCampaignRewardIncreaseInfo : public Il2CppObject
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x10
		Il2CppObject* _IncreaseInfos_k__BackingField; // 0x18

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNREWARDINCREASEINFO_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNREWARDINCREASEINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNREWARDINCREASEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* GetEventIncrease(::FlatData::EventTargetType* arg)
		{
			return (return (::MX::Core::Math::BasisPoint*(*)(::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNREWARDINCREASEINFO_GETEVENTINCREASE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_IncreaseInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNREWARDINCREASEINFO_GET_INCREASEINFOS_OFFSET))(nullptr);
		}

		::System::Void AddEventIncrease(::MX::Data::Excel::WelcomeCampaignRewardIncreaseExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WelcomeCampaignRewardIncreaseExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNREWARDINCREASEINFO_ADDEVENTINCREASE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IncreaseInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNREWARDINCREASEINFO_SET_INCREASEINFOS_OFFSET))(arg, nullptr);
		}

	};
}

