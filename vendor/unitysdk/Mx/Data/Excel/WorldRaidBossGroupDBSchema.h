#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPDBSCHEMA_SET_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1CC9A60)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CC9A70)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1CC9A80)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CC9A90)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPDBSCHEMA_GET_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1CC9AA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidBossGroupDBSchema_TypeDefinitionIndex = 19796;

	class WorldRaidBossGroupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int64 _WorldRaidBossGroupId_k__BackingField; // 0x28

		::System::Void set_WorldRaidBossGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPDBSCHEMA_SET_WORLDRAIDBOSSGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidBossGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPDBSCHEMA_GET_WORLDRAIDBOSSGROUPID_OFFSET))(nullptr);
		}

	};
}

