#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PARAMETERREF_ENTITYCOLLECTIONINPUTREF_GET_OFFSET UNITYSDK_OFFSET(0x1E28F60)
#define MX_MINIGAMECCG_PARAMETERREF_ENTITYCOLLECTIONINPUTREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E29090)

namespace MX::MinigameCCG::ParameterRef
{
	inline static constexpr unsigned int EntityCollectionInputRef_TypeDefinitionIndex = 20909;

	class EntityCollectionInputRef : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10

		Il2CppObject* Get(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_ENTITYCOLLECTIONINPUTREF_GET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PARAMETERREF_ENTITYCOLLECTIONINPUTREF_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

