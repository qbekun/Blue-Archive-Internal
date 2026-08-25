#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTFACTORY_POSTPROCESS_OFFSET UNITYSDK_OFFSET(0x14120D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTFACTORY_CREATELOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x140B480)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTFACTORY_CREATEFROMVALUE_OFFSET UNITYSDK_OFFSET(0x140D550)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int LogicEffectFactory_TypeDefinitionIndex = 14772;

	class LogicEffectFactory : public Il2CppObject
	{
	public:
		::System::Void PostProcess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::LogicEffect* arg2, ::System::Int64 arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::LogicEffect*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTFACTORY_POSTPROCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* CreateLogicEffectValue(::System::String* str, ::System::Int32 arg)
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTFACTORY_CREATELOGICEFFECTVALUE_OFFSET))(str, arg, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::LogicEffect* CreateFromValue(::MX::Logic::Skills::SkillSpecification* arg, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg2)
		{
			return ((::MX::Logic::Skills::LogicEffects::LogicEffect*(*)(::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_LOGICEFFECTFACTORY_CREATEFROMVALUE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

