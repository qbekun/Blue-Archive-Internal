#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class AuraProcedureCommandType; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class AuraProcedureCommandDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_SKILLS_AURAPROCEDURECOMMANDDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13DD220)
#define MX_LOGIC_SKILLS_AURAPROCEDURECOMMANDDAO_TOVALUE_OFFSET UNITYSDK_OFFSET(0x13DB210)
#define MX_LOGIC_SKILLS_AURAPROCEDURECOMMANDDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13DD4B0)
#define MX_LOGIC_SKILLS_AURAPROCEDURECOMMANDDAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x13DD760)
#define MX_LOGIC_SKILLS_AURAPROCEDURECOMMANDDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13DD780)
#define MX_LOGIC_SKILLS_AURAPROCEDURECOMMANDDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13DD230)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AuraProcedureCommandDAO_TypeDefinitionIndex = 14526;

	class AuraProcedureCommandDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::AuraProcedureCommandType* Type; // 0x10
		::MX::GameData::DAO::Battle::SkillEntityDAO* SkillEntityData; // 0x18
		::MX::Logic::Data::SkillEntityValue* SkillEntityValue; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURECOMMANDDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::AuraProcedureCommandDAO* ToValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg2, ::MX::Logic::Skills::TargetCandidateRule* arg3, ::MX::Logic::Skills::TargetSortRule* arg4)
		{
			return ((::MX::Logic::Skills::AuraProcedureCommandDAO*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURECOMMANDDAO_TOVALUE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Skills::AuraProcedureCommandDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Skills::AuraProcedureCommandDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURECOMMANDDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Skills::AuraProcedureCommandDAO* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::AuraProcedureCommandDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURECOMMANDDAO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Skills::AuraProcedureCommandDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Skills::AuraProcedureCommandDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURECOMMANDDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURECOMMANDDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

