#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class ICharacter;
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x113B950)
#define MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_COUSEEXSKILLCOUNTCHECK_OFFSET UNITYSDK_OFFSET(0x113B960)
#define MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1139040)
#define MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_STARTCONDITIONCHECKER_OFFSET UNITYSDK_OFFSET(0x113BA10)
#define MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_COAMMOCOUNTCHECK_OFFSET UNITYSDK_OFFSET(0x113BEA0)
#define MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x113BFE0)
#define MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x113BFF0)
#define MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x113C000)
#define MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_STOPCONDITIONCHECKER_OFFSET UNITYSDK_OFFSET(0x113C010)
#define MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_COAMMOHITCHECK_OFFSET UNITYSDK_OFFSET(0x113BF30)
#define MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_CORELOADCOUNTCHECK_OFFSET UNITYSDK_OFFSET(0x113BE10)
#define MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_CODURATIONCHECK_OFFSET UNITYSDK_OFFSET(0x113BDA0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int LogicEffectExpireChecker_TypeDefinitionIndex = 13109;

	class LogicEffectExpireChecker : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::LogicEffectEndCondition* _EndCondition_k__BackingField; // 0x10
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x14
		::System::Int32 CurrentConditionArgument; // 0x18
		::MX::Logic::BattleEntities::BattleEntity* _Owner_k__BackingField; // 0x20
		::System::Collections::IEnumerator* ConditionChecker; // 0x28
		Il2CppObject* dotEffect; // 0x30
		::System::Action* OnStop; // 0x38

		::MX::Logic::BattleEntities::BattleEntity* get_Owner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoUseExSkillCountCheck(ICharacter* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(ICharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_COUSEEXSKILLCOUNTCHECK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, Il2CppObject* arg2, ::MX::Logic::BattleEntities::LogicEffectEndCondition* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::MX::Logic::BattleEntities::LogicEffectEndCondition*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartConditionChecker()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_STARTCONDITIONCHECKER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoAmmoCountCheck(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_COAMMOCOUNTCHECK_OFFSET))(arg, nullptr);
		}

		::System::Void OnExpired()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_ONEXPIRED_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::LogicEffectEndCondition* get_EndCondition()
		{
			return ((::MX::Logic::BattleEntities::LogicEffectEndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Void StopConditionChecker()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_STOPCONDITIONCHECKER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoAmmoHitCheck(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_COAMMOHITCHECK_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoReloadCountCheck(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_CORELOADCOUNTCHECK_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoDurationCheck()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_LOGICEFFECTEXPIRECHECKER_CODURATIONCHECK_OFFSET))(nullptr);
		}

	};
}

