#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_ICCGSKILLTRIGGERABLE_TRIGGERPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ICCGSkillTriggerable_TypeDefinitionIndex = 20463;

	class ICCGSkillTriggerable : public Il2CppObject
	{
	public:
		Il2CppObject* TriggerPassiveSkill(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ICCGSKILLTRIGGERABLE_TRIGGERPASSIVESKILL_OFFSET))(arg, nullptr);
		}

	};
}

