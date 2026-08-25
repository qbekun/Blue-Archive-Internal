#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_SKILLTARGETSELECTOR_PLAYERSELECTENTITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E28B60)
#define MX_MINIGAMECCG_SKILLTARGETSELECTOR_PLAYERSELECTENTITIES_FILTER_OFFSET UNITYSDK_OFFSET(0x1E28B70)

namespace MX::MinigameCCG::SkillTargetSelector
{
	inline static constexpr unsigned int PlayerSelectEntities_TypeDefinitionIndex = 20903;

	class PlayerSelectEntities : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* selectCountVar; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTARGETSELECTOR_PLAYERSELECTENTITIES_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Filter(::MX::MinigameCCG::CCGSkillContext* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTARGETSELECTOR_PLAYERSELECTENTITIES_FILTER_OFFSET))(arg, arg, nullptr);
		}

	};
}

