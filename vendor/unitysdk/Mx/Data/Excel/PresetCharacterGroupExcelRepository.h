#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C2EE50)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C2EE90)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCELREPOSITORY_SELECT_PRESETCHARACTERGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1C2F000)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCELREPOSITORY_SELECT_PRESETCHARACTERGROUPID_OFFSET UNITYSDK_OFFSET(0x1C2F400)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCELREPOSITORY_SELECTFIRST_PRESETCHARACTERGROUPID_OFFSET UNITYSDK_OFFSET(0x1C2F700)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PresetCharacterGroupExcelRepository_TypeDefinitionIndex = 19070;

	class PresetCharacterGroupExcelRepository : public DebugLog
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_PresetCharacterGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCELREPOSITORY_SELECT_PRESETCHARACTERGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_PresetCharacterGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCELREPOSITORY_SELECT_PRESETCHARACTERGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_PresetCharacterGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCELREPOSITORY_SELECTFIRST_PRESETCHARACTERGROUPID_OFFSET))(arg, arg, nullptr);
		}

	};
}

