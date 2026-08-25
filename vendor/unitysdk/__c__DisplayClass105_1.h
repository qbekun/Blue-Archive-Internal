#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class MiniGameShootingBattleResultResponse; }
class <>c__DisplayClass105_0;
class UIMiniGameShootingResult;

#define <>C__DISPLAYCLASS105_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x147CBD0)
#define <>C__DISPLAYCLASS105_1__ENDMINIGAME_B__1_OFFSET UNITYSDK_OFFSET(0x147CBE0)

	inline static constexpr unsigned int <>c__DisplayClass105_1_TypeDefinitionIndex = 15164;

	class <>c__DisplayClass105_1 : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::MiniGameShootingBattleResultResponse* response; // 0x10
		<>c__DisplayClass105_0* CS$__8__locals1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS105_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _EndMiniGame_b__1(UIMiniGameShootingResult* arg)
		{
			((::System::Void(*)(UIMiniGameShootingResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS105_1__ENDMINIGAME_B__1_OFFSET))(arg, nullptr);
		}

	};

