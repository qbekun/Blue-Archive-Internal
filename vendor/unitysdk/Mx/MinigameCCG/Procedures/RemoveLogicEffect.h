#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }
namespace MX::MinigameCCG { class CCGLogicEffect; }

#define MX_MINIGAMECCG_PROCEDURES_REMOVELOGICEFFECT_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E34BF0)
#define MX_MINIGAMECCG_PROCEDURES_REMOVELOGICEFFECT__ONSTATE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1E34CB0)
#define MX_MINIGAMECCG_PROCEDURES_REMOVELOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E34D10)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int RemoveLogicEffect_TypeDefinitionIndex = 21032;

	class RemoveLogicEffect : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* logicEffectIds; // 0x10
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* targetsVar; // 0x18

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_REMOVELOGICEFFECT_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _OnState_b__2_0(::MX::MinigameCCG::CCGLogicEffect* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGLogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_REMOVELOGICEFFECT__ONSTATE_B__2_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_REMOVELOGICEFFECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

