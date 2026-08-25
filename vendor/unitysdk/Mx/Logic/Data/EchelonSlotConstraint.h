#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class EchelonSlotConstraint; }
namespace MX::Logic::Data { class IncludeType; }
namespace FlatData { class EchelonSlot; }

#define MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11EC060)
#define MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EC220)
#define MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EC3A0)
#define MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11EC430)
#define MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11EC580)
#define MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11EC5E0)
#define MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11EC640)
#define MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11EC6B0)
#define MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11ECA20)
#define MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11ECA90)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int EchelonSlotConstraint_TypeDefinitionIndex = 13475;

	class EchelonSlotConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::EchelonSlotConstraint* Empty; // 0x0
		::MX::Logic::Data::IncludeType* IncludeType; // 0x10
		Il2CppObject* EchelonSlotInfos; // 0x18

		::System::Boolean IsMatch(::FlatData::EchelonSlot* arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::EchelonSlot*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_ISMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::EchelonSlotConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::EchelonSlotConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::EchelonSlotConstraint* arg, ::MX::Logic::Data::EchelonSlotConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::EchelonSlotConstraint*, ::MX::Logic::Data::EchelonSlotConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::EchelonSlotConstraint* arg, ::MX::Logic::Data::EchelonSlotConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::EchelonSlotConstraint*, ::MX::Logic::Data::EchelonSlotConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::EchelonSlotConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::EchelonSlotConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::EchelonSlotConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::EchelonSlotConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONSLOTCONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

