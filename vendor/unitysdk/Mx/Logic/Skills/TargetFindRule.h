#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetFindRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Skills { class EssentialCandidateRule; }
namespace MX::Logic::Skills { class OptionalCandidateRule; }

#define MX_LOGIC_SKILLS_TARGETFINDRULE_SHOULDSERIALIZEOPTIONALCANDIDATE_OFFSET UNITYSDK_OFFSET(0x13F1770)
#define MX_LOGIC_SKILLS_TARGETFINDRULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x13F1780)
#define MX_LOGIC_SKILLS_TARGETFINDRULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x13F1820)
#define MX_LOGIC_SKILLS_TARGETFINDRULE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13F1A90)
#define MX_LOGIC_SKILLS_TARGETFINDRULE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x13F1BD0)
#define MX_LOGIC_SKILLS_TARGETFINDRULE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x13F1C40)
#define MX_LOGIC_SKILLS_TARGETFINDRULE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13F1D20)
#define MX_LOGIC_SKILLS_TARGETFINDRULE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13F1EC0)
#define MX_LOGIC_SKILLS_TARGETFINDRULE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13F20C0)
#define MX_LOGIC_SKILLS_TARGETFINDRULE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13F2250)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int TargetFindRule_TypeDefinitionIndex = 14607;

	class TargetFindRule : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetFindRule* Empty; // 0x0
		::MX::Logic::Skills::TargetSortRule* Sort; // 0x10
		::MX::Logic::Skills::EssentialCandidateRule* EssentialCandidate; // 0x38
		::MX::Logic::Skills::OptionalCandidateRule* OptionalCandidate; // 0x48

		::System::Boolean ShouldSerializeOptionalCandidate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETFINDRULE_SHOULDSERIALIZEOPTIONALCANDIDATE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETFINDRULE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Skills::TargetFindRule* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::TargetFindRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETFINDRULE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETFINDRULE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Skills::TargetFindRule* arg, ::MX::Logic::Skills::TargetFindRule* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::TargetFindRule*, ::MX::Logic::Skills::TargetFindRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETFINDRULE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Skills::TargetFindRule* arg, ::MX::Logic::Skills::TargetFindRule* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::TargetFindRule*, ::MX::Logic::Skills::TargetFindRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETFINDRULE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETFINDRULE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETFINDRULE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Skills::TargetFindRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Skills::TargetFindRule&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETFINDRULE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Skills::TargetFindRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Skills::TargetFindRule&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETFINDRULE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

