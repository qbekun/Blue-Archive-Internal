#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class TacticEntityConstraint; }
namespace FlatData { class TacticEntityType; }
namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11F03D0)
#define MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11F0400)
#define MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11F0420)
#define MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11F04B0)
#define MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11F04E0)
#define MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11F0540)
#define MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11F0600)
#define MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11F0640)
#define MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F09B0)
#define MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F0A00)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TacticEntityConstraint_TypeDefinitionIndex = 13492;

	class TacticEntityConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::TacticEntityConstraint* Empty; // 0x0
		::FlatData::TacticEntityType* TacticEntity; // 0x10
		::MX::Logic::Data::IncludeType* IncludeType; // 0x14

		::System::Boolean IsMatch(::FlatData::TacticEntityType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_ISMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::TacticEntityConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::TacticEntityConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::TacticEntityConstraint* arg, ::MX::Logic::Data::TacticEntityConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::TacticEntityConstraint*, ::MX::Logic::Data::TacticEntityConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::TacticEntityConstraint* arg, ::MX::Logic::Data::TacticEntityConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::TacticEntityConstraint*, ::MX::Logic::Data::TacticEntityConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::TacticEntityConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::TacticEntityConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::TacticEntityConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::TacticEntityConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICENTITYCONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

