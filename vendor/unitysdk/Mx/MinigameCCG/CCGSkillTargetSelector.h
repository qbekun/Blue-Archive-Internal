#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionOutputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_CCGSKILLTARGETSELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC61E0)
#define MX_MINIGAMECCG_CCGSKILLTARGETSELECTOR_FILTER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGSkillTargetSelector_TypeDefinitionIndex = 20499;

	class CCGSkillTargetSelector : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* entityCandidatesVar; // 0x10
		::MX::MinigameCCG::ParameterRef::EntityCollectionOutputRef* entitySelectedVar; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLTARGETSELECTOR_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Filter(::MX::MinigameCCG::CCGSkillContext* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSKILLTARGETSELECTOR_FILTER_OFFSET))(arg, arg, nullptr);
		}

	};
}

