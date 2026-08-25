#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class HeroSetting; }
namespace MX::Logic::BattleEntities { class TSSCharacter; }
namespace MX::Logic::BattleEntities { class BattleItem; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Data { class BattleItemEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class SpawnCharacterSetting; }
namespace MX::Logic::Data { class CharacterEntityValue; }
namespace MX::Logic::BattleEntities { class SupportActor; }
namespace MX::Logic::Data { class SupporterEntityValue; }
namespace MX::Logic::BattleEntities { class SkillActor; }
namespace MX::Logic::BattleEntities { class FixedPositionSkillActor; }
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }
namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::Data { class CarrierSkillSetting; }
namespace MX::Logic::BattleEntities { class GroundObstacle; }
namespace MX::Logic::Battles::StageSaveData { class ObstacleSaveData; }
namespace UnityEngine { class Vector3; }
namespace MX::Logic::BattleEntities { class BarrierObstacle; }
namespace FlatData { class EntityMaterialType; }
namespace FlatData { class ArmorType; }
namespace MX::Core::Physics2D::Shapes { class Shape; }
namespace MX::Logic::BattleEntities { class BlockedAreaBattleItem; }
namespace MX::Logic::Data { class BlockedAreaBattleItemEntityValue; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::Data { class CharacterSkillListKey; }

#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATECHARACTER_OFFSET UNITYSDK_OFFSET(0x108F2E0)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_GETPERMANENTSTATUSBYARMORTYPE_OFFSET UNITYSDK_OFFSET(0x1091070)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATETACTICALSUPPORTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1091DD0)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEBATTLEITEM_OFFSET UNITYSDK_OFFSET(0x10922B0)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEATTACHEDBATTLEITEM_OFFSET UNITYSDK_OFFSET(0x1092380)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEFROMPRESET_OFFSET UNITYSDK_OFFSET(0x1092440)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEFROMSUMMON_OFFSET UNITYSDK_OFFSET(0x10924F0)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEFROMSUMMON_OFFSET UNITYSDK_OFFSET(0x10926E0)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATECHARACTERFORUI_OFFSET UNITYSDK_OFFSET(0x1093580)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATESKILLACTOR_OFFSET UNITYSDK_OFFSET(0x10937F0)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATESKILLACTOR_OFFSET UNITYSDK_OFFSET(0x1093FE0)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATESUPPORTER_OFFSET UNITYSDK_OFFSET(0x10928C0)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATESUPPORTER_OFFSET UNITYSDK_OFFSET(0x1095D50)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATECARRIERSUPPORTER_OFFSET UNITYSDK_OFFSET(0x10965D0)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATECARRIERSUPPORTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_GETFIXEDLEVELANDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1097870)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1097A10)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1097A70)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEBARRIEROBSTACLE_OFFSET UNITYSDK_OFFSET(0x1097B60)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEBLOCKEDAREABATTLEITEM_OFFSET UNITYSDK_OFFSET(0x1097C00)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERDEFAULTACTIONS_OFFSET UNITYSDK_OFFSET(0x108FFF0)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERGROUNDPASSIVESKILLS_OFFSET UNITYSDK_OFFSET(0x1090E00)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERGROUNDPASSIVESKILLS_OFFSET UNITYSDK_OFFSET(0x1094D90)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERSKILLS_OFFSET UNITYSDK_OFFSET(0x1090480)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERPASSIVE_OFFSET UNITYSDK_OFFSET(0x10945B0)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERPASSIVE_OFFSET UNITYSDK_OFFSET(0x10979C0)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERPASSIVE_OFFSET UNITYSDK_OFFSET(0x1097D20)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERPASSIVE_OFFSET UNITYSDK_OFFSET(0x1097CD0)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERACTIVE_OFFSET UNITYSDK_OFFSET(0x1097D90)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERACTIVE_OFFSET UNITYSDK_OFFSET(0x1094620)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTEREQUIPMENTOPTIONS_OFFSET UNITYSDK_OFFSET(0x1091080)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTEREQUIPMENTOPTIONS_OFFSET UNITYSDK_OFFSET(0x1095320)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERDEFAULTSTATCHANGEINFO_OFFSET UNITYSDK_OFFSET(0x1091AB0)
#define MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERDEFAULTSTATCHANGEINFO_OFFSET UNITYSDK_OFFSET(0x1095000)

namespace MX::Logic::Services
{
	inline static constexpr unsigned int EntityFactory_TypeDefinitionIndex = 12967;

	class EntityFactory : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* CreateCharacter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::HeroSetting* arg2, Il2CppObject* arg3, Il2CppObject* arg4, ::System::Boolean arg5, ::System::Boolean arg6, ::System::Boolean arg7, ::System::Int32 arg8)
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::HeroSetting*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATECHARACTER_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		Il2CppObject* GetPermanentStatusByArmorType(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_GETPERMANENTSTATUSBYARMORTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::TSSCharacter* CreateTacticalSupportSystem(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::HeroSetting* arg2, Il2CppObject* arg3, Il2CppObject* arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			return ((::MX::Logic::BattleEntities::TSSCharacter*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::HeroSetting*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATETACTICALSUPPORTSYSTEM_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Logic::BattleEntities::BattleItem* CreateBattleItem(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::EntityId* arg3, ::MX::Logic::Data::BattleItemEntityValue* arg4, ::MX::Logic::Skills::SkillSpecification* arg5, ::UnityEngine::Vector2* arg6, ::UnityEngine::Vector2* arg7, ::MX::Logic::Battles::GroupTag* arg8, ::System::Int32 arg9, ::System::Int32 arg10)
		{
			return ((::MX::Logic::BattleEntities::BattleItem*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BattleItemEntityValue*, ::MX::Logic::Skills::SkillSpecification*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::Battles::GroupTag*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEBATTLEITEM_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::MX::Logic::BattleEntities::BattleItem* CreateAttachedBattleItem(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::EntityId* arg4, ::MX::Logic::Data::BattleItemEntityValue* arg5, ::MX::Logic::Skills::SkillSpecification* arg6, ::MX::Logic::Battles::GroupTag* arg7, ::System::Int32 arg8, ::System::Int32 arg9)
		{
			return ((::MX::Logic::BattleEntities::BattleItem*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BattleItemEntityValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Battles::GroupTag*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEATTACHEDBATTLEITEM_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* CreateFromPreset(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::SpawnCharacterSetting* arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Int64 arg5, ::System::Int32 arg6)
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::SpawnCharacterSetting*, ::System::Boolean, ::System::Boolean, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEFROMPRESET_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* CreateFromSummon(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::CharacterEntityValue* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::System::Int64 arg4, ::System::Boolean arg5, ::System::Boolean arg6, ::System::Boolean arg7, ::System::Boolean arg8)
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::CharacterEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEFROMSUMMON_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::MX::Logic::BattleEntities::SupportActor* CreateFromSummon(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SupporterEntityValue* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::System::Int64 arg4, ::System::Boolean arg5, ::System::Boolean arg6, ::System::Boolean arg7, ::System::Boolean arg8)
		{
			return ((::MX::Logic::BattleEntities::SupportActor*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SupporterEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEFROMSUMMON_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* CreateCharacterForUI(::MX::Logic::Data::HeroSetting* arg)
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::MX::Logic::Data::HeroSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATECHARACTERFORUI_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SkillActor* CreateSkillActor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::GroupTag* arg2, ::System::String* str, ::System::Int32 arg3)
		{
			return ((::MX::Logic::BattleEntities::SkillActor*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::GroupTag*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATESKILLACTOR_OFFSET))(arg, arg2, str, arg3, nullptr);
		}

		::MX::Logic::BattleEntities::FixedPositionSkillActor* CreateSkillActor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::GroupTag* arg2, ::System::String* str, ::System::Int32 arg3, ::System::Int32 arg4, ::UnityEngine::Vector2* arg5, ::UnityEngine::Vector2* arg6, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg7)
		{
			return ((::MX::Logic::BattleEntities::FixedPositionSkillActor*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::GroupTag*, ::System::String*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATESKILLACTOR_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::MX::Logic::BattleEntities::SupportActor* CreateSupporter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::CharacterGroup* arg2, ::MX::Logic::Data::HeroSetting* arg3, Il2CppObject* arg4, Il2CppObject* arg5, ::System::Boolean arg6, ::System::Boolean arg7, ::System::Int32 arg8)
		{
			return ((::MX::Logic::BattleEntities::SupportActor*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::CharacterGroup*, ::MX::Logic::Data::HeroSetting*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATESUPPORTER_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::MX::Logic::BattleEntities::SupportActor* CreateSupporter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::CharacterGroup* arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int32 arg5, ::System::String* str, ::System::Int32 arg6, ::System::Boolean arg7, ::System::Boolean arg8)
		{
			return ((::MX::Logic::BattleEntities::SupportActor*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::CharacterGroup*, ::System::Int64, ::System::Int64, ::System::Int32, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATESUPPORTER_OFFSET))(arg, arg2, arg3, arg4, arg5, str, arg6, arg7, arg8, nullptr);
		}

		::MX::Logic::BattleEntities::SupportActor* CreateCarrierSupporter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::CharacterGroup* arg2, ::MX::Logic::Data::CarrierSkillSetting* arg3, Il2CppObject&* arg4)
		{
			return ((::MX::Logic::BattleEntities::SupportActor*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::CharacterGroup*, ::MX::Logic::Data::CarrierSkillSetting*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATECARRIERSUPPORTER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::BattleEntities::SupportActor* CreateCarrierSupporter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::CharacterGroup* arg2, ::System::Int64 arg3, ::System::Int32 arg4, ::System::Int32 arg5, Il2CppObject* arg6, Il2CppObject&* arg7)
		{
			return ((::MX::Logic::BattleEntities::SupportActor*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::CharacterGroup*, ::System::Int64, ::System::Int32, ::System::Int32, Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATECARRIERSUPPORTER_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void GetFixedLevelAndTexture(::System::String* str, ::System::Int32 arg, ::System::Int32 arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, int32_t&* arg6, int32_t&* arg7, ::System::String&* arg8)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, Il2CppObject*, Il2CppObject*, Il2CppObject*, int32_t&*, int32_t&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_GETFIXEDLEVELANDTEXTURE_OFFSET))(str, arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::MX::Logic::BattleEntities::GroundObstacle* CreateObstacle(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::Battles::StageSaveData::ObstacleSaveData* arg2)
		{
			return ((::MX::Logic::BattleEntities::GroundObstacle*(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Battles::StageSaveData::ObstacleSaveData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEOBSTACLE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::GroundObstacle* CreateObstacle(::MX::Logic::BattleEntities::EntityId* arg, ::System::String* str, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			return ((::MX::Logic::BattleEntities::GroundObstacle*(*)(::MX::Logic::BattleEntities::EntityId*, ::System::String*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEOBSTACLE_OFFSET))(arg, str, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::BattleEntities::BarrierObstacle* CreateBarrierObstacle(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::UnityEngine::Vector2* arg3, ::FlatData::EntityMaterialType* arg4, ::FlatData::ArmorType* arg5, ::System::Boolean arg6, ::MX::Core::Physics2D::Shapes::Shape* arg7)
		{
			return ((::MX::Logic::BattleEntities::BarrierObstacle*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::UnityEngine::Vector2*, ::FlatData::EntityMaterialType*, ::FlatData::ArmorType*, ::System::Boolean, ::MX::Core::Physics2D::Shapes::Shape*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEBARRIEROBSTACLE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::MX::Logic::BattleEntities::BlockedAreaBattleItem* CreateBlockedAreaBattleItem(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::EntityId* arg3, ::MX::Logic::Data::BlockedAreaBattleItemEntityValue* arg4, ::MX::Logic::Skills::SkillSpecification* arg5, ::UnityEngine::Vector2* arg6, ::UnityEngine::Vector2* arg7, ::MX::Logic::Battles::GroupTag* arg8, ::System::Int32 arg9, ::System::Int32 arg10)
		{
			return ((::MX::Logic::BattleEntities::BlockedAreaBattleItem*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlockedAreaBattleItemEntityValue*, ::MX::Logic::Skills::SkillSpecification*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::Battles::GroupTag*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_CREATEBLOCKEDAREABATTLEITEM_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void RegisterDefaultActions(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERDEFAULTACTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterGroundPassiveSkills(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::System::Boolean arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERGROUNDPASSIVESKILLS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RegisterGroundPassiveSkills(::MX::Logic::BattleEntities::SupportActor* arg, ::System::Boolean arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERGROUNDPASSIVESKILLS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RegisterSkills(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::Data::HeroSetting* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::Data::HeroSetting*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERSKILLS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void RegisterPassive(::MX::Logic::BattleEntities::SupportActor* arg, ::MX::Logic::Data::HeroSetting* arg2, ::System::String* str, ::MX::Logic::BattleEntities::SkillSlot* arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, ::MX::Logic::Data::HeroSetting*, ::System::String*, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERPASSIVE_OFFSET))(arg, arg2, str, arg3, arg4, arg5, nullptr);
		}

		::System::Void RegisterPassive(::MX::Logic::BattleEntities::SupportActor* arg, ::System::String* str, ::System::Int32 arg2, ::MX::Logic::BattleEntities::SkillSlot* arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, ::System::String*, ::System::Int32, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERPASSIVE_OFFSET))(arg, str, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void RegisterPassive(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::Data::HeroSetting* arg2, ::System::String* str, ::MX::Logic::BattleEntities::SkillSlot* arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::Data::HeroSetting*, ::System::String*, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERPASSIVE_OFFSET))(arg, arg2, str, arg3, arg4, arg5, nullptr);
		}

		::System::Void RegisterPassive(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::System::String* str, ::System::Int32 arg2, ::MX::Logic::BattleEntities::SkillSlot* arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::System::String*, ::System::Int32, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERPASSIVE_OFFSET))(arg, str, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::Actions::IActiveSkill* RegisterActive(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::Data::HeroSetting* arg2, ::System::String* str, ::MX::Logic::BattleEntities::SkillSlot* arg3, ::MX::Data::CharacterSkillListKey* arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			return ((::MX::Logic::Actions::IActiveSkill*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::Data::HeroSetting*, ::System::String*, ::MX::Logic::BattleEntities::SkillSlot*, ::MX::Data::CharacterSkillListKey*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERACTIVE_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Logic::Actions::IActiveSkill* RegisterActive(::MX::Logic::BattleEntities::SupportActor* arg, ::MX::Logic::Data::HeroSetting* arg2, ::System::String* str, ::MX::Logic::BattleEntities::SkillSlot* arg3, ::MX::Data::CharacterSkillListKey* arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			return ((::MX::Logic::Actions::IActiveSkill*(*)(::MX::Logic::BattleEntities::SupportActor*, ::MX::Logic::Data::HeroSetting*, ::System::String*, ::MX::Logic::BattleEntities::SkillSlot*, ::MX::Data::CharacterSkillListKey*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERACTIVE_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void RegisterEquipmentOptions(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::Data::HeroSetting* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::Data::HeroSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTEREQUIPMENTOPTIONS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterEquipmentOptions(::MX::Logic::BattleEntities::SupportActor* arg, ::MX::Logic::Data::HeroSetting* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, ::MX::Logic::Data::HeroSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTEREQUIPMENTOPTIONS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterDefaultStatChangeInfo(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERDEFAULTSTATCHANGEINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterDefaultStatChangeInfo(::MX::Logic::BattleEntities::SupportActor* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_ENTITYFACTORY_REGISTERDEFAULTSTATCHANGEINFO_OFFSET))(arg, arg2, nullptr);
		}

	};
}

