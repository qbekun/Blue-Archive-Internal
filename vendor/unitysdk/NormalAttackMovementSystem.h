#pragma once
#include "unitysdk.h"

class NormalAttackMovementComponent;

#define NORMALATTACKMOVEMENTSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x15A7650)
#define NORMALATTACKMOVEMENTSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A7610)
#define NORMALATTACKMOVEMENTSYSTEM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15A7FA0)

	inline static constexpr unsigned int NormalAttackMovementSystem_TypeDefinitionIndex = 1096;

	class NormalAttackMovementSystem : public Il2CppObject
	{
	public:
		Il2CppObject* reachedBullets; // 0x0

		::System::Void Update(NormalAttackMovementComponent* arg)
		{
			((::System::Void(*)(NormalAttackMovementComponent*, ::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKMOVEMENTSYSTEM_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKMOVEMENTSYSTEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKMOVEMENTSYSTEM_.CCTOR_OFFSET))(nullptr);
		}

	};

