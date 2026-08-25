#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WORLDRAIDSTAGEDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CD22D0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEDBSCHEMA_GET_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1CD22E0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD22F0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEDBSCHEMA_SET_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1CD2300)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1CD2310)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidStageDBSchema_TypeDefinitionIndex = 19827;

	class WorldRaidStageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int64 _WorldRaidBossGroupId_k__BackingField; // 0x28

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidBossGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEDBSCHEMA_GET_WORLDRAIDBOSSGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_WorldRaidBossGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEDBSCHEMA_SET_WORLDRAIDBOSSGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

