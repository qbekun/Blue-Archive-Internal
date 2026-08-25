#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PARAMETERREF_ANYINPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E28E70)
#define MX_MINIGAMECCG_PARAMETERREF_ANYINPUTREF_GET_OFFSET UNITYSDK_OFFSET(0x1E28E80)

namespace MX::MinigameCCG::ParameterRef
{
	inline static constexpr unsigned int AnyInputRef_TypeDefinitionIndex = 20905;

	class AnyInputRef : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_ANYINPUTREF_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Object* Get(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::System::Object*(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_ANYINPUTREF_GET_OFFSET))(arg, nullptr);
		}

	};
}

