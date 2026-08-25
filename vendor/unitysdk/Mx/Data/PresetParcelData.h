#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class PresetCharacterGroupExcel; }

#define MX_DATA_PRESETPARCELDATA_TRYGETPRESETPARCELBYPRESETGROUPID_OFFSET UNITYSDK_OFFSET(0x191E650)
#define MX_DATA_PRESETPARCELDATA_GETALLPRESETCHARACTERS_OFFSET UNITYSDK_OFFSET(0x191E6B0)
#define MX_DATA_PRESETPARCELDATA_TRYGETPRESETCHARACTERBYPRESETGROUPID_OFFSET UNITYSDK_OFFSET(0x191E6C0)
#define MX_DATA_PRESETPARCELDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x191E720)
#define MX_DATA_PRESETPARCELDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x1920140)
#define MX_DATA_PRESETPARCELDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1920DE0)
#define MX_DATA_PRESETPARCELDATA_GETPRESETCHARACTERGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1920E60)
#define MX_DATA_PRESETPARCELDATA_TRYGETPRESETCHARACTERIDSBYPRESETGROUPID_OFFSET UNITYSDK_OFFSET(0x1920F30)
#define MX_DATA_PRESETPARCELDATA_GETALLPRESETPARCELS_OFFSET UNITYSDK_OFFSET(0x1920F90)
#define MX_DATA_PRESETPARCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1920FA0)

namespace MX::Data
{
	inline static constexpr unsigned int PresetParcelData_TypeDefinitionIndex = 16292;

	class PresetParcelData : public Il2CppObject
	{
	public:
		Il2CppObject* presetParcelExcels; // 0x28
		Il2CppObject* presetCharacterGroupExcels; // 0x30
		Il2CppObject* presetCharacterGroupSettingExcels; // 0x38
		Il2CppObject* presetParcels; // 0x40
		Il2CppObject* presetParcelGroup; // 0x48
		Il2CppObject* presetCharacterDBs; // 0x50
		Il2CppObject* presetTypeNamesByGroupId; // 0x58
		Il2CppObject* characterIdsByGroup; // 0x60
		Il2CppObject* presetCharacterDBsByGroup; // 0x68

		::System::Boolean TryGetPresetParcelByPresetGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRESETPARCELDATA_TRYGETPRESETPARCELBYPRESETGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAllPresetCharacters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRESETPARCELDATA_GETALLPRESETCHARACTERS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetPresetCharacterByPresetGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRESETPARCELDATA_TRYGETPRESETCHARACTERBYPRESETGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRESETPARCELDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRESETPARCELDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRESETPARCELDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::MX::Data::Excel::PresetCharacterGroupExcel* GetPresetCharacterGroupExcel(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::PresetCharacterGroupExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRESETPARCELDATA_GETPRESETCHARACTERGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetPresetCharacterIdsByPresetGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRESETPARCELDATA_TRYGETPRESETCHARACTERIDSBYPRESETGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAllPresetParcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRESETPARCELDATA_GETALLPRESETPARCELS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRESETPARCELDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

