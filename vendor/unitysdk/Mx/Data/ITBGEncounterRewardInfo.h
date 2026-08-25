#pragma once
#include "../../unitysdk.h"

namespace FlatData { class TBGOptionSuccessType; }

#define MX_DATA_ITBGENCOUNTERREWARDINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERREWARDINFO_GET_OPTIONSUCCESSTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERREWARDINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERREWARDINFO_GET_PROB_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERREWARDINFO_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGENCOUNTERREWARDINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int ITBGEncounterRewardInfo_TypeDefinitionIndex = 16235;

	class ITBGEncounterRewardInfo : public Il2CppObject
	{
	public:
		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERREWARDINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::TBGOptionSuccessType* get_OptionSuccessType()
		{
			return (return (::FlatData::TBGOptionSuccessType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERREWARDINFO_GET_OPTIONSUCCESSTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERREWARDINFO_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERREWARDINFO_GET_PROB_OFFSET))(nullptr);
		}

		::System::Int64 get_Parameter()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERREWARDINFO_GET_PARAMETER_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGENCOUNTERREWARDINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

