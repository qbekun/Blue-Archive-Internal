#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FieldStoryStageExcel; }

#define MXFIELD_SHARED_DATA_FIELDSTORYSTAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7FB30)
#define MXFIELD_SHARED_DATA_FIELDSTORYSTAGEINFO_GET_SKIPFORMATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0xE7FCD0)
#define MXFIELD_SHARED_DATA_FIELDSTORYSTAGEINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE7FCE0)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldStoryStageInfo_TypeDefinitionIndex = 10611;

	class FieldStoryStageInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x138
		::System::Boolean _SkipFormationSettings_k__BackingField; // 0x140

		::System::Void .ctor(::FlatData::FieldStoryStageExcel* arg)
		{
			((::System::Void(*)(::FlatData::FieldStoryStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSTORYSTAGEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SkipFormationSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSTORYSTAGEINFO_GET_SKIPFORMATIONSETTINGS_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDSTORYSTAGEINFO_GET_SEASONID_OFFSET))(nullptr);
		}

	};
}

