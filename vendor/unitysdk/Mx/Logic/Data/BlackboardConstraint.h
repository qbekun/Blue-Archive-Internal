#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BlackboardConstraint; }
namespace MX::Logic::Data { class BlackboardKeyType; }

#define MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E8F60)
#define MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E8F80)
#define MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11E9020)
#define MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11E9060)
#define MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11E90D0)
#define MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11E9190)
#define MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11E9220)
#define MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11E94E0)
#define MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11E9C00)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BlackboardConstraint_TypeDefinitionIndex = 13463;

	class BlackboardConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BlackboardConstraint* Empty; // 0x0
		::MX::Logic::Data::BlackboardKeyType* KeyType; // 0x10
		::System::String* KeyString; // 0x18

		::System::Boolean Equals(::MX::Logic::Data::BlackboardConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::BlackboardConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::BlackboardConstraint* arg, ::MX::Logic::Data::BlackboardConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::BlackboardConstraint*, ::MX::Logic::Data::BlackboardConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::BlackboardConstraint* arg, ::MX::Logic::Data::BlackboardConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::BlackboardConstraint*, ::MX::Logic::Data::BlackboardConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::BlackboardConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::BlackboardConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::BlackboardConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::BlackboardConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDCONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

