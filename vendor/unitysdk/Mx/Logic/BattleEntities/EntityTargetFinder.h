#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::Core::Physics2D::Shapes { class Shape; }
namespace MX::Logic::BattleEntities { class IObstacle; }
namespace MX::Logic::Skills { class AliveState; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Data { class WeaponConstraint; }
namespace MX::Logic::Data { class SchoolConstraint; }
namespace MX::Logic::Data { class PersonalityIdConstraint; }
namespace MX::Logic::Data { class SquadTypeConstraint; }
namespace MX::Logic::Data { class AdaptationConstraint; }
namespace MX::Logic::Data { class BulletConstraint; }
namespace MX::Logic::Data { class TagConstraint; }
namespace MX::Logic::Data { class TacticRangeConstraint; }
namespace MX::Logic::Skills { class CoverState; }
namespace MX::Logic::Data { class HPRateConstraint; }
namespace MX::Logic::Data { class TacticRoleConstraint; }
namespace MX::Logic::Data { class SpawnSourceConstraint; }
namespace MX::Logic::Data { class BlackboardConstraint; }

#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x117F680)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_GET_OWNERTAG_OFFSET UNITYSDK_OFFSET(0x117F690)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_GET_CANNOTTARGETOBSTACLE_OFFSET UNITYSDK_OFFSET(0x117F6C0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_SET_CANNOTTARGETOBSTACLE_OFFSET UNITYSDK_OFFSET(0x117F6D0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x117F6E0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDTARGETS_OFFSET UNITYSDK_OFFSET(0x117F7C0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDTARGETS_OFFSET UNITYSDK_OFFSET(0x1180710)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDTARGETS_OFFSET UNITYSDK_OFFSET(0x117F910)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDBUFFTARGETS_OFFSET UNITYSDK_OFFSET(0x1180F70)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDCANDIDATES_OFFSET UNITYSDK_OFFSET(0x1182620)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDCANDIDATES_OFFSET UNITYSDK_OFFSET(0x1180850)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDCHARACTERTSSCANDIDATES_OFFSET UNITYSDK_OFFSET(0x1182770)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDTSSCANDIDATES_OFFSET UNITYSDK_OFFSET(0x11820E0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDCHARACTERCANDIDATES_OFFSET UNITYSDK_OFFSET(0x11813E0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDSUPPORTERCANDIDATES_OFFSET UNITYSDK_OFFSET(0x1181920)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDGROUNDOBSTACLECANDIDATES_OFFSET UNITYSDK_OFFSET(0x1181A80)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDBARRIEROBSTACLECANDIDATES_OFFSET UNITYSDK_OFFSET(0x1181CB0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FILTERTARGETS_OFFSET UNITYSDK_OFFSET(0x1183550)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_INCLUDETARGETS_OFFSET UNITYSDK_OFFSET(0x11837C0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_EXCLUDETARGETS_OFFSET UNITYSDK_OFFSET(0x1180DD0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_CREATETARGETFILTERSHAPE_OFFSET UNITYSDK_OFFSET(0x1183B00)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1182C60)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11833C0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1183F70)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1183CD0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1184020)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1184150)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1184280)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11843D0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11844F0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1184600)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11848F0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1184730)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1184A40)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1184AD0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1184B90)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1184D50)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1184E90)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER__FINDSUPPORTERCANDIDATES_G__FINDSUPPORTERS|21_0_OFFSET UNITYSDK_OFFSET(0x1182FA0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER__ISMATCH_G__EXISTINBATTLESETTING|43_0_OFFSET UNITYSDK_OFFSET(0x1184F70)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int EntityTargetFinder_TypeDefinitionIndex = 13249;

	class EntityTargetFinder : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* _Owner_k__BackingField; // 0x10
		::System::Boolean _CanNotTargetObstacle_k__BackingField; // 0x18
		Il2CppObject* DuplicationCheckSet; // 0x20
		Il2CppObject* CyclicRandomAlreadySelectedTargetTable; // 0x28

		::MX::Logic::BattleEntities::BattleEntity* get_Owner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_GET_OWNER_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroupTag* get_OwnerTag()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_GET_OWNERTAG_OFFSET))(nullptr);
		}

		::System::Boolean get_CanNotTargetObstacle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_GET_CANNOTTARGETOBSTACLE_OFFSET))(nullptr);
		}

		::System::Void set_CanNotTargetObstacle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_SET_CANNOTTARGETOBSTACLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindTargets(::MX::Logic::Battles::Battle* arg, ::System::String* str, ::MX::Logic::Skills::TargetCandidateRule* arg2, ::MX::Logic::Skills::TargetSortRule* arg3, Il2CppObject* arg4, ::UnityEngine::Vector2* arg5, ::System::Int64 arg6, ::System::Int64 arg7, ::System::Int64 arg8, ::MX::Logic::BattleEntities::SkillSlot* arg9, ::System::Boolean arg10, ::System::Boolean arg11)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::System::String*, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, Il2CppObject*, ::UnityEngine::Vector2*, ::System::Int64, ::System::Int64, ::System::Int64, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDTARGETS_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		Il2CppObject* FindTargets(::MX::Logic::Battles::Battle* arg, ::System::String* str, ::MX::Logic::Skills::TargetCandidateRule* arg2, ::MX::Logic::Skills::TargetSortRule* arg3, Il2CppObject* arg4, ::UnityEngine::Vector2* arg5, ::System::Int64 arg6, ::System::Int64 arg7, ::System::Int64 arg8, ::MX::Logic::BattleEntities::BattleEntity* arg9, ::MX::Logic::BattleEntities::SkillSlot* arg10, ::System::Boolean arg11)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::System::String*, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, Il2CppObject*, ::UnityEngine::Vector2*, ::System::Int64, ::System::Int64, ::System::Int64, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDTARGETS_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		Il2CppObject* FindTargets(::MX::Logic::Battles::Battle* arg, ::System::String* str, ::MX::Logic::Skills::TargetCandidateRule* arg2, ::MX::Logic::Skills::TargetSortRule* arg3, Il2CppObject* arg4, ::UnityEngine::Vector2* arg5, ::System::Int64 arg6, ::System::Int64 arg7, ::System::Int64 arg8, ::MX::Logic::BattleEntities::BattleEntity* arg9, ::System::Boolean arg10, ::MX::Logic::BattleEntities::SkillSlot* arg11, ::System::Boolean arg12, ::System::Boolean arg13, ::System::Boolean arg14, ::System::Boolean arg15, ::System::Boolean arg16)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::System::String*, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, Il2CppObject*, ::UnityEngine::Vector2*, ::System::Int64, ::System::Int64, ::System::Int64, ::MX::Logic::BattleEntities::BattleEntity*, ::System::Boolean, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDTARGETS_OFFSET))(arg, str, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, nullptr);
		}

		Il2CppObject* FindBuffTargets(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::TargetCandidateRule* arg2, ::MX::Logic::BattleEntities::SkillSlot* arg3)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDBUFFTARGETS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* FindCandidates(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::TargetCandidateRule* arg2, ::System::Boolean arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::System::Int64 arg6, ::UnityEngine::Vector2* arg7, ::UnityEngine::Vector2* arg8, ::MX::Logic::BattleEntities::SkillSlot* arg9)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::TargetCandidateRule*, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Int64, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDCANDIDATES_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		Il2CppObject* FindCandidates(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::TargetCandidateRule* arg2, ::System::Boolean arg3, ::MX::Logic::BattleEntities::SkillSlot* arg4, ::System::Boolean arg5)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::TargetCandidateRule*, ::System::Boolean, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDCANDIDATES_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void FindCharacterTSSCandidates(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::TargetCandidateRule* arg2, ::System::Boolean arg3, ::MX::Logic::BattleEntities::SkillSlot* arg4, Il2CppObject* arg5, Il2CppObject* arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::TargetCandidateRule*, ::System::Boolean, ::MX::Logic::BattleEntities::SkillSlot*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDCHARACTERTSSCANDIDATES_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void FindTSSCandidates(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::TargetCandidateRule* arg2, ::System::Boolean arg3, ::MX::Logic::BattleEntities::SkillSlot* arg4, Il2CppObject* arg5, Il2CppObject* arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::TargetCandidateRule*, ::System::Boolean, ::MX::Logic::BattleEntities::SkillSlot*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDTSSCANDIDATES_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void FindCharacterCandidates(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::TargetCandidateRule* arg2, ::System::Boolean arg3, ::MX::Logic::BattleEntities::SkillSlot* arg4, Il2CppObject* arg5, Il2CppObject* arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::TargetCandidateRule*, ::System::Boolean, ::MX::Logic::BattleEntities::SkillSlot*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDCHARACTERCANDIDATES_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void FindSupporterCandidates(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::TargetCandidateRule* arg2, ::MX::Logic::BattleEntities::SkillSlot* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::BattleEntities::SkillSlot*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDSUPPORTERCANDIDATES_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void FindGroundObstacleCandidates(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::TargetCandidateRule* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::TargetCandidateRule*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDGROUNDOBSTACLECANDIDATES_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void FindBarrierObstacleCandidates(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::TargetCandidateRule* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::TargetCandidateRule*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FINDBARRIEROBSTACLECANDIDATES_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* FilterTargets(Il2CppObject* arg, ::MX::Core::Physics2D::Bodies::Body2D* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_FILTERTARGETS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* IncludeTargets(Il2CppObject* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::UnityEngine::Vector2* arg5, ::UnityEngine::Vector2* arg6)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::Int64, ::System::Int64, ::System::Int64, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_INCLUDETARGETS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void ExcludeTargets(Il2CppObject* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::UnityEngine::Vector2* arg5, ::UnityEngine::Vector2* arg6)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::System::Int64, ::System::Int64, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_EXCLUDETARGETS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* CreateTargetFilterShape(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_CREATETARGETFILTERSHAPE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::TargetCandidateRule* arg3, ::MX::Logic::BattleEntities::SkillSlot* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::BattleEntities::IObstacle* arg, ::MX::Logic::Skills::TargetCandidateRule* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::IObstacle*, ::MX::Logic::Skills::TargetCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Skills::AliveState* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::AliveState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::TargetSideId* arg3, ::MX::Logic::BattleEntities::SkillSlot* arg4, ::System::Boolean arg5)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::TargetSideId*, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Data::WeaponConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::WeaponConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Data::SchoolConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::SchoolConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Data::PersonalityIdConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::PersonalityIdConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Data::SquadTypeConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::SquadTypeConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Data::AdaptationConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::AdaptationConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Data::BulletConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::BulletConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Data::TagConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::TagConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Data::TacticRangeConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::TacticRangeConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Skills::CoverState* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::CoverState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Data::HPRateConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::HPRateConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Data::TacticRoleConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::TacticRoleConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Data::SpawnSourceConstraint* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::SpawnSourceConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Data::BlackboardConstraint* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::BlackboardConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER_ISMATCH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _FindSupporterCandidates_g__FindSupporters|21_0(Il2CppObject* arg, <>c__DisplayClass21_0&* arg2)
		{
			((::System::Void(*)(Il2CppObject*, <>c__DisplayClass21_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER__FINDSUPPORTERCANDIDATES_G__FINDSUPPORTERS|21_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _IsMatch_g__ExistInBattleSetting|43_0(::MX::Logic::BattleEntities::BattleEntity* arg, <>c__DisplayClass43_0&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, <>c__DisplayClass43_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETFINDER__ISMATCH_G__EXISTINBATTLESETTING|43_0_OFFSET))(arg, arg2, nullptr);
		}

	};
}

