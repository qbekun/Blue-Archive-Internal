#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_SKILLTARGETSELECTOR_ALLTARGETENTITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E28B40)
#define MX_MINIGAMECCG_SKILLTARGETSELECTOR_ALLTARGETENTITIES_FILTER_OFFSET UNITYSDK_OFFSET(0x1E28B50)

namespace MX::MinigameCCG::SkillTargetSelector
{
	inline static constexpr unsigned int AllTargetEntities_TypeDefinitionIndex = 20902;

	class AllTargetEntities : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTARGETSELECTOR_ALLTARGETENTITIES_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Filter(::MX::MinigameCCG::CCGSkillContext* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTARGETSELECTOR_ALLTARGETENTITIES_FILTER_OFFSET))(arg, arg, nullptr);
		}

	};
}

