#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONDBSCHEMA_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1B47BA0)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B47BB0)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONDBSCHEMA_SET_ORDERNUMBER_OFFSET UNITYSDK_OFFSET(0x1B47BC0)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONDBSCHEMA_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1B47BD0)
#define MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONDBSCHEMA_GET_ORDERNUMBER_OFFSET UNITYSDK_OFFSET(0x1B47BE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GuideMissionOpenStageConditionDBSchema_TypeDefinitionIndex = 18150;

	class GuideMissionOpenStageConditionDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x20
		::System::Int64 _OrderNumber_k__BackingField; // 0x28

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONDBSCHEMA_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_OrderNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONDBSCHEMA_SET_ORDERNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONDBSCHEMA_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_OrderNumber()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONOPENSTAGECONDITIONDBSCHEMA_GET_ORDERNUMBER_OFFSET))(nullptr);
		}

	};
}

