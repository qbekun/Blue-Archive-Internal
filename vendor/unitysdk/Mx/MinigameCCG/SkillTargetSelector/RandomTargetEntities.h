#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_SKILLTARGETSELECTOR_RANDOMTARGETENTITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E28B80)
#define MX_MINIGAMECCG_SKILLTARGETSELECTOR_RANDOMTARGETENTITIES_FILTER_OFFSET UNITYSDK_OFFSET(0x1E28B90)

namespace MX::MinigameCCG::SkillTargetSelector
{
	inline static constexpr unsigned int RandomTargetEntities_TypeDefinitionIndex = 20904;

	class RandomTargetEntities : public Il2CppObject
	{
	public:
		::System::Boolean allowDuplicate; // 0x20
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* selectCountVar; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTARGETSELECTOR_RANDOMTARGETENTITIES_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Filter(::MX::MinigameCCG::CCGSkillContext* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTARGETSELECTOR_RANDOMTARGETENTITIES_FILTER_OFFSET))(arg, arg, nullptr);
		}

	};
}

