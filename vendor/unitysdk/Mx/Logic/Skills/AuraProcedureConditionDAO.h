#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class AuraProcedureConditionType; }
namespace MX::Core::Services { class Hash64; }
namespace MX::Logic::Skills { class AuraProcedureConditionDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_SKILLS_AURAPROCEDURECONDITIONDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13DC080)
#define MX_LOGIC_SKILLS_AURAPROCEDURECONDITIONDAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x13DC310)
#define MX_LOGIC_SKILLS_AURAPROCEDURECONDITIONDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13DC330)
#define MX_LOGIC_SKILLS_AURAPROCEDURECONDITIONDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13DC090)
#define MX_LOGIC_SKILLS_AURAPROCEDURECONDITIONDAO_TOVALUE_OFFSET UNITYSDK_OFFSET(0x13DB1C0)
#define MX_LOGIC_SKILLS_AURAPROCEDURECONDITIONDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13DCA90)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AuraProcedureConditionDAO_TypeDefinitionIndex = 14524;

	class AuraProcedureConditionDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::AuraProcedureConditionType* Type; // 0x10
		::System::String* Parameter; // 0x18
		::MX::Core::Services::Hash64* ParameterHash; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURECONDITIONDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Skills::AuraProcedureConditionDAO* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::AuraProcedureConditionDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURECONDITIONDAO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Skills::AuraProcedureConditionDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Skills::AuraProcedureConditionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURECONDITIONDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURECONDITIONDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::AuraProcedureConditionDAO* ToValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg2, ::MX::Logic::Skills::TargetCandidateRule* arg3, ::MX::Logic::Skills::TargetSortRule* arg4)
		{
			return ((::MX::Logic::Skills::AuraProcedureConditionDAO*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURECONDITIONDAO_TOVALUE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Skills::AuraProcedureConditionDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Skills::AuraProcedureConditionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURECONDITIONDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

