#pragma once
#include "../../unitysdk.h"

namespace FlatData { class LimitedStageExcel&; }
namespace MX::Data { class LimitedStageSeasonInfo&; }

#define MX_DATA_LIMITEDSTAGEDATA_TRYGETLIMITEDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x18E8BC0)
#define MX_DATA_LIMITEDSTAGEDATA_SET_RAWDATAPATH_OFFSET UNITYSDK_OFFSET(0x18E8C20)
#define MX_DATA_LIMITEDSTAGEDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x18E8C30)
#define MX_DATA_LIMITEDSTAGEDATA_TRYGETSEASONINFO_OFFSET UNITYSDK_OFFSET(0x18E9670)
#define MX_DATA_LIMITEDSTAGEDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0x18E96D0)
#define MX_DATA_LIMITEDSTAGEDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x18E9ED0)
#define MX_DATA_LIMITEDSTAGEDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0x18E9EE0)
#define MX_DATA_LIMITEDSTAGEDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0x18E9F50)
#define MX_DATA_LIMITEDSTAGEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18E9F60)
#define MX_DATA_LIMITEDSTAGEDATA_GET_RAWDATAPATH_OFFSET UNITYSDK_OFFSET(0x18EA120)
#define MX_DATA_LIMITEDSTAGEDATA_DATAPREPROCESSING_OFFSET UNITYSDK_OFFSET(0x18EA130)
#define MX_DATA_LIMITEDSTAGEDATA_GETSTAGEREWARD_OFFSET UNITYSDK_OFFSET(0x18EA950)

namespace MX::Data
{
	inline static constexpr unsigned int LimitedStageData_TypeDefinitionIndex = 16167;

	class LimitedStageData : public Il2CppObject
	{
	public:
		Il2CppObject* stageDic; // 0x18
		Il2CppObject* rewardDic; // 0x20
		Il2CppObject* seasonExcels; // 0x28
		Il2CppObject* stageInfoDic; // 0x30
		Il2CppObject* seasonInfoDic; // 0x38
		::System::String* _RawDataPath_k__BackingField; // 0x40

		::System::Boolean TryGetLimitedStageExcel(::System::Int64 arg, ::FlatData::LimitedStageExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::LimitedStageExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGEDATA_TRYGETLIMITEDSTAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_RawDataPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGEDATA_SET_RAWDATAPATH_OFFSET))(str, nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGEDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSeasonInfo(::System::Int64 arg, ::MX::Data::LimitedStageSeasonInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::LimitedStageSeasonInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGEDATA_TRYGETSEASONINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGEDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean ValidateData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGEDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGEDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGEDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_RawDataPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGEDATA_GET_RAWDATAPATH_OFFSET))(nullptr);
		}

		::System::Void DataPreprocessing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGEDATA_DATAPREPROCESSING_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageReward(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGEDATA_GETSTAGEREWARD_OFFSET))(arg, nullptr);
		}

	};
}

