#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FieldCurtainCallFreeModeExcel; }

#define MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEINFO_GET_TARGETQUESTDATE_OFFSET UNITYSDK_OFFSET(0xE73930)
#define MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xE73940)
#define MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEINFO_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0xE73950)
#define MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE73960)
#define MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEINFO_GET_TARGETFIELDDATEID_OFFSET UNITYSDK_OFFSET(0xE739C0)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldCurtainCallFreeModeInfo_TypeDefinitionIndex = 10552;

	class FieldCurtainCallFreeModeInfo : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::Int64 _OpenDate_k__BackingField; // 0x18
		::System::Int64 _TargetFieldDateId_k__BackingField; // 0x20
		::System::Int64 _TargetQuestDate_k__BackingField; // 0x28

		::System::Int64 get_TargetQuestDate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEINFO_GET_TARGETQUESTDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenDate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEINFO_GET_OPENDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::FieldCurtainCallFreeModeExcel* arg)
		{
			((::System::Void(*)(::FlatData::FieldCurtainCallFreeModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TargetFieldDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDCURTAINCALLFREEMODEINFO_GET_TARGETFIELDDATEID_OFFSET))(nullptr);
		}

	};
}

