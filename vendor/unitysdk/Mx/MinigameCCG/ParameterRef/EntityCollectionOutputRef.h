#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PARAMETERREF_ENTITYCOLLECTIONOUTPUTREF_SET_OFFSET UNITYSDK_OFFSET(0x1E29230)
#define MX_MINIGAMECCG_PARAMETERREF_ENTITYCOLLECTIONOUTPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29420)

namespace MX::MinigameCCG::ParameterRef
{
	inline static constexpr unsigned int EntityCollectionOutputRef_TypeDefinitionIndex = 20911;

	class EntityCollectionOutputRef : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10

		::System::Void Set(::MX::MinigameCCG::CCGProcedureContext* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_ENTITYCOLLECTIONOUTPUTREF_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_ENTITYCOLLECTIONOUTPUTREF_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

