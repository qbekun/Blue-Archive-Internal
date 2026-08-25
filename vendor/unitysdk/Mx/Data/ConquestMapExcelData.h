#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ConquestMapExcel; }
namespace MX::Conquest { class ConquestTileMap; }
namespace FlatData { class StageDifficulty; }
namespace FlatData { class ConquestConditionType; }

#define MX_DATA_CONQUESTMAPEXCELDATA_GET_EXCELDATA_OFFSET UNITYSDK_OFFSET(0x1838DD0)
#define MX_DATA_CONQUESTMAPEXCELDATA_SET_EXCELDATA_OFFSET UNITYSDK_OFFSET(0x1838DE0)
#define MX_DATA_CONQUESTMAPEXCELDATA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1838E00)
#define MX_DATA_CONQUESTMAPEXCELDATA_GET_MAPDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1838E20)
#define MX_DATA_CONQUESTMAPEXCELDATA_GET_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x1838E40)
#define MX_DATA_CONQUESTMAPEXCELDATA_GET_CONQUESTTILEMAPHASH_OFFSET UNITYSDK_OFFSET(0x1838E60)
#define MX_DATA_CONQUESTMAPEXCELDATA_SET_CONQUESTTILEMAPHASH_OFFSET UNITYSDK_OFFSET(0x1838E70)
#define MX_DATA_CONQUESTMAPEXCELDATA_GET_CONQUESTTILEMAPNAME_OFFSET UNITYSDK_OFFSET(0x1838E80)
#define MX_DATA_CONQUESTMAPEXCELDATA_GET_MAPGOALLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1838EA0)
#define MX_DATA_CONQUESTMAPEXCELDATA_GET_STEPGOALLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1838EC0)
#define MX_DATA_CONQUESTMAPEXCELDATA_GET_STEPENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1838EE0)
#define MX_DATA_CONQUESTMAPEXCELDATA_GET_CONQUESTMAPBG_OFFSET UNITYSDK_OFFSET(0x1838F00)
#define MX_DATA_CONQUESTMAPEXCELDATA_GET_CAMERASETTINGID_OFFSET UNITYSDK_OFFSET(0x1838F20)
#define MX_DATA_CONQUESTMAPEXCELDATA_GET_STEPNAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1838F40)
#define MX_DATA_CONQUESTMAPEXCELDATA_GET_OPENCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1838F60)
#define MX_DATA_CONQUESTMAPEXCELDATA_SET_OPENCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1838F70)
#define MX_DATA_CONQUESTMAPEXCELDATA_GET__OPENCONDITIONBYTYPE_OFFSET UNITYSDK_OFFSET(0x1838F80)
#define MX_DATA_CONQUESTMAPEXCELDATA_SET__OPENCONDITIONBYTYPE_OFFSET UNITYSDK_OFFSET(0x1838F90)
#define MX_DATA_CONQUESTMAPEXCELDATA_GET__OPENCONDITIONBYREALTYPE_OFFSET UNITYSDK_OFFSET(0x1838FA0)
#define MX_DATA_CONQUESTMAPEXCELDATA_SET__OPENCONDITIONBYREALTYPE_OFFSET UNITYSDK_OFFSET(0x1838FB0)
#define MX_DATA_CONQUESTMAPEXCELDATA_GET_CONQUESTTILEMAP_OFFSET UNITYSDK_OFFSET(0x1838FC0)
#define MX_DATA_CONQUESTMAPEXCELDATA_SET_CONQUESTTILEMAP_OFFSET UNITYSDK_OFFSET(0x1838FD0)
#define MX_DATA_CONQUESTMAPEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1838FE0)
#define MX_DATA_CONQUESTMAPEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18395F0)
#define MX_DATA_CONQUESTMAPEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1839820)
#define MX_DATA_CONQUESTMAPEXCELDATA_TRYGETSTEPOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1839860)
#define MX_DATA_CONQUESTMAPEXCELDATA_TRYGETSTEPOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int ConquestMapExcelData_TypeDefinitionIndex = 15755;

	class ConquestMapExcelData : public Il2CppObject
	{
	public:
		::MX::Data::Excel::ConquestMapExcel* _excelData_k__BackingField; // 0x10
		::System::UInt64 _ConquestTileMapHash_k__BackingField; // 0x20
		Il2CppObject* _OpenConditions_k__BackingField; // 0x28
		Il2CppObject* __openConditionByType_k__BackingField; // 0x30
		Il2CppObject* __openConditionByRealType_k__BackingField; // 0x38
		::MX::Conquest::ConquestTileMap* _ConquestTileMap_k__BackingField; // 0x40

		::MX::Data::Excel::ConquestMapExcel* get_excelData()
		{
			return (return (::MX::Data::Excel::ConquestMapExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET_EXCELDATA_OFFSET))(nullptr);
		}

		::System::Void set_excelData(::MX::Data::Excel::ConquestMapExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestMapExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_SET_EXCELDATA_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_MapDifficulty()
		{
			return (return (::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET_MAPDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int64 get_StepIndex()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET_STEPINDEX_OFFSET))(nullptr);
		}

		::System::UInt64 get_ConquestTileMapHash()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET_CONQUESTTILEMAPHASH_OFFSET))(nullptr);
		}

		::System::Void set_ConquestTileMapHash(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_SET_CONQUESTTILEMAPHASH_OFFSET))(arg, nullptr);
		}

		::System::String* get_ConquestTileMapName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET_CONQUESTTILEMAPNAME_OFFSET))(nullptr);
		}

		::System::String* get_MapGoalLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET_MAPGOALLOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_StepGoalLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET_STEPGOALLOCALIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_StepEnterScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET_STEPENTERSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_ConquestMapBG()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET_CONQUESTMAPBG_OFFSET))(nullptr);
		}

		::System::Int64 get_CameraSettingId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET_CAMERASETTINGID_OFFSET))(nullptr);
		}

		::System::String* get_StepNameLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET_STEPNAMELOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* get_OpenConditions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET_OPENCONDITIONS_OFFSET))(nullptr);
		}

		::System::Void set_OpenConditions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_SET_OPENCONDITIONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__openConditionByType()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET__OPENCONDITIONBYTYPE_OFFSET))(nullptr);
		}

		::System::Void set__openConditionByType(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_SET__OPENCONDITIONBYTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__openConditionByRealType()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET__OPENCONDITIONBYREALTYPE_OFFSET))(nullptr);
		}

		::System::Void set__openConditionByRealType(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_SET__OPENCONDITIONBYREALTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMap* get_ConquestTileMap()
		{
			return (return (::MX::Conquest::ConquestTileMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_GET_CONQUESTTILEMAP_OFFSET))(nullptr);
		}

		::System::Void set_ConquestTileMap(::MX::Conquest::ConquestTileMap* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_SET_CONQUESTTILEMAP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ConquestMapExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestMapExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ConquestMapExcel* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestMapExcel*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ConquestMapExcel* arg, ::MX::Conquest::ConquestTileMap* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestMapExcel*, ::MX::Conquest::ConquestTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetStepOpenCondition(::FlatData::ConquestConditionType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ConquestConditionType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_TRYGETSTEPOPENCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetStepOpenCondition(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTMAPEXCELDATA_TRYGETSTEPOPENCONDITION_OFFSET))(arg, nullptr);
		}

	};
}

