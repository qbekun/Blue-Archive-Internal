#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Skills { class TargetSortCriteria; }
namespace FlatData { class StatType; }
namespace MX::Logic::BattleEntities { class TargetSortOrder; }

#define MX_LOGIC_SKILLS_TARGETSORTRULE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x13F2890)
#define MX_LOGIC_SKILLS_TARGETSORTRULE_SHOULDSERIALIZEREINDEXING_OFFSET UNITYSDK_OFFSET(0x13F28A0)
#define MX_LOGIC_SKILLS_TARGETSORTRULE_SHOULDSERIALIZEALLOWEDSUMMONEDCOUNT_OFFSET UNITYSDK_OFFSET(0x13F28C0)
#define MX_LOGIC_SKILLS_TARGETSORTRULE_GETSORTPARAMETERHASHES_OFFSET UNITYSDK_OFFSET(0x13F28D0)
#define MX_LOGIC_SKILLS_TARGETSORTRULE_GET_RANDOMTARGETSELECT_OFFSET UNITYSDK_OFFSET(0x13F2A50)
#define MX_LOGIC_SKILLS_TARGETSORTRULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x13F2A60)
#define MX_LOGIC_SKILLS_TARGETSORTRULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x13F2A80)
#define MX_LOGIC_SKILLS_TARGETSORTRULE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13F1B80)
#define MX_LOGIC_SKILLS_TARGETSORTRULE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x13F1A20)
#define MX_LOGIC_SKILLS_TARGETSORTRULE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x13F2B20)
#define MX_LOGIC_SKILLS_TARGETSORTRULE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13F2BE0)
#define MX_LOGIC_SKILLS_TARGETSORTRULE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13F2C50)
#define MX_LOGIC_SKILLS_TARGETSORTRULE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13F3080)
#define MX_LOGIC_SKILLS_TARGETSORTRULE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13F3840)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int TargetSortRule_TypeDefinitionIndex = 14612;

	class TargetSortRule : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetSortRule* Empty; // 0x0
		::MX::Logic::Skills::TargetSortCriteria* SortCriteria; // 0x10
		::FlatData::StatType* SortStat; // 0x14
		::System::String* SortParameter; // 0x18
		::MX::Logic::BattleEntities::TargetSortOrder* OrderBy; // 0x20
		::System::Int32 Reindexing; // 0x24
		::System::Int32 AllowedSummonedCount; // 0x28
		Il2CppObject* SortParameterHashes; // 0x30

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETSORTRULE_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeReindexing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETSORTRULE_SHOULDSERIALIZEREINDEXING_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeAllowedSummonedCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETSORTRULE_SHOULDSERIALIZEALLOWEDSUMMONEDCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetSortParameterHashes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETSORTRULE_GETSORTPARAMETERHASHES_OFFSET))(nullptr);
		}

		::System::Boolean get_RandomTargetSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETSORTRULE_GET_RANDOMTARGETSELECT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Skills::TargetSortRule* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETSORTRULE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETSORTRULE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETSORTRULE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Skills::TargetSortRule* arg, ::MX::Logic::Skills::TargetSortRule* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::TargetSortRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETSORTRULE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Skills::TargetSortRule* arg, ::MX::Logic::Skills::TargetSortRule* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::TargetSortRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETSORTRULE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETSORTRULE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETSORTRULE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Skills::TargetSortRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Skills::TargetSortRule&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETSORTRULE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Skills::TargetSortRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Skills::TargetSortRule&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETSORTRULE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

