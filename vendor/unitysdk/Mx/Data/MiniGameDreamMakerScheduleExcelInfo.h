#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MiniGameDreamScheduleExcel; }

#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_SCHEDULERESULTINFOS_OFFSET UNITYSDK_OFFSET(0x1904200)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1904210)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1904230)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_SET_SCHEDULERESULTINFOS_OFFSET UNITYSDK_OFFSET(0x1904250)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1904260)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_WEIGHTSUM_OFFSET UNITYSDK_OFFSET(0x1904280)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_LOADINGRESOURCE02_OFFSET UNITYSDK_OFFSET(0x1904290)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x19042B0)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_LOADINGRESOURCE01_OFFSET UNITYSDK_OFFSET(0x19042D0)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET__EXCEL_OFFSET UNITYSDK_OFFSET(0x19042F0)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1904300)
#define MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x19036F0)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameDreamMakerScheduleExcelInfo_TypeDefinitionIndex = 16211;

	class MiniGameDreamMakerScheduleExcelInfo : public Il2CppObject
	{
	public:
		::System::Int64 _WeightSum_k__BackingField; // 0x10
		::MX::Data::Excel::MiniGameDreamScheduleExcel* __excel_k__BackingField; // 0x18
		Il2CppObject* _ScheduleResultInfos_k__BackingField; // 0x28

		Il2CppObject* get_ScheduleResultInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_SCHEDULERESULTINFOS_OFFSET))(nullptr);
		}

		::System::String* get_AnimationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_ANIMATIONNAME_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Void set_ScheduleResultInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_SET_SCHEDULERESULTINFOS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_WeightSum()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_WEIGHTSUM_OFFSET))(nullptr);
		}

		::System::String* get_LoadingResource02()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_LOADINGRESOURCE02_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_ICONPATH_OFFSET))(nullptr);
		}

		::System::String* get_LoadingResource01()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_LOADINGRESOURCE01_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDreamScheduleExcel* get__excel()
		{
			return (return (::MX::Data::Excel::MiniGameDreamScheduleExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET__EXCEL_OFFSET))(nullptr);
		}

		::System::Int64 get_ScheduleGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_GET_SCHEDULEGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MiniGameDreamScheduleExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameDreamScheduleExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMMAKERSCHEDULEEXCELINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

