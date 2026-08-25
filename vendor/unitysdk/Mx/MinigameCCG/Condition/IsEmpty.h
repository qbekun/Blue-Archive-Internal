#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_CONDITION_ISEMPTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A170)
#define MX_MINIGAMECCG_CONDITION_ISEMPTY_CHECK_OFFSET UNITYSDK_OFFSET(0x1E2A180)

namespace MX::MinigameCCG::Condition
{
	inline static constexpr unsigned int IsEmpty_TypeDefinitionIndex = 20934;

	class IsEmpty : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* entityCollectionVar; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ISEMPTY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CONDITION_ISEMPTY_CHECK_OFFSET))(arg, nullptr);
		}

	};
}

