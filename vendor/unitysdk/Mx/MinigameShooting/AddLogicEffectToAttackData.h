#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }

#define MX_MINIGAMESHOOTING_ADDLOGICEFFECTTOATTACKDATA_APPLY_OFFSET UNITYSDK_OFFSET(0x1463A10)
#define MX_MINIGAMESHOOTING_ADDLOGICEFFECTTOATTACKDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1463B30)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int AddLogicEffectToAttackData_TypeDefinitionIndex = 15072;

	class AddLogicEffectToAttackData : public Il2CppObject
	{
	public:
		Il2CppObject* AddEffectsToAttackData; // 0x18

		::System::Void Apply(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::Character* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ADDLOGICEFFECTTOATTACKDATA_APPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ADDLOGICEFFECTTOATTACKDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

