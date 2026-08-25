#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class EssentialCandidateRule; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Skills { class TargetingType; }
namespace MX::Logic::Skills { class TargetEntityType; }

#define MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x13ED5F0)
#define MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x13ED7E0)
#define MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x13ED880)
#define MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13ED8A0)
#define MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x13ED8F0)
#define MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x13ED710)
#define MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13ED960)
#define MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13ED9C0)
#define MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13EDDF0)
#define MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13EDE40)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int EssentialCandidateRule_TypeDefinitionIndex = 14601;

	class EssentialCandidateRule : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::EssentialCandidateRule* Default; // 0x0
		::MX::Logic::Skills::EssentialCandidateRule* Empty; // 0x10
		::MX::Logic::Skills::TargetSideId* TargetSide; // 0x10
		::MX::Logic::Skills::TargetingType* TargetingType; // 0x14
		::MX::Logic::Skills::TargetEntityType* ApplyEntityType; // 0x18
		::System::Int32 MaxTargetCount; // 0x1C

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Skills::EssentialCandidateRule* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::EssentialCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Skills::EssentialCandidateRule* arg, ::MX::Logic::Skills::EssentialCandidateRule* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::EssentialCandidateRule*, ::MX::Logic::Skills::EssentialCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Skills::EssentialCandidateRule* arg, ::MX::Logic::Skills::EssentialCandidateRule* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::EssentialCandidateRule*, ::MX::Logic::Skills::EssentialCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Skills::EssentialCandidateRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Skills::EssentialCandidateRule&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Skills::EssentialCandidateRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Skills::EssentialCandidateRule&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_ESSENTIALCANDIDATERULE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

