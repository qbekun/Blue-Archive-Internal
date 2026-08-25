#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPDBSCHEMA_SET_FAVORSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x1C14AC0)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPDBSCHEMA_GET_FAVORSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x1C14AD0)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C14AE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MomotalkScheduleSpoilerPopupDBSchema_TypeDefinitionIndex = 18944;

	class MomotalkScheduleSpoilerPopupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _FavorScheduleId_k__BackingField; // 0x20

		::System::Void set_FavorScheduleId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPDBSCHEMA_SET_FAVORSCHEDULEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FavorScheduleId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPDBSCHEMA_GET_FAVORSCHEDULEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

