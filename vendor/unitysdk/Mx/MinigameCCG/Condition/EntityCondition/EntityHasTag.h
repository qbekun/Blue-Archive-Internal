#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class CCGTagType; }
namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYHASTAG_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2ADA0)
#define MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYHASTAG_CHECK_OFFSET UNITYSDK_OFFSET(0x1E2ADB0)

namespace MX::MinigameCCG::Condition::EntityCondition
{
	inline static constexpr unsigned int EntityHasTag_TypeDefinitionIndex = 20944;

	class EntityHasTag : public Il2CppObject
	{
	public:
		::FlatData::CCGTagType* tag; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYHASTAG_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ENTITYCONDITION_ENTITYHASTAG_CHECK_OFFSET))(arg, arg, nullptr);
		}

	};
}

