#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class HPRateConstraint; }
namespace MX::Logic::Data { class HPRateConstraintType; }

#define MX_LOGIC_DATA_HPRATECONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11ED3D0)
#define MX_LOGIC_DATA_HPRATECONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11ED3F0)
#define MX_LOGIC_DATA_HPRATECONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11ED480)
#define MX_LOGIC_DATA_HPRATECONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11ED4B0)
#define MX_LOGIC_DATA_HPRATECONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11ED510)
#define MX_LOGIC_DATA_HPRATECONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11ED5D0)
#define MX_LOGIC_DATA_HPRATECONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11ED610)
#define MX_LOGIC_DATA_HPRATECONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11ED8D0)
#define MX_LOGIC_DATA_HPRATECONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11ED920)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HPRateConstraint_TypeDefinitionIndex = 13479;

	class HPRateConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::HPRateConstraint* Empty; // 0x0
		::MX::Logic::Data::HPRateConstraintType* ConstraintType; // 0x10
		::System::Int32 HPRate; // 0x14

		::System::Boolean Equals(::MX::Logic::Data::HPRateConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::HPRateConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATECONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATECONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATECONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::HPRateConstraint* arg, ::MX::Logic::Data::HPRateConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::HPRateConstraint*, ::MX::Logic::Data::HPRateConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATECONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::HPRateConstraint* arg, ::MX::Logic::Data::HPRateConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::HPRateConstraint*, ::MX::Logic::Data::HPRateConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATECONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATECONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATECONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::HPRateConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::HPRateConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATECONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::HPRateConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::HPRateConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATECONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

