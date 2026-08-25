#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PARAMETERREF_INTEGERINPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29640)
#define MX_MINIGAMECCG_PARAMETERREF_INTEGERINPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29670)
#define MX_MINIGAMECCG_PARAMETERREF_INTEGERINPUTREF_GET_OFFSET UNITYSDK_OFFSET(0x1E28E10)

namespace MX::MinigameCCG::ParameterRef
{
	inline static constexpr unsigned int IntegerInputRef_TypeDefinitionIndex = 20916;

	class IntegerInputRef : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10
		::System::Boolean isConstant; // 0x18
		::System::Int32 constValue; // 0x1C

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_INTEGERINPUTREF_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_INTEGERINPUTREF_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Get(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::System::Int32(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_INTEGERINPUTREF_GET_OFFSET))(arg, nullptr);
		}

	};
}

