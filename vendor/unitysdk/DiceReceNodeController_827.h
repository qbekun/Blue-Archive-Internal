#pragma once
#include "unitysdk.h"

class DiceRacePlayer;

#define DICERECENODECONTROLLER_827_PALYANIFINISHNPC_OFFSET UNITYSDK_OFFSET(0x23D6BF0)
#define DICERECENODECONTROLLER_827_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D6C20)
#define DICERECENODECONTROLLER_827_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x23D6C30)
#define DICERECENODECONTROLLER_827_PLAYANISPECIALREWARDNPC_OFFSET UNITYSDK_OFFSET(0x23D6C70)

	inline static constexpr unsigned int DiceReceNodeController_827_TypeDefinitionIndex = 5329;

	class DiceReceNodeController_827 : public Il2CppObject
	{
	public:
		DiceRacePlayer* npcSpecialNode; // 0x48
		DiceRacePlayer* npcFinishNpcNode; // 0x50

		::System::Void PalyAniFinishNpc(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + DICERECENODECONTROLLER_827_PALYANIFINISHNPC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERECENODECONTROLLER_827_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERECENODECONTROLLER_827_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void PlayAniSpecialRewardNpc(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + DICERECENODECONTROLLER_827_PLAYANISPECIALREWARDNPC_OFFSET))(arg, nullptr);
		}

	};

