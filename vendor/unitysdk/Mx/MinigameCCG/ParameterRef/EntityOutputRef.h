#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_PARAMETERREF_ENTITYOUTPUTREF_SET_OFFSET UNITYSDK_OFFSET(0x1E27AF0)
#define MX_MINIGAMECCG_PARAMETERREF_ENTITYOUTPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29530)

namespace MX::MinigameCCG::ParameterRef
{
	inline static constexpr unsigned int EntityOutputRef_TypeDefinitionIndex = 20913;

	class EntityOutputRef : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10

		::System::Void Set(::MX::MinigameCCG::CCGProcedureContext* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_ENTITYOUTPUTREF_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_ENTITYOUTPUTREF_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

