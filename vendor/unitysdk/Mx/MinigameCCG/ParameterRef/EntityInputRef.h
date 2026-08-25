#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PARAMETERREF_ENTITYINPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E294D0)
#define MX_MINIGAMECCG_PARAMETERREF_ENTITYINPUTREF_GET_OFFSET UNITYSDK_OFFSET(0x1E294E0)

namespace MX::MinigameCCG::ParameterRef
{
	inline static constexpr unsigned int EntityInputRef_TypeDefinitionIndex = 20912;

	class EntityInputRef : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_ENTITYINPUTREF_.CTOR_OFFSET))(str, nullptr);
		}

		::MX::MinigameCCG::CCGEntity* Get(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_ENTITYINPUTREF_GET_OFFSET))(arg, nullptr);
		}

	};
}

