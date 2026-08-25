#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }

#define MX_MINIGAMECCG_CCGGAMESTATE_GRAPH_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6670)
#define MX_MINIGAMECCG_CCGGAMESTATE_GRAPH_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DD66A0)
#define MX_MINIGAMECCG_CCGGAMESTATE_GRAPH_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DD6740)
#define MX_MINIGAMECCG_CCGGAMESTATE_GRAPH_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DD6750)
#define MX_MINIGAMECCG_CCGGAMESTATE_GRAPH_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_Graph_TypeDefinitionIndex = 20623;

	class CCGGameState_Graph : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GRAPH_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GRAPH_ONSTATEEXIT_OFFSET))(nullptr);
		}

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GRAPH_ONSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GRAPH_ONSTATEENTER_OFFSET))(nullptr);
		}

		Il2CppObject* get_Graph()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GRAPH_GET_GRAPH_OFFSET))(nullptr);
		}

	};
}

