#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EventContentDiceRaceResultType; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class EventContentDiceRaceProbExcel; }

#define MX_DATA_EVENTCONTENTDICERACEPROBINFO_GET_PROB_OFFSET UNITYSDK_OFFSET(0x18462D0)
#define MX_DATA_EVENTCONTENTDICERACEPROBINFO_SET_DICERACERESULTTYPE_OFFSET UNITYSDK_OFFSET(0x18462E0)
#define MX_DATA_EVENTCONTENTDICERACEPROBINFO_SET_DICERESULT_OFFSET UNITYSDK_OFFSET(0x18462F0)
#define MX_DATA_EVENTCONTENTDICERACEPROBINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1846300)
#define MX_DATA_EVENTCONTENTDICERACEPROBINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1846310)
#define MX_DATA_EVENTCONTENTDICERACEPROBINFO_GET_ISRANDOMDICERACERESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1846410)
#define MX_DATA_EVENTCONTENTDICERACEPROBINFO_GET_DICERESULT_OFFSET UNITYSDK_OFFSET(0x1846490)
#define MX_DATA_EVENTCONTENTDICERACEPROBINFO_SET_PROB_OFFSET UNITYSDK_OFFSET(0x18464A0)
#define MX_DATA_EVENTCONTENTDICERACEPROBINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18464B0)
#define MX_DATA_EVENTCONTENTDICERACEPROBINFO_GET_COSTPARCELINFO_OFFSET UNITYSDK_OFFSET(0x18464C0)
#define MX_DATA_EVENTCONTENTDICERACEPROBINFO_GET_DICERACERESULTTYPE_OFFSET UNITYSDK_OFFSET(0x18464D0)
#define MX_DATA_EVENTCONTENTDICERACEPROBINFO_SET_COSTPARCELINFO_OFFSET UNITYSDK_OFFSET(0x18464E0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentDiceRaceProbInfo_TypeDefinitionIndex = 15810;

	class EventContentDiceRaceProbInfo : public Il2CppObject
	{
	public:
		::FlatData::EventContentDiceRaceResultType* _DiceRaceResultType_k__BackingField; // 0x10
		::System::Int64 _EventContentId_k__BackingField; // 0x18
		::System::Int64 _DiceResult_k__BackingField; // 0x20
		::System::Int64 _Prob_k__BackingField; // 0x28
		::MX::GameLogic::Parcel::ParcelInfo* _CostParcelInfo_k__BackingField; // 0x30

		::System::Int64 get_Prob()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEPROBINFO_GET_PROB_OFFSET))(nullptr);
		}

		::System::Void set_DiceRaceResultType(::FlatData::EventContentDiceRaceResultType* arg)
		{
			((::System::Void(*)(::FlatData::EventContentDiceRaceResultType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEPROBINFO_SET_DICERACERESULTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_DiceResult(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEPROBINFO_SET_DICERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEPROBINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentDiceRaceProbExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentDiceRaceProbExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEPROBINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRandomDiceRaceResultType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEPROBINFO_GET_ISRANDOMDICERACERESULTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_DiceResult()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEPROBINFO_GET_DICERESULT_OFFSET))(nullptr);
		}

		::System::Void set_Prob(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEPROBINFO_SET_PROB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEPROBINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_CostParcelInfo()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEPROBINFO_GET_COSTPARCELINFO_OFFSET))(nullptr);
		}

		::FlatData::EventContentDiceRaceResultType* get_DiceRaceResultType()
		{
			return (return (::FlatData::EventContentDiceRaceResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEPROBINFO_GET_DICERACERESULTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CostParcelInfo(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEPROBINFO_SET_COSTPARCELINFO_OFFSET))(arg, nullptr);
		}

	};
}

