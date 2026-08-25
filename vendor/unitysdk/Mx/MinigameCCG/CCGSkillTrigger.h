#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class ICCGCondition; }
namespace MX::MinigameCCG::ParameterRef { class EntityOutputRef; }
namespace MX::MinigameCCG::ParameterRef { class PlayerOutputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerOutputRef; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class ICCGSkillTriggerable; }
namespace MX::MinigameCCG { class CCGSkillContext&; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_CCGSKILLTRIGGER_GET_PREPROCEDURES_OFFSET UNITYSDK_OFFSET(0x1DC61F0)
#define MX_MINIGAMECCG_CCGSKILLTRIGGER_GETSKILLPOWER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_CCGSKILLTRIGGER_TRYTRIGGER_OFFSET UNITYSDK_OFFSET(0x1DC6200)
#define MX_MINIGAMECCG_CCGSKILLTRIGGER_TRYTRIGGER_OFFSET UNITYSDK_OFFSET(0x1DC6250)
#define MX_MINIGAMECCG_CCGSKILLTRIGGER_RUNPREPROCEDURES_OFFSET UNITYSDK_OFFSET(0x1DC6410)
#define MX_MINIGAMECCG_CCGSKILLTRIGGER_CHECKCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1DC6610)
#define MX_MINIGAMECCG_CCGSKILLTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC66C0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGSkillTrigger_TypeDefinitionIndex = 20500;

	class CCGSkillTrigger : public Il2CppObject
	{
	public:
		Il2CppObject* preprocedures; // 0x10
		::MX::MinigameCCG::ICCGCondition* condition; // 0x18
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* sourceEntityVar; // 0x20
		::MX::MinigameCCG::ParameterRef::PlayerOutputRef* sourcePlayerVar; // 0x28
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* basePowerVar; // 0x30

		Il2CppObject* get_Preprocedures()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLTRIGGER_GET_PREPROCEDURES_OFFSET))(nullptr);
		}

		::System::Int32 GetSkillPower(::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Int32(*)(::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLTRIGGER_GETSKILLPOWER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryTrigger(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::ICCGSkillTriggerable* arg, ::System::Object* arg, ::MX::MinigameCCG::CCGSkillContext&* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::ICCGSkillTriggerable*, ::System::Object*, ::MX::MinigameCCG::CCGSkillContext&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLTRIGGER_TRYTRIGGER_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryTrigger(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::ICCGSkillTriggerable* arg, Il2CppObject* arg, ::System::Object* arg, ::MX::MinigameCCG::CCGSkillContext&* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::ICCGSkillTriggerable*, Il2CppObject*, ::System::Object*, ::MX::MinigameCCG::CCGSkillContext&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLTRIGGER_TRYTRIGGER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RunPreprocedures(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLTRIGGER_RUNPREPROCEDURES_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckConditions(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLTRIGGER_CHECKCONDITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

