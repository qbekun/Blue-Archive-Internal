#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Physics2D::Shapes { class OBB; }
namespace MX::Logic::BattleEntities { class GroundObstacle; }
namespace MX::Data::Excel { class TacticalSupportSystemExcel; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Data { class CharacterSkillListKey; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Data::Excel { class CharacterAIExcel; }
namespace MX::Logic::Data { class WeaponSetting; }
namespace MX::Logic::Data { class GearSetting; }
namespace MX::Logic::Data { class CostumeSetting; }
namespace MX::Logic::Skills { class SkillSpecification; }
class GroundNode;
namespace MX::Logic::BattleEntities { class HeroSummaryDetailFlag; }
namespace UnityEngine { class Color; }

#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_SKILLLISTKEY_OFFSET UNITYSDK_OFFSET(0x115B080)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_ISCHECKTSSBLOCKEDNODE_OFFSET UNITYSDK_OFFSET(0x115B1A0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_ISCHECKTSSBLOCKEDNODE_OFFSET UNITYSDK_OFFSET(0x115B1B0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_CRASHOBSTACLEOBB_OFFSET UNITYSDK_OFFSET(0x115B1C0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_CRASHOBSTACLEOBB_OFFSET UNITYSDK_OFFSET(0x115B1D0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_TSSOBSTACLE_OFFSET UNITYSDK_OFFSET(0x115B1F0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_TSSOBSTACLE_OFFSET UNITYSDK_OFFSET(0x115B200)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_TSSOBSTACLECOVERRANGE_OFFSET UNITYSDK_OFFSET(0x115B220)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_TSSOBSTACLECOVERRANGE_OFFSET UNITYSDK_OFFSET(0x115B230)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_TSSEXCEL_OFFSET UNITYSDK_OFFSET(0x115B240)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_TSSEXCEL_OFFSET UNITYSDK_OFFSET(0x115B250)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_CHARACTERSTOINTERACT_OFFSET UNITYSDK_OFFSET(0x115B270)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_CHARACTERSTOINTERACT_OFFSET UNITYSDK_OFFSET(0x115B280)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_CURRENTINTERACTIONCHARACTER_OFFSET UNITYSDK_OFFSET(0x115B2A0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_CURRENTINTERACTIONCHARACTER_OFFSET UNITYSDK_OFFSET(0x115B2B0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_TSAINTERACTIONFORCEDISABLED_OFFSET UNITYSDK_OFFSET(0x115B2D0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_TSAINTERACTIONFORCEDISABLED_OFFSET UNITYSDK_OFFSET(0x115B2E0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x115B2F0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_MOVE_OFFSET UNITYSDK_OFFSET(0x115B350)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x115B3B0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x115B470)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x115B690)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x115B730)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_CREATETSSOBSTACLE_OFFSET UNITYSDK_OFFSET(0x115BC70)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_ENABLETSADYING_OFFSET UNITYSDK_OFFSET(0x115BD40)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_ENTERDEAD_OFFSET UNITYSDK_OFFSET(0x115BDC0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SETDYINGACTIONATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x115BF10)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x115C140)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_PROCESSSUMMONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x115C770)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_PROCESSCHARACTERRIDE_OFFSET UNITYSDK_OFFSET(0x115C240)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_CHECKANDFORCEDISABLETSAINTERACTION_OFFSET UNITYSDK_OFFSET(0x115C670)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_FORCEDISABLETSAINTERACTION_OFFSET UNITYSDK_OFFSET(0x115C1D0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_ENABLETSAINTERACTION_OFFSET UNITYSDK_OFFSET(0x115D0A0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_REGISTERTSAINTERACTIONEXSKILL_OFFSET UNITYSDK_OFFSET(0x115C8B0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_ENTERTSADYING_OFFSET UNITYSDK_OFFSET(0x115D1C0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_FINISHTSAINTERACTION_OFFSET UNITYSDK_OFFSET(0x115BE40)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_CHECKANDDESTROYOBSTACLE_OFFSET UNITYSDK_OFFSET(0x115D2A0)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SETNEARESTGROUNDNODE_OFFSET UNITYSDK_OFFSET(0x115D850)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_SUMMARYDETAIL_OFFSET UNITYSDK_OFFSET(0x115DB50)
#define MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_DRAWOBB_OFFSET UNITYSDK_OFFSET(0x115DB60)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int TSSCharacter_TypeDefinitionIndex = 13144;

	class TSSCharacter : public Il2CppObject
	{
	public:
		::System::Boolean _IsCheckTSSBlockedNode_k__BackingField; // 0x4D8
		::MX::Core::Physics2D::Shapes::OBB* _CrashObstacleOBB_k__BackingField; // 0x4E0
		::MX::Logic::BattleEntities::GroundObstacle* _TSSObstacle_k__BackingField; // 0x4E8
		::System::Int64 _TSSObstacleCoverRange_k__BackingField; // 0x4F0
		::MX::Data::Excel::TacticalSupportSystemExcel* _tssExcel_k__BackingField; // 0x4F8
		Il2CppObject* _CharactersToInteract_k__BackingField; // 0x508
		::MX::Logic::BattleEntities::BattleEntity* _CurrentInteractionCharacter_k__BackingField; // 0x510
		::System::Boolean _TSAInteractionForceDisabled_k__BackingField; // 0x518

		::MX::Data::CharacterSkillListKey* get_SkillListKey()
		{
			return ((::MX::Data::CharacterSkillListKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_SKILLLISTKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCheckTSSBlockedNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_ISCHECKTSSBLOCKEDNODE_OFFSET))(nullptr);
		}

		::System::Void set_IsCheckTSSBlockedNode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_ISCHECKTSSBLOCKEDNODE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::OBB* get_CrashObstacleOBB()
		{
			return ((::MX::Core::Physics2D::Shapes::OBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_CRASHOBSTACLEOBB_OFFSET))(nullptr);
		}

		::System::Void set_CrashObstacleOBB(::MX::Core::Physics2D::Shapes::OBB* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::OBB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_CRASHOBSTACLEOBB_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::GroundObstacle* get_TSSObstacle()
		{
			return ((::MX::Logic::BattleEntities::GroundObstacle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_TSSOBSTACLE_OFFSET))(nullptr);
		}

		::System::Void set_TSSObstacle(::MX::Logic::BattleEntities::GroundObstacle* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::GroundObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_TSSOBSTACLE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TSSObstacleCoverRange()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_TSSOBSTACLECOVERRANGE_OFFSET))(nullptr);
		}

		::System::Void set_TSSObstacleCoverRange(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_TSSOBSTACLECOVERRANGE_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::TacticalSupportSystemExcel* get_tssExcel()
		{
			return ((::MX::Data::Excel::TacticalSupportSystemExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_TSSEXCEL_OFFSET))(nullptr);
		}

		::System::Void set_tssExcel(::MX::Data::Excel::TacticalSupportSystemExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::TacticalSupportSystemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_TSSEXCEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CharactersToInteract()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_CHARACTERSTOINTERACT_OFFSET))(nullptr);
		}

		::System::Void set_CharactersToInteract(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_CHARACTERSTOINTERACT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_CurrentInteractionCharacter()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_CURRENTINTERACTIONCHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_CurrentInteractionCharacter(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_CURRENTINTERACTIONCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_TSAInteractionForceDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_TSAINTERACTIONFORCEDISABLED_OFFSET))(nullptr);
		}

		::System::Void set_TSAInteractionForceDisabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SET_TSAINTERACTIONFORCEDISABLED_OFFSET))(arg, nullptr);
		}

		::System::Void SetPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Move(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_MOVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Data::Excel::CharacterExcel* arg2, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Data::Excel::CharacterExcel*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Data::Excel::CharacterExcel* arg3, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg4, ::MX::Data::Excel::CharacterAIExcel* arg5, ::MX::Data::Excel::TacticalSupportSystemExcel* arg6, ::System::Int32 arg7, ::MX::Logic::Data::WeaponSetting* arg8, ::MX::Logic::Data::GearSetting* arg9, ::MX::Logic::Data::CostumeSetting* arg10, ::System::Boolean arg11)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Data::Excel::CharacterExcel*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::MX::Data::Excel::CharacterAIExcel*, ::MX::Data::Excel::TacticalSupportSystemExcel*, ::System::Int32, ::MX::Logic::Data::WeaponSetting*, ::MX::Logic::Data::GearSetting*, ::MX::Logic::Data::CostumeSetting*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		::System::Void CreateTSSObstacle(::MX::Logic::Battles::Battle* arg, ::System::String* str, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_CREATETSSOBSTACLE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void EnableTSADying()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_ENABLETSADYING_OFFSET))(nullptr);
		}

		::System::Void EnterDead(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::Skills::SkillSpecification* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_ENTERDEAD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetDyingActionAttribute(::MX::Logic::BattleEntities::BattleEntity* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SETDYINGACTIONATTRIBUTE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessSummonTimeOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_PROCESSSUMMONTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void ProcessCharacterRide(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_PROCESSCHARACTERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckAndForceDisableTSAInteraction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_CHECKANDFORCEDISABLETSAINTERACTION_OFFSET))(nullptr);
		}

		::System::Void ForceDisableTSAInteraction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_FORCEDISABLETSAINTERACTION_OFFSET))(nullptr);
		}

		::System::Void EnableTSAInteraction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_ENABLETSAINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterTSAInteractionExSkill()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_REGISTERTSAINTERACTIONEXSKILL_OFFSET))(nullptr);
		}

		::System::Void EnterTSADying()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_ENTERTSADYING_OFFSET))(nullptr);
		}

		::System::Void FinishTSAInteraction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_FINISHTSAINTERACTION_OFFSET))(nullptr);
		}

		::System::Void CheckAndDestroyObstacle(GroundNode* arg)
		{
			((::System::Void(*)(GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_CHECKANDDESTROYOBSTACLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetNearestGroundNode(GroundNode* arg)
		{
			((::System::Void(*)(GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_SETNEARESTGROUNDNODE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::HeroSummaryDetailFlag* get_SummaryDetail()
		{
			return ((::MX::Logic::BattleEntities::HeroSummaryDetailFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_GET_SUMMARYDETAIL_OFFSET))(nullptr);
		}

		::System::Void DrawObb(::MX::Core::Physics2D::Shapes::OBB* arg, ::UnityEngine::Color* arg2)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::OBB*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_TSSCHARACTER_DRAWOBB_OFFSET))(arg, arg2, nullptr);
		}

	};
}

