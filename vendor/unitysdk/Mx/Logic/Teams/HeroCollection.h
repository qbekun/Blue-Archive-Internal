#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityIdComparer; }

#define MX_LOGIC_TEAMS_HEROCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1087ED0)
#define MX_LOGIC_TEAMS_HEROCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1087F50)
#define MX_LOGIC_TEAMS_HEROCOLLECTION_GET_ALL_OFFSET UNITYSDK_OFFSET(0x1087FA0)
#define MX_LOGIC_TEAMS_HEROCOLLECTION_GET_ALIVES_OFFSET UNITYSDK_OFFSET(0x1087FE0)
#define MX_LOGIC_TEAMS_HEROCOLLECTION_GET_DEADS_OFFSET UNITYSDK_OFFSET(0x1088110)

namespace MX::Logic::Teams
{
	inline static constexpr unsigned int HeroCollection_TypeDefinitionIndex = 12917;

	class HeroCollection : public ::MX::NetworkProtocol::ScenarioGroupHistoryUpdateRequest
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_TEAMS_HEROCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityIdComparer* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityIdComparer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_TEAMS_HEROCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_All()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_TEAMS_HEROCOLLECTION_GET_ALL_OFFSET))(nullptr);
		}

		Il2CppObject* get_Alives()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_TEAMS_HEROCOLLECTION_GET_ALIVES_OFFSET))(nullptr);
		}

		Il2CppObject* get_Deads()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_TEAMS_HEROCOLLECTION_GET_DEADS_OFFSET))(nullptr);
		}

	};
}

