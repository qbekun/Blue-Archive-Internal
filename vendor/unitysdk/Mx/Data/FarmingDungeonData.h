#pragma once
#include "../../unitysdk.h"

namespace FlatData { class WeekDungeonType; }
namespace MX::Data { class FarmingDungeonLocationManageExcelData&; }
namespace FlatData { class SchoolDungeonType; }
namespace FlatData { class ContentType; }

#define MX_DATA_FARMINGDUNGEONDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18D84A0)
#define MX_DATA_FARMINGDUNGEONDATA_PREPAREINITDATA_OFFSET UNITYSDK_OFFSET(0x18D8500)
#define MX_DATA_FARMINGDUNGEONDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x18D8C50)
#define MX_DATA_FARMINGDUNGEONDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x18D8CB0)
#define MX_DATA_FARMINGDUNGEONDATA_FINDFARMINGDUNGEONLOCATIONMANAGEEXCELDATABYCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x18D8D10)
#define MX_DATA_FARMINGDUNGEONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D8DF0)

namespace MX::Data
{
	inline static constexpr unsigned int FarmingDungeonData_TypeDefinitionIndex = 16120;

	class FarmingDungeonData : public Il2CppObject
	{
	public:
		Il2CppObject* weekDungeonLocationManageExcelDatas; // 0x28
		Il2CppObject* schoolDungeonLocationManageExcelDatas; // 0x30
		Il2CppObject* locationManageExcelDatasByContentType; // 0x38

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FARMINGDUNGEONDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FARMINGDUNGEONDATA_PREPAREINITDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(::FlatData::WeekDungeonType* arg, ::MX::Data::FarmingDungeonLocationManageExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::WeekDungeonType*, ::MX::Data::FarmingDungeonLocationManageExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FARMINGDUNGEONDATA_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(::FlatData::SchoolDungeonType* arg, ::MX::Data::FarmingDungeonLocationManageExcelData&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::SchoolDungeonType*, ::MX::Data::FarmingDungeonLocationManageExcelData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FARMINGDUNGEONDATA_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* FindFarmingDungeonLocationManageExcelDataByContentType(::FlatData::ContentType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FARMINGDUNGEONDATA_FINDFARMINGDUNGEONLOCATIONMANAGEEXCELDATABYCONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FARMINGDUNGEONDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

