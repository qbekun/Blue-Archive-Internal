#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PARAMETERREF_INTEGEROUTPUTREF_SET_OFFSET UNITYSDK_OFFSET(0x1E29690)
#define MX_MINIGAMECCG_PARAMETERREF_INTEGEROUTPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29700)

namespace MX::MinigameCCG::ParameterRef
{
	inline static constexpr unsigned int IntegerOutputRef_TypeDefinitionIndex = 20917;

	class IntegerOutputRef : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10

		::System::Void Set(::MX::MinigameCCG::CCGProcedureContext* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_INTEGEROUTPUTREF_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_INTEGEROUTPUTREF_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

