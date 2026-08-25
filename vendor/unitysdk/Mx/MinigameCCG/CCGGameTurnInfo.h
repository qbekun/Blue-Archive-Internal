#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGCharacter; }

#define MX_MINIGAMECCG_CCGGAMETURNINFO_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1DB96A0)
#define MX_MINIGAMECCG_CCGGAMETURNINFO_GET_CANUSESTRIKERACTIVESKILL_OFFSET UNITYSDK_OFFSET(0x1DB96B0)
#define MX_MINIGAMECCG_CCGGAMETURNINFO_GET_TURNNUMBER_OFFSET UNITYSDK_OFFSET(0x1DB96C0)
#define MX_MINIGAMECCG_CCGGAMETURNINFO_SET_TURNNUMBER_OFFSET UNITYSDK_OFFSET(0x1DB96D0)
#define MX_MINIGAMECCG_CCGGAMETURNINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DB96E0)
#define MX_MINIGAMECCG_CCGGAMETURNINFO_TRYUSECHARACTERSKILL_OFFSET UNITYSDK_OFFSET(0x1DB9750)
#define MX_MINIGAMECCG_CCGGAMETURNINFO_SET_CANUSESTRIKERACTIVESKILL_OFFSET UNITYSDK_OFFSET(0x1DB97F0)
#define MX_MINIGAMECCG_CCGGAMETURNINFO_RESET_OFFSET UNITYSDK_OFFSET(0x1DB9720)
#define MX_MINIGAMECCG_CCGGAMETURNINFO_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1DB9800)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameTurnInfo_TypeDefinitionIndex = 20448;

	class CCGGameTurnInfo : public Il2CppObject
	{
	public:
		::System::Int32 _TurnNumber_k__BackingField; // 0x10
		::MX::MinigameCCG::CCGPlayer* _Player_k__BackingField; // 0x18
		::System::Boolean _CanUseStrikerActiveSkill_k__BackingField; // 0x20

		::MX::MinigameCCG::CCGPlayer* get_Player()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMETURNINFO_GET_PLAYER_OFFSET))(nullptr);
		}

		::System::Boolean get_CanUseStrikerActiveSkill()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMETURNINFO_GET_CANUSESTRIKERACTIVESKILL_OFFSET))(nullptr);
		}

		::System::Int32 get_TurnNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMETURNINFO_GET_TURNNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_TurnNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMETURNINFO_SET_TURNNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::System::Int32, ::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMETURNINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryUseCharacterSkill(::MX::MinigameCCG::CCGCharacter* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMETURNINFO_TRYUSECHARACTERSKILL_OFFSET))(arg, nullptr);
		}

		::System::Void set_CanUseStrikerActiveSkill(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMETURNINFO_SET_CANUSESTRIKERACTIVESKILL_OFFSET))(arg, nullptr);
		}

		::System::Void Reset(::System::Int32 arg, ::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::System::Int32, ::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMETURNINFO_RESET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Player(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMETURNINFO_SET_PLAYER_OFFSET))(arg, nullptr);
		}

	};
}

