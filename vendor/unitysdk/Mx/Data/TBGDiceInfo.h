#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MinigameTBGDiceExcel; }

#define MX_DATA_TBGDICEINFO_GET_DICEGROUP_OFFSET UNITYSDK_OFFSET(0x190B900)
#define MX_DATA_TBGDICEINFO_GET_PROBMODIFIES_OFFSET UNITYSDK_OFFSET(0x190B920)
#define MX_DATA_TBGDICEINFO_SET_PROBMODIFIES_OFFSET UNITYSDK_OFFSET(0x190B930)
#define MX_DATA_TBGDICEINFO_GET_PROB_OFFSET UNITYSDK_OFFSET(0x190B940)
#define MX_DATA_TBGDICEINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x190B960)
#define MX_DATA_TBGDICEINFO_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x190B980)
#define MX_DATA_TBGDICEINFO_GET_DICERESULT_OFFSET UNITYSDK_OFFSET(0x190B990)
#define MX_DATA_TBGDICEINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x190B9B0)
#define MX_DATA_TBGDICEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x190B9D0)

namespace MX::Data
{
	inline static constexpr unsigned int TBGDiceInfo_TypeDefinitionIndex = 16240;

	class TBGDiceInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _ProbModifies_k__BackingField; // 0x10
		::MX::Data::Excel::MinigameTBGDiceExcel* _Excel_k__BackingField; // 0x18

		::System::Int32 get_DiceGroup()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGDICEINFO_GET_DICEGROUP_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProbModifies()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGDICEINFO_GET_PROBMODIFIES_OFFSET))(nullptr);
		}

		::System::Void set_ProbModifies(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGDICEINFO_SET_PROBMODIFIES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGDICEINFO_GET_PROB_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGDICEINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGDiceExcel* get_Excel()
		{
			return (return (::MX::Data::Excel::MinigameTBGDiceExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGDICEINFO_GET_EXCEL_OFFSET))(nullptr);
		}

		::System::Int32 get_DiceResult()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGDICEINFO_GET_DICERESULT_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGDICEINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MinigameTBGDiceExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameTBGDiceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGDICEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

