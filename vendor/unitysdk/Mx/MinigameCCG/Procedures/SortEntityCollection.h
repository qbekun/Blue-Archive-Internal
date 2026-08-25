#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityCollectionOutputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityOutputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PROCEDURES_SORTENTITYCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E37180)
#define MX_MINIGAMECCG_PROCEDURES_SORTENTITYCOLLECTION_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E37190)
#define MX_MINIGAMECCG_PROCEDURES_SORTENTITYCOLLECTION_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x1E37250)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int SortEntityCollection_TypeDefinitionIndex = 21043;

	class SortEntityCollection : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* entityCollectionVar; // 0x10
		::MX::MinigameCCG::ParameterRef::EntityCollectionOutputRef* sortedEntityCollectionVar; // 0x18
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* iteratedTempEntityVar; // 0x20
		::System::String* entityExpression; // 0x28
		::System::Boolean orderDescending; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SORTENTITYCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SORTENTITYCOLLECTION_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_SORTENTITYCOLLECTION_ONPREPARE_OFFSET))(arg, nullptr);
		}

	};
}

