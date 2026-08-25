#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MinigameTBGEncounterRewardExcel; }
namespace FlatData { class TBGOptionSuccessType; }

#define MX_DATA_TBGENCOUNTERREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x190C150)
#define MX_DATA_TBGENCOUNTERREWARDINFO_GET_PROB_OFFSET UNITYSDK_OFFSET(0x190C300)
#define MX_DATA_TBGENCOUNTERREWARDINFO_GET_OPTIONSUCCESSTYPE_OFFSET UNITYSDK_OFFSET(0x190C2E0)
#define MX_DATA_TBGENCOUNTERREWARDINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x190C320)
#define MX_DATA_TBGENCOUNTERREWARDINFO_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x190C340)
#define MX_DATA_TBGENCOUNTERREWARDINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x190C360)
#define MX_DATA_TBGENCOUNTERREWARDINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x190C380)
#define MX_DATA_TBGENCOUNTERREWARDINFO_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x190C390)

namespace MX::Data
{
	inline static constexpr unsigned int TBGEncounterRewardInfo_TypeDefinitionIndex = 16243;

	class TBGEncounterRewardInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _Rewards_k__BackingField; // 0x10
		::MX::Data::Excel::MinigameTBGEncounterRewardExcel* _Excel_k__BackingField; // 0x18

		::System::Void .ctor(::MX::Data::Excel::MinigameTBGEncounterRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameTBGEncounterRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERREWARDINFO_GET_PROB_OFFSET))(nullptr);
		}

		::FlatData::TBGOptionSuccessType* get_OptionSuccessType()
		{
			return (return (::FlatData::TBGOptionSuccessType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERREWARDINFO_GET_OPTIONSUCCESSTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERREWARDINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_Parameter()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERREWARDINFO_GET_PARAMETER_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERREWARDINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERREWARDINFO_GET_REWARDS_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGEncounterRewardExcel* get_Excel()
		{
			return (return (::MX::Data::Excel::MinigameTBGEncounterRewardExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTERREWARDINFO_GET_EXCEL_OFFSET))(nullptr);
		}

	};
}

