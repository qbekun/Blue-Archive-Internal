#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SpawnSourceConstraint; }
namespace MX::Logic::Data { class IncludeType; }
class SourceType;

#define MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11EEF00)
#define MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EEF80)
#define MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EF010)
#define MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11EF110)
#define MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11EF1C0)
#define MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11EF290)
#define MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11EF300)
#define MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11EF380)
#define MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EF7B0)
#define MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EF910)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SpawnSourceConstraint_TypeDefinitionIndex = 13488;

	class SpawnSourceConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::SpawnSourceConstraint* Empty; // 0x0
		::Il2CppArray<::System::Object*>* SpawnSources; // 0x10
		::MX::Logic::Data::IncludeType* IncludeType; // 0x18

		::System::Boolean IsMatch(SourceType* arg)
		{
			return ((::System::Boolean(*)(SourceType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_ISMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::SpawnSourceConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SpawnSourceConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::SpawnSourceConstraint* arg, ::MX::Logic::Data::SpawnSourceConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SpawnSourceConstraint*, ::MX::Logic::Data::SpawnSourceConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::SpawnSourceConstraint* arg, ::MX::Logic::Data::SpawnSourceConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SpawnSourceConstraint*, ::MX::Logic::Data::SpawnSourceConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::SpawnSourceConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::SpawnSourceConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::SpawnSourceConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::SpawnSourceConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SPAWNSOURCECONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

