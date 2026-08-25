#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PARAMETERDECL_INTEGERARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29B30)
#define MX_MINIGAMECCG_PARAMETERDECL_INTEGERARRAY_INITCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E29B60)
#define MX_MINIGAMECCG_PARAMETERDECL_INTEGERARRAY_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1E29BF0)

namespace MX::MinigameCCG::ParameterDecl
{
	inline static constexpr unsigned int IntegerArray_TypeDefinitionIndex = 20925;

	class IntegerArray : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10
		Il2CppObject* defaultValue; // 0x18

		::System::Void .ctor(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERDECL_INTEGERARRAY_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitContext(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERDECL_INTEGERARRAY_INITCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Key()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERDECL_INTEGERARRAY_GET_KEY_OFFSET))(nullptr);
		}

	};
}

