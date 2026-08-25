#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class AutoUseRule; }
namespace MX::Logic::Skills { class AutoUseConditionType; }
namespace MX::Logic::Data { class ModifierCheckTarget; }

#define MX_LOGIC_SKILLS_AUTOUSERULE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x13E5630)
#define MX_LOGIC_SKILLS_AUTOUSERULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x13E5830)
#define MX_LOGIC_SKILLS_AUTOUSERULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x13E58E0)
#define MX_LOGIC_SKILLS_AUTOUSERULE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13E5920)
#define MX_LOGIC_SKILLS_AUTOUSERULE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x13E5980)
#define MX_LOGIC_SKILLS_AUTOUSERULE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x13E5750)
#define MX_LOGIC_SKILLS_AUTOUSERULE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13E5A10)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseRule_TypeDefinitionIndex = 14574;

	class AutoUseRule : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::AutoUseRule* Empty; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* ConditionType; // 0x10
		::System::String* ConditionArgument; // 0x18
		::MX::Logic::Data::ModifierCheckTarget* ConditionCheckTarget; // 0x20
		::System::Int64 CoolTimeNotTrigger; // 0x28
		::System::Int32 TryCount; // 0x30
		::System::Boolean ResetTryCountUseSkill; // 0x34
		::System::Int32 TriggerRate; // 0x38
		::System::Int32 MaxTriggerCount; // 0x3C
		::System::Boolean CheckMountStatus; // 0x40
		Il2CppObject* TryToUseSkillModifiers; // 0x48

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSERULE_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSERULE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Skills::AutoUseRule* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::AutoUseRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSERULE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSERULE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Skills::AutoUseRule* arg, ::MX::Logic::Skills::AutoUseRule* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::AutoUseRule*, ::MX::Logic::Skills::AutoUseRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSERULE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Skills::AutoUseRule* arg, ::MX::Logic::Skills::AutoUseRule* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::AutoUseRule*, ::MX::Logic::Skills::AutoUseRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSERULE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSERULE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

