#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class DamageResultEventArgs; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }
namespace MX::Data::Excel { class CharacterAIExcel; }

#define MX_LOGIC_BATTLEENTITIES_DUMMYRAIDBOSSCHARACTER_PROCESSEXTERNALBEHAVIORALLUSESELECTEXSKILL_OFFSET UNITYSDK_OFFSET(0x1136930)
#define MX_LOGIC_BATTLEENTITIES_DUMMYRAIDBOSSCHARACTER_HANDLEDAMAGEPROCESSEDEVENT_OFFSET UNITYSDK_OFFSET(0x11371E0)
#define MX_LOGIC_BATTLEENTITIES_DUMMYRAIDBOSSCHARACTER_PROCESSEXTERNALBEHAVIORCONNECTCHARACTERTODUMMY_OFFSET UNITYSDK_OFFSET(0x11373E0)
#define MX_LOGIC_BATTLEENTITIES_DUMMYRAIDBOSSCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1137570)
#define MX_LOGIC_BATTLEENTITIES_DUMMYRAIDBOSSCHARACTER_GET_CONNECTEDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1137770)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int DummyRaidBossCharacter_TypeDefinitionIndex = 13087;

	class DummyRaidBossCharacter : public Il2CppObject
	{
	public:
		Il2CppObject* _ConnectedCharacters_k__BackingField; // 0x488

		::System::Boolean ProcessExternalBehaviorAllUseSelectExSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DUMMYRAIDBOSSCHARACTER_PROCESSEXTERNALBEHAVIORALLUSESELECTEXSKILL_OFFSET))(nullptr);
		}

		::System::Void HandleDamageProcessedEvent(::System::Object* arg, ::MX::Logic::Battles::DamageResultEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DamageResultEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DUMMYRAIDBOSSCHARACTER_HANDLEDAMAGEPROCESSEDEVENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ProcessExternalBehaviorConnectCharacterToDummy(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DUMMYRAIDBOSSCHARACTER_PROCESSEXTERNALBEHAVIORCONNECTCHARACTERTODUMMY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Data::Excel::CharacterExcel* arg3, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg4, ::MX::Data::Excel::CharacterAIExcel* arg5, ::System::Int32 arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Data::Excel::CharacterExcel*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::MX::Data::Excel::CharacterAIExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DUMMYRAIDBOSSCHARACTER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		Il2CppObject* get_ConnectedCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DUMMYRAIDBOSSCHARACTER_GET_CONNECTEDCHARACTERS_OFFSET))(nullptr);
		}

	};
}

