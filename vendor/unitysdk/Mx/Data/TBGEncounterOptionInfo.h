#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MinigameTBGEncounterOptionExcel; }

#define MX_DATA_TBGENCOUNTEROPTIONINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x190C3A0)
#define MX_DATA_TBGENCOUNTEROPTIONINFO_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x190C3C0)
#define MX_DATA_TBGENCOUNTEROPTIONINFO_GET_RUNAWAYORHIGHERDICECOUNT_OFFSET UNITYSDK_OFFSET(0x190C3E0)
#define MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONFAILLESSDICECOUNT_OFFSET UNITYSDK_OFFSET(0x190C400)
#define MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONGREATSUCCESSORHIGHERDICECOUNT_OFFSET UNITYSDK_OFFSET(0x190C420)
#define MX_DATA_TBGENCOUNTEROPTIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x190C440)
#define MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONSUCCESSLOCALIZE_OFFSET UNITYSDK_OFFSET(0x190C470)
#define MX_DATA_TBGENCOUNTEROPTIONINFO_GET_REWARDHIDE_OFFSET UNITYSDK_OFFSET(0x190C490)
#define MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONSUCCESSREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x190C4B0)
#define MX_DATA_TBGENCOUNTEROPTIONINFO_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x190C4D0)
#define MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONSUCCESSORHIGHERDICECOUNT_OFFSET UNITYSDK_OFFSET(0x190C4E0)
#define MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONFAILLOCALIZE_OFFSET UNITYSDK_OFFSET(0x190C500)
#define MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x190C520)
#define MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONTITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0x190C540)

namespace MX::Data
{
	inline static constexpr unsigned int TBGEncounterOptionInfo_TypeDefinitionIndex = 16244;

	class TBGEncounterOptionInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::MinigameTBGEncounterOptionExcel* _Excel_k__BackingField; // 0x10

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTEROPTIONINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTEROPTIONINFO_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_RunawayOrHigherDiceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTEROPTIONINFO_GET_RUNAWAYORHIGHERDICECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_OptionFailLessDiceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONFAILLESSDICECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_OptionGreatSuccessOrHigherDiceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONGREATSUCCESSORHIGHERDICECOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MinigameTBGEncounterOptionExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameTBGEncounterOptionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTEROPTIONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_OptionSuccessLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONSUCCESSLOCALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_RewardHide()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTEROPTIONINFO_GET_REWARDHIDE_OFFSET))(nullptr);
		}

		::System::Int64 get_OptionSuccessRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONSUCCESSREWARDGROUPID_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGEncounterOptionExcel* get_Excel()
		{
			return (return (::MX::Data::Excel::MinigameTBGEncounterOptionExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTEROPTIONINFO_GET_EXCEL_OFFSET))(nullptr);
		}

		::System::Int32 get_OptionSuccessOrHigherDiceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONSUCCESSORHIGHERDICECOUNT_OFFSET))(nullptr);
		}

		::System::String* get_OptionFailLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONFAILLOCALIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_OptionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_OptionTitleLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGENCOUNTEROPTIONINFO_GET_OPTIONTITLELOCALIZE_OFFSET))(nullptr);
		}

	};
}

