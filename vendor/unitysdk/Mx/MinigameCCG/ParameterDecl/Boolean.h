#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PARAMETERDECL_BOOLEAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29990)
#define MX_MINIGAMECCG_PARAMETERDECL_BOOLEAN_INITCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E299B0)
#define MX_MINIGAMECCG_PARAMETERDECL_BOOLEAN_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1E29A20)

namespace MX::MinigameCCG::ParameterDecl
{
	inline static constexpr unsigned int Boolean_TypeDefinitionIndex = 20921;

	class Boolean : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10
		::System::Boolean defaultValue; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERDECL_BOOLEAN_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitContext(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERDECL_BOOLEAN_INITCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Key()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERDECL_BOOLEAN_GET_KEY_OFFSET))(nullptr);
		}

	};
}

