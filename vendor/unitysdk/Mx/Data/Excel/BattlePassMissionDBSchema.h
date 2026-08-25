#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BATTLEPASSMISSIONDBSCHEMA_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E94A0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x19E94B0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x19E94C0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19E94D0)
#define MX_DATA_EXCEL_BATTLEPASSMISSIONDBSCHEMA_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E94E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassMissionDBSchema_TypeDefinitionIndex = 16766;

	class BattlePassMissionDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _BattlePassId_k__BackingField; // 0x20
		::System::Int64 _Id_k__BackingField; // 0x28

		::System::Void set_BattlePassId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONDBSCHEMA_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSMISSIONDBSCHEMA_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

	};
}

