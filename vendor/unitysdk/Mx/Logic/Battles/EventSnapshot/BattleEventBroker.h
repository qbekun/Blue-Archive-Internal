#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BattleSetting; }
namespace MX::Logic::Battles::EventSnapshot { class BattleEventSnapshot; }
namespace MX::Logic::Battles { class AuraEventArgs; }
namespace MX::Logic::BattleEntities { class SupportActor; }
namespace MX::Logic::Battles { class ObstacleEventArgs; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::Battles { class LogicEffectImmuneEventArgs; }
namespace MX::Logic::Battles { class BeamEventArgs; }
namespace MX::Logic::Battles { class EffectAreaSpawnedEventArgs; }
namespace MX::Logic::Battles { class BattleEntitySpawnedEventArgs; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace MX::Logic::Battles { class LifeGainEventArgs; }
namespace MX::Logic::Battles { class CharacterFormConvertedEventArgs; }
namespace MX::Logic::BattleEntities { class StatusRemovedEventArgs; }
namespace MX::Logic::Battles { class CharacterGroundNodeChangedEventArgs; }
namespace MX::Logic::Battles { class DamageUpdatedEventArgs; }
namespace MX::Logic::Battles { class BattleEntityRemovedEventArgs; }
namespace MX::Logic::BattleEntities { class SupportSkillEventArgs; }
namespace MX::Logic::Battles { class BattleItemActivatedEventArgs; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class AttackEventArgs; }
namespace MX::Logic::BattleEntities { class PassiveTriggeredEventArgs; }
namespace MX::Logic::BattleEntities { class StatusAddedEventArgs; }
namespace MX::Logic::Battles { class ParticleEffectEventArgs; }
namespace MX::Logic::Battles { class CoverStateChangedEventArgs; }
namespace MX::Logic::BattleEntities { class StatusResistEventArgs; }
namespace MX::Logic::Battles { class BattleItemRecognitionEventArgs; }
namespace MX::Logic::Battles { class NormalAttackHitEventArgs; }
namespace MX::Logic::Battles { class NormalAttackSpawnedEventArgs; }
namespace MX::Logic::Battles { class DotEventArgs; }
namespace MX::Logic::BattleEntities { class SkillCardEventArgs; }
namespace MX::Logic::Battles { class SkillEntityRemovedEventArgs; }
namespace MX::Logic::Battles { class ProjectileSpawnedEventArgs; }
namespace MX::Logic::Battles { class CharacterShieldHealEventArgs; }
namespace MX::Logic::Battles { class CharacterInteractWithTSSEventArgs; }
namespace MX::Logic::Battles { class TimelinePlayTrackEnabledEventArgs; }
namespace MX::Logic::Battles { class CharacterPhaseChangedEventArgs; }
namespace MX::Logic::Battles { class BattleItemEffectEventArgs; }
namespace MX::Logic::Battles { class ProjectileCollidedEventArgs; }

#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_AURASPAWNED_OFFSET UNITYSDK_OFFSET(0x13B3390)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_UNLISTENSUPPORTEREVENT_OFFSET UNITYSDK_OFFSET(0x13B34B0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_REWIND_OFFSET UNITYSDK_OFFSET(0x13B35A0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_FINDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x13B3AB0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_OBSTACLEDESTROYED_OFFSET UNITYSDK_OFFSET(0x13B3B30)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_ACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x13B3C50)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_HERODEAD_OFFSET UNITYSDK_OFFSET(0x13B3FF0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LOGICEFFECTPROCESSOR_LOGICEFFECTIMMUNE_OFFSET UNITYSDK_OFFSET(0x13B4120)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_BEAMCOLLIDED_OFFSET UNITYSDK_OFFSET(0x13B4250)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_REMOVE_OFFSET UNITYSDK_OFFSET(0x13B3A60)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_EFFECTAREASPAWNED_OFFSET UNITYSDK_OFFSET(0x13B4380)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_ACTIONINTERRUPTED_OFFSET UNITYSDK_OFFSET(0x13B44A0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_OBSTACLESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x13B45D0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_BATTLEENTITYSPAWNED_OFFSET UNITYSDK_OFFSET(0x13B46F0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LISTENSUPPORTEREVENT_OFFSET UNITYSDK_OFFSET(0x13B4B20)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x13B4D10)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CLEAR_OFFSET UNITYSDK_OFFSET(0x13B4E30)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LOGICEFFECTPROCESSOR_LIFEGAIN_OFFSET UNITYSDK_OFFSET(0x13B4E90)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_CHARACTERCOVERSION_OFFSET UNITYSDK_OFFSET(0x13B4FC0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_STATUSREMOVED_OFFSET UNITYSDK_OFFSET(0x13B50E0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_GROUNDNODECHANGED_OFFSET UNITYSDK_OFFSET(0x13B5210)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_RAID_DAMAGEUPDATED_OFFSET UNITYSDK_OFFSET(0x13B5340)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_BATTLEENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x13B5360)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_GET_BATTLESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x13B57D0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_SUPPORTER_STATECHANGED_OFFSET UNITYSDK_OFFSET(0x13B57E0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_BATTLEITEMACTIVATED_OFFSET UNITYSDK_OFFSET(0x13B5910)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_UNLISTENHEROEVENT_OFFSET UNITYSDK_OFFSET(0x13B5440)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x13B5A30)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LISTENEVENT_OFFSET UNITYSDK_OFFSET(0x13B5AC0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET UNITYSDK_OFFSET(0x13B65F0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_PASSIVETRIGGERED_OFFSET UNITYSDK_OFFSET(0x13B6720)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_STATUSADDED_OFFSET UNITYSDK_OFFSET(0x13B6850)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LISTENHEROEVENT_OFFSET UNITYSDK_OFFSET(0x13B47D0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x13B6980)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLEPARTICLEEFFECTBURSTED_OFFSET UNITYSDK_OFFSET(0x13B6A20)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_COVERSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x13B6B50)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_STATUSRESISTED_OFFSET UNITYSDK_OFFSET(0x13B6C80)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_BATTLEITEMRECOGNIZED_OFFSET UNITYSDK_OFFSET(0x13B6DA0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_NORMALATTACKHIT_OFFSET UNITYSDK_OFFSET(0x13B6EC0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_NORMALATTACKSPAWNED_OFFSET UNITYSDK_OFFSET(0x13B6FF0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_DOTABILITYREMOVED_OFFSET UNITYSDK_OFFSET(0x13B7110)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B7240)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_WRITEASKCONTINUE_OFFSET UNITYSDK_OFFSET(0x13B7300)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_SKILLCARDMANAGER_SKILLCARDSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x13B7320)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_SKILLENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x13B7450)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_PROJECTILESPAWNED_OFFSET UNITYSDK_OFFSET(0x13B7580)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LOGICEFFECTPROCESSOR_SHIELDHEAL_OFFSET UNITYSDK_OFFSET(0x13B76B0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_CHARACTERINTERACTWITHTSS_OFFSET UNITYSDK_OFFSET(0x13B77E0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_DOTABILITYATTACHED_OFFSET UNITYSDK_OFFSET(0x13B7910)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_TIMELINEPLAYTRACKENABLED_OFFSET UNITYSDK_OFFSET(0x13B7A40)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_BEAMSPAWNED_OFFSET UNITYSDK_OFFSET(0x13B7B70)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_SET_SETTING_OFFSET UNITYSDK_OFFSET(0x13B7C90)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_CHARACTERPHASECHANGED_OFFSET UNITYSDK_OFFSET(0x13B7CA0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_GET_SETTING_OFFSET UNITYSDK_OFFSET(0x13B7DD0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_POPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x13B7DE0)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_BATTLEITEMEFFECTED_OFFSET UNITYSDK_OFFSET(0x13B7E90)
#define MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_PROJECTILECOLLIDED_OFFSET UNITYSDK_OFFSET(0x13B7FB0)

namespace MX::Logic::Battles::EventSnapshot
{
	inline static constexpr unsigned int BattleEventBroker_TypeDefinitionIndex = 14493;

	class BattleEventBroker : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BattleSetting* _Setting_k__BackingField; // 0x10
		Il2CppObject* _BattleSnapshot_k__BackingField; // 0x18
		::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* currentSnapshot; // 0x20

		::System::Void Battle_AuraSpawned(::System::Object* arg, ::MX::Logic::Battles::AuraEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AuraEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_AURASPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UnlistenSupporterEvent(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_UNLISTENSUPPORTEREVENT_OFFSET))(arg, nullptr);
		}

		::System::Void Rewind(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_REWIND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* FindSnapshot(::System::Int32 arg)
		{
			return ((::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_FINDSNAPSHOT_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_ObstacleDestroyed(::System::Object* arg, ::MX::Logic::Battles::ObstacleEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::ObstacleEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_OBSTACLEDESTROYED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_ActionChanged(::System::Object* arg, ::MX::Logic::BattleEntities::ActionChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_ACTIONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_HeroDead(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_HERODEAD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectImmune(::System::Object* arg, ::MX::Logic::Battles::LogicEffectImmuneEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectImmuneEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LOGICEFFECTPROCESSOR_LOGICEFFECTIMMUNE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_BeamCollided(::System::Object* arg, ::MX::Logic::Battles::BeamEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BeamEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_BEAMCOLLIDED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Remove(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_EffectAreaSpawned(::System::Object* arg, ::MX::Logic::Battles::EffectAreaSpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::EffectAreaSpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_EFFECTAREASPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_ActionInterrupted(::System::Object* arg, ::MX::Logic::BattleEntities::ActionChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_ACTIONINTERRUPTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_ObstacleStateChanged(::System::Object* arg, ::MX::Logic::Battles::ObstacleEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::ObstacleEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_OBSTACLESTATECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_BattleEntitySpawned(::System::Object* arg, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_BATTLEENTITYSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ListenSupporterEvent(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LISTENSUPPORTEREVENT_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_LifeGain(::System::Object* arg, ::MX::Logic::Battles::LifeGainEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LifeGainEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LOGICEFFECTPROCESSOR_LIFEGAIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_CharacterCoversion(::System::Object* arg, ::MX::Logic::Battles::CharacterFormConvertedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterFormConvertedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_CHARACTERCOVERSION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_StatusRemoved(::System::Object* arg, ::MX::Logic::BattleEntities::StatusRemovedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::StatusRemovedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_STATUSREMOVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_GroundNodeChanged(::System::Object* arg, ::MX::Logic::Battles::CharacterGroundNodeChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterGroundNodeChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_GROUNDNODECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Raid_DamageUpdated(::System::Object* arg, ::MX::Logic::Battles::DamageUpdatedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DamageUpdatedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_RAID_DAMAGEUPDATED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_BattleEntityRemoved(::System::Object* arg, ::MX::Logic::Battles::BattleEntityRemovedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntityRemovedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_BATTLEENTITYREMOVED_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_BattleSnapshot()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_GET_BATTLESNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void Supporter_StateChanged(::System::Object* arg, ::MX::Logic::BattleEntities::SupportSkillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::SupportSkillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_SUPPORTER_STATECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_BattleItemActivated(::System::Object* arg, ::MX::Logic::Battles::BattleItemActivatedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleItemActivatedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_BATTLEITEMACTIVATED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UnlistenHeroEvent(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_UNLISTENHEROEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void BeginWrite(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BEGINWRITE_OFFSET))(arg, nullptr);
		}

		::System::Void ListenEvent(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LISTENEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_AttackProcessed(::System::Object* arg, ::MX::Logic::Battles::AttackEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LOGICEFFECTPROCESSOR_ATTACKPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_PassiveTriggered(::System::Object* arg, ::MX::Logic::BattleEntities::PassiveTriggeredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::PassiveTriggeredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_PASSIVETRIGGERED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_StatusAdded(::System::Object* arg, ::MX::Logic::BattleEntities::StatusAddedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::StatusAddedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_STATUSADDED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ListenHeroEvent(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LISTENHEROEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void EndWrite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_ENDWRITE_OFFSET))(nullptr);
		}

		::System::Void BattleParticleEffectBursted(::System::Object* arg, ::MX::Logic::Battles::ParticleEffectEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::ParticleEffectEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLEPARTICLEEFFECTBURSTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_CoverStateChanged(::System::Object* arg, ::MX::Logic::Battles::CoverStateChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CoverStateChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_COVERSTATECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_StatusResisted(::System::Object* arg, ::MX::Logic::BattleEntities::StatusResistEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::StatusResistEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_CHARACTER_STATUSRESISTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_BattleItemRecognized(::System::Object* arg, ::MX::Logic::Battles::BattleItemRecognitionEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleItemRecognitionEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_BATTLEITEMRECOGNIZED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_NormalAttackHit(::System::Object* arg, ::MX::Logic::Battles::NormalAttackHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::NormalAttackHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_NORMALATTACKHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_NormalAttackSpawned(::System::Object* arg, ::MX::Logic::Battles::NormalAttackSpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::NormalAttackSpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_NORMALATTACKSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_DotAbilityRemoved(::System::Object* arg, ::MX::Logic::Battles::DotEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DotEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_DOTABILITYREMOVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void WriteAskContinue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_WRITEASKCONTINUE_OFFSET))(nullptr);
		}

		::System::Void SkillCardManager_SkillCardStateChanged(::System::Object* arg, ::MX::Logic::BattleEntities::SkillCardEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::SkillCardEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_SKILLCARDMANAGER_SKILLCARDSTATECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_SkillEntityRemoved(::System::Object* arg, ::MX::Logic::Battles::SkillEntityRemovedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::SkillEntityRemovedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_SKILLENTITYREMOVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_ProjectileSpawned(::System::Object* arg, ::MX::Logic::Battles::ProjectileSpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::ProjectileSpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_PROJECTILESPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LogicEffectProcessor_ShieldHeal(::System::Object* arg, ::MX::Logic::Battles::CharacterShieldHealEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterShieldHealEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_LOGICEFFECTPROCESSOR_SHIELDHEAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_CharacterInteractWithTSS(::System::Object* arg, ::MX::Logic::Battles::CharacterInteractWithTSSEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterInteractWithTSSEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_CHARACTERINTERACTWITHTSS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_DotAbilityAttached(::System::Object* arg, ::MX::Logic::Battles::DotEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DotEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_DOTABILITYATTACHED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_TimelinePlayTrackEnabled(::System::Object* arg, ::MX::Logic::Battles::TimelinePlayTrackEnabledEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::TimelinePlayTrackEnabledEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_TIMELINEPLAYTRACKENABLED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_BeamSpawned(::System::Object* arg, ::MX::Logic::Battles::BeamEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BeamEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_BEAMSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Setting(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_SET_SETTING_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_CharacterPhaseChanged(::System::Object* arg, ::MX::Logic::Battles::CharacterPhaseChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterPhaseChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_CHARACTERPHASECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::BattleSetting* get_Setting()
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_GET_SETTING_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* PopSnapshot(::System::Int32 arg)
		{
			return ((::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_POPSNAPSHOT_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_BattleItemEffected(::System::Object* arg, ::MX::Logic::Battles::BattleItemEffectEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleItemEffectEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_BATTLEITEMEFFECTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_ProjectileCollided(::System::Object* arg, ::MX::Logic::Battles::ProjectileCollidedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::ProjectileCollidedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTSNAPSHOT_BATTLEEVENTBROKER_BATTLE_PROJECTILECOLLIDED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

