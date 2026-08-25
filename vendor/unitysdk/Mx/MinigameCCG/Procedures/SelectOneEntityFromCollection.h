#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::Procedures { class CCGCollectionSelectRule; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityOutputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PROCEDURES_SELECTONEENTITYFROMCOLLECTION_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2E6E0)
#define MX_MINIGAMECCG_PROCEDURES_SELECTONEENTITYFROMCOLLECTION_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x1E2E7A0)
#define MX_MINIGAMECCG_PROCEDURES_SELECTONEENTITYFROMCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E8A0)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int SelectOneEntityFromCollection_TypeDefinitionIndex = 20986;

	class SelectOneEntityFromCollection : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::Procedures::CCGCollectionSelectRule* rule; // 0x10
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* entityCollectionVar; // 0x18
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* selectedEntityVar; // 0x20

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SELECTONEENTITYFROMCOLLECTION_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SELECTONEENTITYFROMCOLLECTION_ONPREPARE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SELECTONEENTITYFROMCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

