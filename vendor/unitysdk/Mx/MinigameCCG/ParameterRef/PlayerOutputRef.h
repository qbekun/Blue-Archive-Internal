#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_PARAMETERREF_PLAYEROUTPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29950)
#define MX_MINIGAMECCG_PARAMETERREF_PLAYEROUTPUTREF_SET_OFFSET UNITYSDK_OFFSET(0x1E29960)

namespace MX::MinigameCCG::ParameterRef
{
	inline static constexpr unsigned int PlayerOutputRef_TypeDefinitionIndex = 20920;

	class PlayerOutputRef : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_PLAYEROUTPUTREF_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Set(::MX::MinigameCCG::CCGProcedureContext* arg, ::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_PLAYEROUTPUTREF_SET_OFFSET))(arg, arg, nullptr);
		}

	};
}

