#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C92390)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGDBSCHEMA_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1C923A0)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGDBSCHEMA_SET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1C923B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StageFileRefreshSettingDBSchema_TypeDefinitionIndex = 19524;

	class StageFileRefreshSettingDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroundId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGDBSCHEMA_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Void set_GroundId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGDBSCHEMA_SET_GROUNDID_OFFSET))(arg, nullptr);
		}

	};
}

