#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_GEARTIERUPREQUESTDB_GET_AFTERTIER_OFFSET UNITYSDK_OFFSET(0xFF3980)
#define MX_GAMELOGIC_DBMODEL_GEARTIERUPREQUESTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF3990)
#define MX_GAMELOGIC_DBMODEL_GEARTIERUPREQUESTDB_SET_TARGETSERVERID_OFFSET UNITYSDK_OFFSET(0xFF39A0)
#define MX_GAMELOGIC_DBMODEL_GEARTIERUPREQUESTDB_SET_AFTERTIER_OFFSET UNITYSDK_OFFSET(0xFF39B0)
#define MX_GAMELOGIC_DBMODEL_GEARTIERUPREQUESTDB_GET_REPLACEINFOS_OFFSET UNITYSDK_OFFSET(0xFF39C0)
#define MX_GAMELOGIC_DBMODEL_GEARTIERUPREQUESTDB_SET_REPLACEINFOS_OFFSET UNITYSDK_OFFSET(0xFF39D0)
#define MX_GAMELOGIC_DBMODEL_GEARTIERUPREQUESTDB_GET_TARGETSERVERID_OFFSET UNITYSDK_OFFSET(0xFF39E0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int GearTierUpRequestDB_TypeDefinitionIndex = 12559;

	class GearTierUpRequestDB : public Il2CppObject
	{
	public:
		::System::Int64 _TargetServerId_k__BackingField; // 0x10
		::System::Int64 _AfterTier_k__BackingField; // 0x18
		Il2CppObject* _ReplaceInfos_k__BackingField; // 0x20

		::System::Int64 get_AfterTier()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARTIERUPREQUESTDB_GET_AFTERTIER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARTIERUPREQUESTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TargetServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARTIERUPREQUESTDB_SET_TARGETSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_AfterTier(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARTIERUPREQUESTDB_SET_AFTERTIER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ReplaceInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARTIERUPREQUESTDB_GET_REPLACEINFOS_OFFSET))(nullptr);
		}

		::System::Void set_ReplaceInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARTIERUPREQUESTDB_SET_REPLACEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TargetServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARTIERUPREQUESTDB_GET_TARGETSERVERID_OFFSET))(nullptr);
		}

	};
}

