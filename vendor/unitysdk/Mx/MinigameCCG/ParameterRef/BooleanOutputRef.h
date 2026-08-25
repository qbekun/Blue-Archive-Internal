#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PARAMETERREF_BOOLEANOUTPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E28F50)
#define MX_MINIGAMECCG_PARAMETERREF_BOOLEANOUTPUTREF_SET_OFFSET UNITYSDK_OFFSET(0x1E27B20)

namespace MX::MinigameCCG::ParameterRef
{
	inline static constexpr unsigned int BooleanOutputRef_TypeDefinitionIndex = 20907;

	class BooleanOutputRef : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_BOOLEANOUTPUTREF_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Set(::MX::MinigameCCG::CCGProcedureContext* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_BOOLEANOUTPUTREF_SET_OFFSET))(arg, arg, nullptr);
		}

	};
}

