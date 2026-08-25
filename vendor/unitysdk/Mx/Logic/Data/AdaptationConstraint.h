#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class AdaptationConstraint; }
namespace FlatData { class StatType; }
namespace MX::Logic::Data { class IncludeType; }
namespace FlatData { class TerrainAdaptationStat; }

#define MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_SHOULDSERIALIZEADAPTATIONVALUES_OFFSET UNITYSDK_OFFSET(0x11E7C30)
#define MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11E7C40)
#define MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E7CC0)
#define MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E7D60)
#define MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11E7E80)
#define MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11E7F40)
#define MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11E8020)
#define MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11E80A0)
#define MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11E8150)
#define MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11E8640)
#define MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11E86D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AdaptationConstraint_TypeDefinitionIndex = 13460;

	class AdaptationConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::AdaptationConstraint* Empty; // 0x0
		::FlatData::StatType* AdaptationType; // 0x10
		::Il2CppArray<::System::Object*>* AdaptationValues; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x20

		::System::Boolean ShouldSerializeAdaptationValues()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_SHOULDSERIALIZEADAPTATIONVALUES_OFFSET))(nullptr);
		}

		::System::Boolean IsMatch(::FlatData::TerrainAdaptationStat* arg)
		{
			return ((::System::Boolean(*)(::FlatData::TerrainAdaptationStat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_ISMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::AdaptationConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::AdaptationConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::AdaptationConstraint* arg, ::MX::Logic::Data::AdaptationConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::AdaptationConstraint*, ::MX::Logic::Data::AdaptationConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::AdaptationConstraint* arg, ::MX::Logic::Data::AdaptationConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::AdaptationConstraint*, ::MX::Logic::Data::AdaptationConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::AdaptationConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::AdaptationConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::AdaptationConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::AdaptationConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADAPTATIONCONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

