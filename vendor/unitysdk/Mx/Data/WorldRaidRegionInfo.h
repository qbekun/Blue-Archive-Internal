#pragma once
#include "../../unitysdk.h"

#define MX_DATA_WORLDRAIDREGIONINFO_GET_BATTLEPARTICIPANTS_LITTLE_OFFSET UNITYSDK_OFFSET(0x196FFA0)
#define MX_DATA_WORLDRAIDREGIONINFO_SET_REGION_OFFSET UNITYSDK_OFFSET(0x1970140)
#define MX_DATA_WORLDRAIDREGIONINFO_GET_BATTLEPARTICIPANTS_MIDDLE_OFFSET UNITYSDK_OFFSET(0x1970150)
#define MX_DATA_WORLDRAIDREGIONINFO_GET_REGION_OFFSET UNITYSDK_OFFSET(0x1970320)
#define MX_DATA_WORLDRAIDREGIONINFO_GET_BATTLEPARTICIPANTS_VERYHIGH_OFFSET UNITYSDK_OFFSET(0x1970330)
#define MX_DATA_WORLDRAIDREGIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x19704D0)
#define MX_DATA_WORLDRAIDREGIONINFO_GET_BATTLEPARTICIPANTS_HIGH_OFFSET UNITYSDK_OFFSET(0x1970500)

namespace MX::Data
{
	inline static constexpr unsigned int WorldRaidRegionInfo_TypeDefinitionIndex = 16464;

	class WorldRaidRegionInfo : public Il2CppObject
	{
	public:
		::System::String* _region_k__BackingField; // 0x10

		::System::Int64 get_BattleParticipants_Little()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDREGIONINFO_GET_BATTLEPARTICIPANTS_LITTLE_OFFSET))(nullptr);
		}

		::System::Void set_region(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDREGIONINFO_SET_REGION_OFFSET))(str, nullptr);
		}

		::System::Int64 get_BattleParticipants_Middle()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDREGIONINFO_GET_BATTLEPARTICIPANTS_MIDDLE_OFFSET))(nullptr);
		}

		::System::String* get_region()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDREGIONINFO_GET_REGION_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleParticipants_VeryHigh()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDREGIONINFO_GET_BATTLEPARTICIPANTS_VERYHIGH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDREGIONINFO_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Int64 get_BattleParticipants_High()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDREGIONINFO_GET_BATTLEPARTICIPANTS_HIGH_OFFSET))(nullptr);
		}

	};
}

