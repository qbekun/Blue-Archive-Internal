#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillProperty; }
namespace MX::Logic::Skills::LogicEffects { class StatEvalType; }

#define MX_LOGIC_DATA_MODIFYSKILLEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4380)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ModifySkillEffectData_TypeDefinitionIndex = 13618;

	class ModifySkillEffectData : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillProperty* TargetProperty; // 0x58
		::MX::Logic::Skills::LogicEffects::StatEvalType* EvalType; // 0x5C
		Il2CppObject* ApplySlots; // 0x60
		::System::Int64 Amount; // 0x68
		::System::Int32 Duration; // 0x70
		::System::Boolean Dispellable; // 0x74

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MODIFYSKILLEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

