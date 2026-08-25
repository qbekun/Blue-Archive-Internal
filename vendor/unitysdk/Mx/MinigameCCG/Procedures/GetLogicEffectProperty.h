#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityInputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityOutputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerOutputRef; }
namespace MX::MinigameCCG { class CCGLogicEffect; }
namespace MX::MinigameCCG { class CCGSkillContext; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PROCEDURES_GETLOGICEFFECTPROPERTY__ONPREPARE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1E2CF20)
#define MX_MINIGAMECCG_PROCEDURES_GETLOGICEFFECTPROPERTY_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2CF50)
#define MX_MINIGAMECCG_PROCEDURES_GETLOGICEFFECTPROPERTY_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x1E2D010)
#define MX_MINIGAMECCG_PROCEDURES_GETLOGICEFFECTPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D180)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int GetLogicEffectProperty_TypeDefinitionIndex = 20974;

	class GetLogicEffectProperty : public Il2CppObject
	{
	public:
		::System::Int64 logicEffectId; // 0x10
		::MX::MinigameCCG::ParameterRef::EntityInputRef* characterEntityVar; // 0x18
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* sourceEntityVar; // 0x20
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* basePowerVar; // 0x28
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* stackVar; // 0x30

		::System::Boolean _OnPrepare_b__5_0(::MX::MinigameCCG::CCGLogicEffect* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGLogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETLOGICEFFECTPROPERTY__ONPREPARE_B__5_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETLOGICEFFECTPROPERTY_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETLOGICEFFECTPROPERTY_ONPREPARE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETLOGICEFFECTPROPERTY_.CTOR_OFFSET))(nullptr);
		}

	};
}

