#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleSetting; }

#define WORLDRAIDBATTLE_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x2163270)
#define WORLDRAIDBATTLE_GET_ISTICKET_OFFSET UNITYSDK_OFFSET(0x2163280)
#define WORLDRAIDBATTLE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x2163290)
#define WORLDRAIDBATTLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21632A0)
#define WORLDRAIDBATTLE_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x21633A0)

	inline static constexpr unsigned int WorldRaidBattle_TypeDefinitionIndex = 4003;

	class WorldRaidBattle : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x388
		::System::Int64 _PhaseId_k__BackingField; // 0x390
		::System::Int64 _GroupId_k__BackingField; // 0x398
		::System::Boolean _IsTicket_k__BackingField; // 0x3A0

		::System::Int64 get_PhaseId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLE_GET_PHASEID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTicket()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLE_GET_ISTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLE_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLE_GET_SEASONID_OFFSET))(nullptr);
		}

	};

