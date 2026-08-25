#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Core::Math { class IPseudoRandomService; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillApplyType; }
namespace FlatData { class StageTopography; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::BattleEntities { class IObstacle; }
namespace FlatData { class StatType; }
namespace UnityEngine { class Vector2; }
namespace MX::Data::Excel { class CharacterExcel; }

#define MX_LOGIC_SERVICES_HEROSERVICE_ISCROWDCONTROL_OFFSET UNITYSDK_OFFSET(0x10D20D0)
#define MX_LOGIC_SERVICES_HEROSERVICE_ISFORCINGACTION_OFFSET UNITYSDK_OFFSET(0x10D2200)
#define MX_LOGIC_SERVICES_HEROSERVICE_ISINVOKERNEEDED_OFFSET UNITYSDK_OFFSET(0x10D22D0)
#define MX_LOGIC_SERVICES_HEROSERVICE_ISDISPELLABLECC_OFFSET UNITYSDK_OFFSET(0x10D22F0)
#define MX_LOGIC_SERVICES_HEROSERVICE_O4F631177433B259A852B37FA1523A9E1B0654F2A387D638BFE9E1AB3C77AA712_OFFSET UNITYSDK_OFFSET(0x10D2350)
#define MX_LOGIC_SERVICES_HEROSERVICE_ISSKILLUSEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x10D2450)
#define MX_LOGIC_SERVICES_HEROSERVICE_ISEXSKILLUSEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x10D2460)
#define MX_LOGIC_SERVICES_HEROSERVICE_ISPUBLICSKILLUSEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x10D2470)
#define MX_LOGIC_SERVICES_HEROSERVICE_ISNORMALATTACKBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x10D2480)
#define MX_LOGIC_SERVICES_HEROSERVICE_GETSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x10D24A0)
#define MX_LOGIC_SERVICES_HEROSERVICE_ISMOVINGBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x10D24C0)
#define MX_LOGIC_SERVICES_HEROSERVICE_GETBEHAVIORTYPE_OFFSET UNITYSDK_OFFSET(0x10D24F0)
#define MX_LOGIC_SERVICES_HEROSERVICE_TRYCONVERTTO_OFFSET UNITYSDK_OFFSET(0x10D2520)
#define MX_LOGIC_SERVICES_HEROSERVICE_CHECKBLOCKEDBYOBSTACLE_OFFSET UNITYSDK_OFFSET(0x10D26A0)
#define MX_LOGIC_SERVICES_HEROSERVICE_GETTERRAINACCURACYFACTOR_OFFSET UNITYSDK_OFFSET(0x10D2C80)
#define MX_LOGIC_SERVICES_HEROSERVICE_GETTERRAINDODGEFACTOR_OFFSET UNITYSDK_OFFSET(0x10D2E20)
#define MX_LOGIC_SERVICES_HEROSERVICE_GETTERRAINBLOCKRATE_OFFSET UNITYSDK_OFFSET(0x10D28E0)
#define MX_LOGIC_SERVICES_HEROSERVICE_GETTERRAINSHOTFACTOR_OFFSET UNITYSDK_OFFSET(0x10D2FA0)
#define MX_LOGIC_SERVICES_HEROSERVICE_GETTERRAINBLOCKFACTOR_OFFSET UNITYSDK_OFFSET(0x10D30F0)
#define MX_LOGIC_SERVICES_HEROSERVICE_GETTERRAINATTACKPOWERFACTOR_OFFSET UNITYSDK_OFFSET(0x10D3240)
#define MX_LOGIC_SERVICES_HEROSERVICE_GETTERRAINADAPTATIONSTATTYPE_OFFSET UNITYSDK_OFFSET(0x10D2E00)
#define MX_LOGIC_SERVICES_HEROSERVICE_DISTANCE_OFFSET UNITYSDK_OFFSET(0x10D3390)
#define MX_LOGIC_SERVICES_HEROSERVICE_DISTANCE_OFFSET UNITYSDK_OFFSET(0x10D3470)
#define MX_LOGIC_SERVICES_HEROSERVICE_ISDISTANCEGREATER_OFFSET UNITYSDK_OFFSET(0x10D34F0)
#define MX_LOGIC_SERVICES_HEROSERVICE_ISDISTANCESMALLER_OFFSET UNITYSDK_OFFSET(0x10D3560)
#define MX_LOGIC_SERVICES_HEROSERVICE_GETPERMANENTSTATUS_OFFSET UNITYSDK_OFFSET(0x10D35D0)
#define MX_LOGIC_SERVICES_HEROSERVICE_CALCDIRECTIONAVERAGE_OFFSET UNITYSDK_OFFSET(0x10D35F0)
#define MX_LOGIC_SERVICES_HEROSERVICE_CALCPOSITIONCENTER_OFFSET UNITYSDK_OFFSET(0x10D4230)
#define MX_LOGIC_SERVICES_HEROSERVICE_HEADING_OFFSET UNITYSDK_OFFSET(0x10D4E80)
#define MX_LOGIC_SERVICES_HEROSERVICE_HEADINGTARGET_OFFSET UNITYSDK_OFFSET(0x10D50A0)

namespace MX::Logic::Services
{
	inline static constexpr unsigned int HeroService_TypeDefinitionIndex = 12985;

	class HeroService : public Il2CppObject
	{
	public:
		::System::Boolean IsCrowdControl(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_ISCROWDCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsForcingAction(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_ISFORCINGACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInvokerNeeded(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_ISINVOKERNEEDED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDispellableCC(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_ISDISPELLABLECC_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* O4f631177433b259a852b37fa1523a9e1b0654f2a387d638bfe9e1ab3c77aa712(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_O4F631177433B259A852B37FA1523A9E1B0654F2A387D638BFE9E1AB3C77AA712_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSkillUseBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_ISSKILLUSEBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExSkillUseBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_ISEXSKILLUSEBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPublicSkillUseBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_ISPUBLICSKILLUSEBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNormalAttackBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_ISNORMALATTACKBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillType* GetSkillType(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_GETSKILLTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMovingBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_ISMOVINGBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* GetBehaviorType(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_GETBEHAVIORTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryConvertTo(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::Logic::BattleEntities::SkillSlot&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::BattleEntities::SkillSlot&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_TRYCONVERTTO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckBlockedByObstacle(::MX::Core::Math::IPseudoRandomService* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::SkillApplyType* arg4, ::FlatData::StageTopography* arg5, ::MX::Logic::BattleEntities::IObstacle&* arg6)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IPseudoRandomService*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillApplyType*, ::FlatData::StageTopography*, ::MX::Logic::BattleEntities::IObstacle&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_CHECKBLOCKEDBYOBSTACLE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Core::Math::BasisPoint* GetTerrainAccuracyFactor(::FlatData::StageTopography* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::FlatData::StageTopography*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_GETTERRAINACCURACYFACTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* GetTerrainDodgeFactor(::FlatData::StageTopography* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::FlatData::StageTopography*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_GETTERRAINDODGEFACTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetTerrainBlockRate(::FlatData::StageTopography* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::IObstacle* arg4)
		{
			return ((::System::Int64(*)(::FlatData::StageTopography*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::IObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_GETTERRAINBLOCKRATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 GetTerrainShotFactor(::FlatData::StageTopography* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((::System::Int64(*)(::FlatData::StageTopography*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_GETTERRAINSHOTFACTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetTerrainBlockFactor(::FlatData::StageTopography* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((::System::Int64(*)(::FlatData::StageTopography*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_GETTERRAINBLOCKFACTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetTerrainAttackPowerFactor(::FlatData::StageTopography* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((::System::Int64(*)(::FlatData::StageTopography*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_GETTERRAINATTACKPOWERFACTOR_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::StatType* GetTerrainAdaptationStatType(::FlatData::StageTopography* arg)
		{
			return ((::FlatData::StatType*(*)(::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_GETTERRAINADAPTATIONSTATTYPE_OFFSET))(arg, nullptr);
		}

		::System::Single Distance(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((::System::Single(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_DISTANCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single Distance(::MX::Logic::BattleEntities::BattleEntity* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::System::Single(*)(::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_DISTANCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsDistanceGreater(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::Single arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_ISDISTANCEGREATER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsDistanceSmaller(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::Single arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_ISDISTANCESMALLER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetPermanentStatus(::MX::Data::Excel::CharacterExcel* arg)
		{
			return ((Il2CppObject*(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_GETPERMANENTSTATUS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* CalcDirectionAverage(Il2CppObject* arg)
		{
			return ((::UnityEngine::Vector2*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_CALCDIRECTIONAVERAGE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* CalcPositionCenter(Il2CppObject* arg)
		{
			return ((::UnityEngine::Vector2*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_CALCPOSITIONCENTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* Heading(::MX::Logic::BattleEntities::BattleEntity* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_HEADING_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* HeadingTarget(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_HEROSERVICE_HEADINGTARGET_OFFSET))(arg, nullptr);
		}

	};
}

