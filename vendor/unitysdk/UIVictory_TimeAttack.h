#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;

#define UIVICTORY_TIMEATTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xBBDA20)
#define UIVICTORY_TIMEATTACK_SETDATA_OFFSET UNITYSDK_OFFSET(0xBB4E10)

	inline static constexpr unsigned int UIVictory_TimeAttack_TypeDefinitionIndex = 8608;

	class UIVictory_TimeAttack : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* normalResultRoot; // 0x18
		::UnityEngine::GameObject* timeoutResultRoot; // 0x20
		UILabel* defaultScoreLabel; // 0x28
		UILabel* clearScoreLabel; // 0x30
		UILabel* totalScoreLabel_Top; // 0x38
		UILabel* totalScoreLabel_Banner; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_TIMEATTACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORY_TIMEATTACK_SETDATA_OFFSET))(nullptr);
		}

	};

