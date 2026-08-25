#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class CountConstraint; }
namespace MX::Core::Math { class DiffOperatorType; }

#define MX_LOGIC_DATA_COUNTCONSTRAINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11EADA0)
#define MX_LOGIC_DATA_COUNTCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EADE0)
#define MX_LOGIC_DATA_COUNTCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EAE00)
#define MX_LOGIC_DATA_COUNTCONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11EAE90)
#define MX_LOGIC_DATA_COUNTCONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11EAEC0)
#define MX_LOGIC_DATA_COUNTCONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11EAF20)
#define MX_LOGIC_DATA_COUNTCONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11EAFE0)
#define MX_LOGIC_DATA_COUNTCONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11EB020)
#define MX_LOGIC_DATA_COUNTCONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EB2E0)
#define MX_LOGIC_DATA_COUNTCONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EB330)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountConstraint_TypeDefinitionIndex = 13468;

	class CountConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::CountConstraint* Empty; // 0x0
		::System::Int32 Count; // 0x10
		::MX::Core::Math::DiffOperatorType* DiffOperator; // 0x14

		::System::Boolean IsMatch(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTCONSTRAINT_ISMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::CountConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::CountConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTCONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::CountConstraint* arg, ::MX::Logic::Data::CountConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::CountConstraint*, ::MX::Logic::Data::CountConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTCONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::CountConstraint* arg, ::MX::Logic::Data::CountConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::CountConstraint*, ::MX::Logic::Data::CountConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTCONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTCONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTCONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::CountConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::CountConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTCONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::CountConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::CountConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTCONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

