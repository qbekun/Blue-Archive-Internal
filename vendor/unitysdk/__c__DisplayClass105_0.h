#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class MGSManager; }
namespace MX::NetworkProtocol { class MiniGameShootingBattleResultResponse; }

#define <>C__DISPLAYCLASS105_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1478FA0)
#define <>C__DISPLAYCLASS105_0__ENDMINIGAME_B__0_OFFSET UNITYSDK_OFFSET(0x147C9A0)

	inline static constexpr unsigned int <>c__DisplayClass105_0_TypeDefinitionIndex = 15163;

	class <>c__DisplayClass105_0 : public Il2CppObject
	{
	public:
		::System::Boolean isWin; // 0x10
		::MX::MinigameShooting::MGSManager* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS105_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _EndMiniGame_b__0(::MX::NetworkProtocol::MiniGameShootingBattleResultResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameShootingBattleResultResponse*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS105_0__ENDMINIGAME_B__0_OFFSET))(arg, nullptr);
		}

	};

