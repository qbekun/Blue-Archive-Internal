#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class MGSManager; }
namespace MX::MinigameShooting { class MGSGameMode; }
namespace MX::NetworkProtocol { class MiniGameShootingBattleEnterResponse; }

#define <>C__DISPLAYCLASS81_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1477690)
#define <>C__DISPLAYCLASS81_0__REQUESTMINIGAMESHOOTINGENTER_B__0_OFFSET UNITYSDK_OFFSET(0x1479460)

	inline static constexpr unsigned int <>c__DisplayClass81_0_TypeDefinitionIndex = 15151;

	class <>c__DisplayClass81_0 : public Il2CppObject
	{
	public:
		::System::Int64 playerId; // 0x10
		::MX::MinigameShooting::MGSManager* __4__this; // 0x18
		::System::Int64 eventContentId; // 0x20
		::System::Int64 stageId; // 0x28
		::MX::MinigameShooting::MGSGameMode* gameMode; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS81_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _RequestMiniGameShootingEnter_b__0(::MX::NetworkProtocol::MiniGameShootingBattleEnterResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameShootingBattleEnterResponse*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS81_0__REQUESTMINIGAMESHOOTINGENTER_B__0_OFFSET))(arg, nullptr);
		}

	};

