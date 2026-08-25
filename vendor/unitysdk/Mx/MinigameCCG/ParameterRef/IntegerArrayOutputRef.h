#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PARAMETERREF_INTEGERARRAYOUTPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29600)
#define MX_MINIGAMECCG_PARAMETERREF_INTEGERARRAYOUTPUTREF_SET_OFFSET UNITYSDK_OFFSET(0x1E29610)

namespace MX::MinigameCCG::ParameterRef
{
	inline static constexpr unsigned int IntegerArrayOutputRef_TypeDefinitionIndex = 20915;

	class IntegerArrayOutputRef : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_INTEGERARRAYOUTPUTREF_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Set(::MX::MinigameCCG::CCGProcedureContext* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_INTEGERARRAYOUTPUTREF_SET_OFFSET))(arg, arg, nullptr);
		}

	};
}

