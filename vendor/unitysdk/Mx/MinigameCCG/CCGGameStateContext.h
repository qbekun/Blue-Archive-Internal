#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGameState; }

#define MX_MINIGAMECCG_CCGGAMESTATECONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9610)
#define MX_MINIGAMECCG_CCGGAMESTATECONTEXT_SET_ENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB9660)
#define MX_MINIGAMECCG_CCGGAMESTATECONTEXT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1DB9670)
#define MX_MINIGAMECCG_CCGGAMESTATECONTEXT_GET_ENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB9680)
#define MX_MINIGAMECCG_CCGGAMESTATECONTEXT_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1DB9690)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameStateContext_TypeDefinitionIndex = 20447;

	class CCGGameStateContext : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGGameState* _State_k__BackingField; // 0x10
		Il2CppObject* _Enumerator_k__BackingField; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGGameState* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGameState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATECONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Enumerator(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATECONTEXT_SET_ENUMERATOR_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGGameState* get_State()
		{
			return (return (::MX::MinigameCCG::CCGGameState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATECONTEXT_GET_STATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Enumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATECONTEXT_GET_ENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void set_State(::MX::MinigameCCG::CCGGameState* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGameState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATECONTEXT_SET_STATE_OFFSET))(arg, nullptr);
		}

	};
}

