#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityInputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_CHANGEFRONTSTRIKER_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2F760)
#define MX_MINIGAMECCG_PROCEDURES_CHANGEFRONTSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F820)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int ChangeFrontStriker_TypeDefinitionIndex = 20996;

	class ChangeFrontStriker : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityInputRef* entityVar; // 0x10

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_CHANGEFRONTSTRIKER_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_CHANGEFRONTSTRIKER_.CTOR_OFFSET))(nullptr);
		}

	};
}

