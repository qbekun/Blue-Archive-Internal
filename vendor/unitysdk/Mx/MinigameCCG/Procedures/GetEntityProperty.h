#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityInputRef; }
namespace MX::MinigameCCG::ParameterRef { class PlayerOutputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerOutputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionOutputRef; }
namespace MX::MinigameCCG { class CCGProcedureContext; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_GETENTITYPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C5B0)
#define MX_MINIGAMECCG_PROCEDURES_GETENTITYPROPERTY_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x1E2C5C0)
#define MX_MINIGAMECCG_PROCEDURES_GETENTITYPROPERTY_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2C8E0)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int GetEntityProperty_TypeDefinitionIndex = 20970;

	class GetEntityProperty : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityInputRef* entityVar; // 0x10
		::MX::MinigameCCG::ParameterRef::PlayerOutputRef* playerVar; // 0x18
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* activeSkillCostVar; // 0x20
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* activeSkillPowerVar; // 0x28
		::MX::MinigameCCG::ParameterRef::EntityCollectionOutputRef* equippedEntitiesVar; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETENTITYPROPERTY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETENTITYPROPERTY_ONPREPARE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETENTITYPROPERTY_ONSTATE_OFFSET))(arg, nullptr);
		}

	};
}

