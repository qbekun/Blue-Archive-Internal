#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MiniGameDreamScheduleResultExcel; }
namespace FlatData { class DreamMakerResult; }

#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_GET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1904760)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_SET_PARAMCHANGEINFOS_OFFSET UNITYSDK_OFFSET(0x1904780)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_GET_DREAMMAKERRESULT_OFFSET UNITYSDK_OFFSET(0x1904790)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1904420)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_GET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x19047C0)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_GET_PARAMCHANGEINFOS_OFFSET UNITYSDK_OFFSET(0x19047D0)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1904740)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x19047E0)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_GET__EXCEL_OFFSET UNITYSDK_OFFSET(0x1904800)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_SET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1904810)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameDreamMakerScheduleResultExcelInfo_TypeDefinitionIndex = 16212;

	class MiniGameDreamMakerScheduleResultExcelInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _ParamChangeInfos_k__BackingField; // 0x10
		Il2CppObject* _RewardParcelInfos_k__BackingField; // 0x18
		::MX::Data::Excel::MiniGameDreamScheduleResultExcel* __excel_k__BackingField; // 0x20

		::System::Int64 get_ScheduleGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_GET_SCHEDULEGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ParamChangeInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_SET_PARAMCHANGEINFOS_OFFSET))(arg, nullptr);
		}

		::FlatData::DreamMakerResult* get_DreamMakerResult()
		{
			return (return (::FlatData::DreamMakerResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_GET_DREAMMAKERRESULT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MiniGameDreamScheduleResultExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameDreamScheduleResultExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardParcelInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_GET_REWARDPARCELINFOS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParamChangeInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_GET_PARAMCHANGEINFOS_OFFSET))(nullptr);
		}

		::System::Int64 get_Weight()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_GET_WEIGHT_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_GET_ID_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDreamScheduleResultExcel* get__excel()
		{
			return (return (::MX::Data::Excel::MiniGameDreamScheduleResultExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_GET__EXCEL_OFFSET))(nullptr);
		}

		::System::Void set_RewardParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULERESULTEXCELINFO_SET_REWARDPARCELINFOS_OFFSET))(arg, nullptr);
		}

	};
}

