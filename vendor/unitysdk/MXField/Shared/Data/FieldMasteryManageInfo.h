#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FieldMasteryManageExcel; }

#define MXFIELD_SHARED_DATA_FIELDMASTERYMANAGEINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE7B540)
#define MXFIELD_SHARED_DATA_FIELDMASTERYMANAGEINFO_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xE7B550)
#define MXFIELD_SHARED_DATA_FIELDMASTERYMANAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7B560)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldMasteryManageInfo_TypeDefinitionIndex = 10586;

	class FieldMasteryManageInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::Int64 _LevelId_k__BackingField; // 0x18

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYMANAGEINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYMANAGEINFO_GET_LEVELID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::FieldMasteryManageExcel* arg)
		{
			((::System::Void(*)(::FlatData::FieldMasteryManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYMANAGEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

