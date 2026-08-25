#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillContext; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionOutputRef; }

#define MX_MINIGAMECCG_CCGGAMESTATE_PLAYERSELECTTARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DE94D0)
#define MX_MINIGAMECCG_CCGGAMESTATE_PLAYERSELECTTARGET_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1DE95B0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_PlayerSelectTarget_TypeDefinitionIndex = 20684;

	class CCGGameState_PlayerSelectTarget : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGSkillContext* _context; // 0x18
		::MX::MinigameCCG::CCGPlayer* _player; // 0x20
		Il2CppObject* _candidates; // 0x28
		::System::Int32 _selectCount; // 0x30
		::MX::MinigameCCG::ParameterRef::EntityCollectionOutputRef* _entitySelectedVar; // 0x38

		::System::Void .ctor(::MX::MinigameCCG::CCGSkillContext* arg, ::MX::MinigameCCG::CCGPlayer* arg, Il2CppObject* arg, ::System::Int32 arg, ::MX::MinigameCCG::ParameterRef::EntityCollectionOutputRef* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillContext*, ::MX::MinigameCCG::CCGPlayer*, Il2CppObject*, ::System::Int32, ::MX::MinigameCCG::ParameterRef::EntityCollectionOutputRef*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_PLAYERSELECTTARGET_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* get_Graph()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_PLAYERSELECTTARGET_GET_GRAPH_OFFSET))(nullptr);
		}

	};
}

