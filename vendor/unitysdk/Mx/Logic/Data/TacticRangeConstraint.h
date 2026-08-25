#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class TacticRangeConstraint; }
namespace MX::Logic::Data { class IncludeType; }
namespace FlatData { class TacticRange; }

#define MX_LOGIC_DATA_TACTICRANGECONSTRAINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11F0B70)
#define MX_LOGIC_DATA_TACTICRANGECONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11F0BF0)
#define MX_LOGIC_DATA_TACTICRANGECONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11F0C80)
#define MX_LOGIC_DATA_TACTICRANGECONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11F0D80)
#define MX_LOGIC_DATA_TACTICRANGECONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11F0E30)
#define MX_LOGIC_DATA_TACTICRANGECONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11F0F00)
#define MX_LOGIC_DATA_TACTICRANGECONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11F0F70)
#define MX_LOGIC_DATA_TACTICRANGECONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11F0FF0)
#define MX_LOGIC_DATA_TACTICRANGECONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F1420)
#define MX_LOGIC_DATA_TACTICRANGECONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F1580)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TacticRangeConstraint_TypeDefinitionIndex = 13494;

	class TacticRangeConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::TacticRangeConstraint* Empty; // 0x0
		::Il2CppArray<::System::Object*>* TacticRanges; // 0x10
		::MX::Logic::Data::IncludeType* IncludeType; // 0x18

		::System::Boolean IsMatch(::FlatData::TacticRange* arg)
		{
			return ((::System::Boolean(*)(::FlatData::TacticRange*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICRANGECONSTRAINT_ISMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::TacticRangeConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::TacticRangeConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICRANGECONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICRANGECONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICRANGECONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::TacticRangeConstraint* arg, ::MX::Logic::Data::TacticRangeConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::TacticRangeConstraint*, ::MX::Logic::Data::TacticRangeConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICRANGECONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::TacticRangeConstraint* arg, ::MX::Logic::Data::TacticRangeConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::TacticRangeConstraint*, ::MX::Logic::Data::TacticRangeConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICRANGECONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICRANGECONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICRANGECONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::TacticRangeConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::TacticRangeConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICRANGECONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::TacticRangeConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::TacticRangeConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICRANGECONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

