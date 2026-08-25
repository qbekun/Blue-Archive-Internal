#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEDBSCHEMA_GET_BOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1C19AA0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C19AB0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEDBSCHEMA_SET_BOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1C19AC0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C19AD0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C19AE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MultiFloorRaidStageDBSchema_TypeDefinitionIndex = 18965;

	class MultiFloorRaidStageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::String* _BossGroupId_k__BackingField; // 0x28

		::System::String* get_BossGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEDBSCHEMA_GET_BOSSGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_BossGroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEDBSCHEMA_SET_BOSSGROUPID_OFFSET))(str, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

