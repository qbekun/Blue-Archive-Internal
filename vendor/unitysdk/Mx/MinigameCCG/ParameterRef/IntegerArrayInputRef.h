#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PARAMETERREF_INTEGERARRAYINPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29540)
#define MX_MINIGAMECCG_PARAMETERREF_INTEGERARRAYINPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29570)
#define MX_MINIGAMECCG_PARAMETERREF_INTEGERARRAYINPUTREF_GET_OFFSET UNITYSDK_OFFSET(0x1E295A0)

namespace MX::MinigameCCG::ParameterRef
{
	inline static constexpr unsigned int IntegerArrayInputRef_TypeDefinitionIndex = 20914;

	class IntegerArrayInputRef : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10
		::System::Boolean isConstant; // 0x18
		::Il2CppArray<::System::Object*>* constValue; // 0x20

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_INTEGERARRAYINPUTREF_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_INTEGERARRAYINPUTREF_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Get(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_INTEGERARRAYINPUTREF_GET_OFFSET))(arg, nullptr);
		}

	};
}

