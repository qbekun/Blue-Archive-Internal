#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B54180)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B54190)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B541A0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPDBSCHEMA_SET_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1B541B0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPDBSCHEMA_GET_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1B541C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidBossGroupDBSchema_TypeDefinitionIndex = 18206;

	class InteractiveWorldRaidBossGroupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int64 _WorldRaidBossGroupId_k__BackingField; // 0x28

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_WorldRaidBossGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPDBSCHEMA_SET_WORLDRAIDBOSSGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_WorldRaidBossGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPDBSCHEMA_GET_WORLDRAIDBOSSGROUPID_OFFSET))(nullptr);
		}

	};
}

