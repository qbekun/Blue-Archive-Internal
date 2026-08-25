#pragma once
#include "unitysdk.h"

namespace MX::Data { class WorldRaidSeasonInfo; }
namespace MX::GameLogic::DBModel { class WorldRaidProgressDB; }

#define INTERACTIVEWORLDRAIDSTATEPROVIDER_SET_PHASEID_OFFSET UNITYSDK_OFFSET(0x25AA4B0)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_SET_ISEVENTEND_OFFSET UNITYSDK_OFFSET(0x25AA4C0)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_HASUPGRADEITEM_OFFSET UNITYSDK_OFFSET(0x25AA4D0)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x25AB010)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_COREGRADE_OFFSET UNITYSDK_OFFSET(0x25AB020)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_SET_CARRIERMAPID_OFFSET UNITYSDK_OFFSET(0x25AB110)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_ISREPLAY_OFFSET UNITYSDK_OFFSET(0x25AB120)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x25AB130)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_CARRIERMAPID_OFFSET UNITYSDK_OFFSET(0x25AB140)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x25AB150)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_WORLDRAIDCONDITIONS_OFFSET UNITYSDK_OFFSET(0x25AB490)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_SET_WORLDMAPID_OFFSET UNITYSDK_OFFSET(0x25AB4A0)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_SET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x25AB4B0)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_WORLDMAPID_OFFSET UNITYSDK_OFFSET(0x25AB4C0)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_ISSCENARIOBOSSACTIVE_OFFSET UNITYSDK_OFFSET(0x25AB4D0)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_ISEVENTEND_OFFSET UNITYSDK_OFFSET(0x25AB820)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x25AB830)
#define INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x25AB840)

	inline static constexpr unsigned int InteractiveWorldRaidStateProvider_TypeDefinitionIndex = 352;

	class InteractiveWorldRaidStateProvider : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::Int64 _PhaseId_k__BackingField; // 0x18
		::System::Int64 _CarrierMapId_k__BackingField; // 0x20
		::System::Int64 _WorldMapId_k__BackingField; // 0x28
		::System::Boolean _IsEventEnd_k__BackingField; // 0x30
		::System::Boolean _IsPermanent_k__BackingField; // 0x31
		Il2CppObject* _conditions; // 0x38

		::System::Void set_PhaseId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_SET_PHASEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsEventEnd(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_SET_ISEVENTEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasUpgradeItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_HASUPGRADEITEM_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CoreGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_COREGRADE_OFFSET))(nullptr);
		}

		::System::Void set_CarrierMapId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_SET_CARRIERMAPID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_ISREPLAY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPermanent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_ISPERMANENT_OFFSET))(nullptr);
		}

		::System::Int64 get_CarrierMapId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_CARRIERMAPID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::WorldRaidSeasonInfo* arg, ::MX::GameLogic::DBModel::WorldRaidProgressDB* arg2)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, ::MX::GameLogic::DBModel::WorldRaidProgressDB*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_WorldRaidConditions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_WORLDRAIDCONDITIONS_OFFSET))(nullptr);
		}

		::System::Void set_WorldMapId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_SET_WORLDMAPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPermanent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_SET_ISPERMANENT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_WorldMapId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_WORLDMAPID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsScenarioBossActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_ISSCENARIOBOSSACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEventEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_ISEVENTEND_OFFSET))(nullptr);
		}

		::System::Int64 get_PhaseId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_PHASEID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDSTATEPROVIDER_GET_SEASONID_OFFSET))(nullptr);
		}

	};

