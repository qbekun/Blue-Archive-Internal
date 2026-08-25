#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PARAMETERDECL_ENTITY_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1E29A30)
#define MX_MINIGAMECCG_PARAMETERDECL_ENTITY_INITCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E29A40)
#define MX_MINIGAMECCG_PARAMETERDECL_ENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29A50)

namespace MX::MinigameCCG::ParameterDecl
{
	inline static constexpr unsigned int Entity_TypeDefinitionIndex = 20922;

	class Entity : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10

		::System::String* get_Key()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERDECL_ENTITY_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void InitContext(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERDECL_ENTITY_INITCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERDECL_ENTITY_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

