#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class AcademyFavorScheduleExcel; }

#define MX_DATA_ACADEMYFAVORSCHEDULEDATA_GET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x180D3E0)
#define MX_DATA_ACADEMYFAVORSCHEDULEDATA_SET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x180D3F0)
#define MX_DATA_ACADEMYFAVORSCHEDULEDATA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x180D400)
#define MX_DATA_ACADEMYFAVORSCHEDULEDATA_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x180D410)
#define MX_DATA_ACADEMYFAVORSCHEDULEDATA_GET_SCENARIOTITLEID_OFFSET UNITYSDK_OFFSET(0x180D420)
#define MX_DATA_ACADEMYFAVORSCHEDULEDATA_SET_SCENARIOTITLEID_OFFSET UNITYSDK_OFFSET(0x180D430)
#define MX_DATA_ACADEMYFAVORSCHEDULEDATA_GET_SCENARIOSRIPTGROUPID_OFFSET UNITYSDK_OFFSET(0x180D440)
#define MX_DATA_ACADEMYFAVORSCHEDULEDATA_SET_SCENARIOSRIPTGROUPID_OFFSET UNITYSDK_OFFSET(0x180D450)
#define MX_DATA_ACADEMYFAVORSCHEDULEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x180D460)
#define MX_DATA_ACADEMYFAVORSCHEDULEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x180D5D0)

namespace MX::Data
{
	inline static constexpr unsigned int AcademyFavorScheduleData_TypeDefinitionIndex = 15704;

	class AcademyFavorScheduleData : public UniTaskLoopRunnerLastYieldEarlyUpdate
	{
	public:
		::System::Int64 _FavorRank_k__BackingField; // 0x80
		::System::Int64 _CharacterId_k__BackingField; // 0x88
		::System::UInt32 _ScenarioTitleId_k__BackingField; // 0x90
		::System::Int64 _ScenarioSriptGroupId_k__BackingField; // 0x98

		::System::Int64 get_FavorRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYFAVORSCHEDULEDATA_GET_FAVORRANK_OFFSET))(nullptr);
		}

		::System::Void set_FavorRank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYFAVORSCHEDULEDATA_SET_FAVORRANK_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYFAVORSCHEDULEDATA_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYFAVORSCHEDULEDATA_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_ScenarioTitleId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYFAVORSCHEDULEDATA_GET_SCENARIOTITLEID_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioTitleId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYFAVORSCHEDULEDATA_SET_SCENARIOTITLEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScenarioSriptGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYFAVORSCHEDULEDATA_GET_SCENARIOSRIPTGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioSriptGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYFAVORSCHEDULEDATA_SET_SCENARIOSRIPTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYFAVORSCHEDULEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::AcademyFavorScheduleExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::AcademyFavorScheduleExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYFAVORSCHEDULEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

