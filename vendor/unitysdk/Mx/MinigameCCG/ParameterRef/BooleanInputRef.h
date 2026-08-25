#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PARAMETERREF_BOOLEANINPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E28EB0)
#define MX_MINIGAMECCG_PARAMETERREF_BOOLEANINPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E28ED0)
#define MX_MINIGAMECCG_PARAMETERREF_BOOLEANINPUTREF_GET_OFFSET UNITYSDK_OFFSET(0x1E28EF0)

namespace MX::MinigameCCG::ParameterRef
{
	inline static constexpr unsigned int BooleanInputRef_TypeDefinitionIndex = 20906;

	class BooleanInputRef : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10
		::System::Boolean isConstant; // 0x18
		::System::Boolean constValue; // 0x19

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_BOOLEANINPUTREF_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_BOOLEANINPUTREF_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Get(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_BOOLEANINPUTREF_GET_OFFSET))(arg, nullptr);
		}

	};
}

