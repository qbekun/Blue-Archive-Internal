#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGLogicEffectData; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_APPLYLOGICEFFECTTOTARGETS_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2ED40)
#define MX_MINIGAMECCG_PROCEDURES_APPLYLOGICEFFECTTOTARGETS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EE00)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int ApplyLogicEffectToTargets_TypeDefinitionIndex = 20990;

	class ApplyLogicEffectToTargets : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGLogicEffectData* logicEffect; // 0x10
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* targetsVar; // 0x18
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* stackVar; // 0x20
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* basePowerVar; // 0x30

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_APPLYLOGICEFFECTTOTARGETS_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_APPLYLOGICEFFECTTOTARGETS_.CTOR_OFFSET))(nullptr);
		}

	};
}

