#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class PersonalityIdConstraint; }
namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11EDA90)
#define MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EDB70)
#define MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EDCF0)
#define MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11EDD80)
#define MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11EDE80)
#define MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11EDEE0)
#define MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11EDFA0)
#define MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11EE010)
#define MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EE380)
#define MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EE3F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int PersonalityIdConstraint_TypeDefinitionIndex = 13483;

	class PersonalityIdConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::PersonalityIdConstraint* Empty; // 0x0
		::MX::Logic::Data::IncludeType* IncludeType; // 0x10
		Il2CppObject* PersonalityIds; // 0x18

		::System::Boolean IsMatch(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_ISMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::PersonalityIdConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::PersonalityIdConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::PersonalityIdConstraint* arg, ::MX::Logic::Data::PersonalityIdConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::PersonalityIdConstraint*, ::MX::Logic::Data::PersonalityIdConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::PersonalityIdConstraint* arg, ::MX::Logic::Data::PersonalityIdConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::PersonalityIdConstraint*, ::MX::Logic::Data::PersonalityIdConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::PersonalityIdConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::PersonalityIdConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::PersonalityIdConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::PersonalityIdConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

