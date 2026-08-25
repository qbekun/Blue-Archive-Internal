#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CharacterGearExcel; }
namespace MX::Data::Excel { class CharacterGearExcel&; }

#define MX_DATA_GEARDATA_GET_CHARACTERGEAREXCELS_OFFSET UNITYSDK_OFFSET(0x18DD470)
#define MX_DATA_GEARDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18DD4C0)
#define MX_DATA_GEARDATA_PREPAREINITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x18DD560)
#define MX_DATA_GEARDATA_GETGEARDATA_OFFSET UNITYSDK_OFFSET(0x18DE090)
#define MX_DATA_GEARDATA_TRYGETGEAREXCEL_OFFSET UNITYSDK_OFFSET(0x18DE0F0)
#define MX_DATA_GEARDATA_TRYGETGEARDATABYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x18DE150)
#define MX_DATA_GEARDATA_TRYGETGEARDATABYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x18DE2A0)
#define MX_DATA_GEARDATA_HASGEARDATA_OFFSET UNITYSDK_OFFSET(0x18DE3F0)
#define MX_DATA_GEARDATA_GETGEAREXCELSBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x18DE440)
#define MX_DATA_GEARDATA_TRYGETGEAROPTIONDATASBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x18DE550)
#define MX_DATA_GEARDATA_GETREQUIREDEXPTOLEVELUP_OFFSET UNITYSDK_OFFSET(0x18DE5B0)
#define MX_DATA_GEARDATA_HASLEVELDATA_OFFSET UNITYSDK_OFFSET(0x18DE680)
#define MX_DATA_GEARDATA_GETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x18DE760)
#define MX_DATA_GEARDATA_GETMAXLEVELBYSTARGRADE_OFFSET UNITYSDK_OFFSET(0x18DE770)
#define MX_DATA_GEARDATA_GETTOTALEXPBASELEVELTOTARGETLEVEL_OFFSET UNITYSDK_OFFSET(0x18DE880)
#define MX_DATA_GEARDATA_TRYGETTRANSCENDENCERECIPEID_OFFSET UNITYSDK_OFFSET(0x18DE960)
#define MX_DATA_GEARDATA_TRYGETOPENFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x18DE9E0)
#define MX_DATA_GEARDATA_GETEQUIPMENTEXCELENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18DEA60)
#define MX_DATA_GEARDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18DEAF0)

namespace MX::Data
{
	inline static constexpr unsigned int GearData_TypeDefinitionIndex = 16138;

	class GearData : public Il2CppObject
	{
	public:
		Il2CppObject* gearDic; // 0x28
		Il2CppObject* gearLevelTable; // 0x30
		Il2CppObject* gearOptionDataInfoDic; // 0x38

		Il2CppObject* get_CharacterGearExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_GET_CHARACTERGEAREXCELS_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitializeData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_PREPAREINITIALIZEDATA_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterGearExcel* GetGearData(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::CharacterGearExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_GETGEARDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetGearExcel(::System::Int64 arg, ::MX::Data::Excel::CharacterGearExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CharacterGearExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_TRYGETGEAREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetGearDataByCharacterId(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::Excel::CharacterGearExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::Excel::CharacterGearExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_TRYGETGEARDATABYCHARACTERID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetGearDataByCharacterId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_TRYGETGEARDATABYCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasGearData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_HASGEARDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetGearExcelsByCharacterId(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_GETGEAREXCELSBYCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetGearOptionDatasByCharacterId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_TRYGETGEAROPTIONDATASBYCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetRequiredExpToLevelUp(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_GETREQUIREDEXPTOLEVELUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasLevelData(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_HASLEVELDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetMaxLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_GETMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxLevelByStarGrade(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_GETMAXLEVELBYSTARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetTotalExpBaseLevelToTargetLevel(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_GETTOTALEXPBASELEVELTOTARGETLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetTranscendenceRecipeId(::System::Int64 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_TRYGETTRANSCENDENCERECIPEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetOpenFavorLevel(::System::Int64 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_TRYGETOPENFAVORLEVEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetEquipmentExcelEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_GETEQUIPMENTEXCELENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GEARDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

