#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PARAMETERREF_PLAYERINPUTREF_GET_OFFSET UNITYSDK_OFFSET(0x1E29710)
#define MX_MINIGAMECCG_PARAMETERREF_PLAYERINPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29840)

namespace MX::MinigameCCG::ParameterRef
{
	inline static constexpr unsigned int PlayerInputRef_TypeDefinitionIndex = 20919;

	class PlayerInputRef : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10

		::MX::MinigameCCG::CCGPlayer* Get(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_PLAYERINPUTREF_GET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_PLAYERINPUTREF_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

