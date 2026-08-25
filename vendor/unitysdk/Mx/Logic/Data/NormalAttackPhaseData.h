#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_NORMALATTACKPHASEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F6E20)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int NormalAttackPhaseData_TypeDefinitionIndex = 13657;

	class NormalAttackPhaseData : public Il2CppObject
	{
	public:
		::System::String* Description; // 0x10
		::System::Int32 PhaseDataId; // 0x18
		Il2CppObject* OnEnterNormalAttack; // 0x20
		Il2CppObject* AfterAttackEnter; // 0x28
		Il2CppObject* AfterReload; // 0x30
		Il2CppObject* AfterAttackStart; // 0x38
		Il2CppObject* AfterAttackIng; // 0x40
		Il2CppObject* AfterAttackBurstDelay; // 0x48
		Il2CppObject* AfterAttackFinish; // 0x50
		Il2CppObject* AfterMountWeapon; // 0x58
		Il2CppObject* AfterUnmountWeapon; // 0x60
		Il2CppObject* AfterSearchNewTarget; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NORMALATTACKPHASEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

