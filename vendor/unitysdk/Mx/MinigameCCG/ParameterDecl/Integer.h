#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PARAMETERDECL_INTEGER_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1E29A90)
#define MX_MINIGAMECCG_PARAMETERDECL_INTEGER_INITCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E29AA0)
#define MX_MINIGAMECCG_PARAMETERDECL_INTEGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29B10)

namespace MX::MinigameCCG::ParameterDecl
{
	inline static constexpr unsigned int Integer_TypeDefinitionIndex = 20924;

	class Integer : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10
		::System::Int32 defaultValue; // 0x18

		::System::String* get_Key()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERDECL_INTEGER_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void InitContext(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERDECL_INTEGER_INITCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERDECL_INTEGER_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

