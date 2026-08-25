#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRESETPARCELSDBSCHEMA_SET_PRESETGROUPID_OFFSET UNITYSDK_OFFSET(0x1C31210)
#define MX_DATA_EXCEL_PRESETPARCELSDBSCHEMA_GET_PRESETGROUPID_OFFSET UNITYSDK_OFFSET(0x1C31220)
#define MX_DATA_EXCEL_PRESETPARCELSDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C31230)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PresetParcelsDBSchema_TypeDefinitionIndex = 19079;

	class PresetParcelsDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _PresetGroupId_k__BackingField; // 0x20

		::System::Void set_PresetGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSDBSCHEMA_SET_PRESETGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PresetGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSDBSCHEMA_GET_PRESETGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

