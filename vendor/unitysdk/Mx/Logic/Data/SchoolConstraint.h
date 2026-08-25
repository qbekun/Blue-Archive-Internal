#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SchoolConstraint; }
namespace FlatData { class School; }
namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_SCHOOLCONSTRAINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11EE800)
#define MX_LOGIC_DATA_SCHOOLCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EE820)
#define MX_LOGIC_DATA_SCHOOLCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EE840)
#define MX_LOGIC_DATA_SCHOOLCONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11EBA70)
#define MX_LOGIC_DATA_SCHOOLCONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11EB800)
#define MX_LOGIC_DATA_SCHOOLCONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11EE8D0)
#define MX_LOGIC_DATA_SCHOOLCONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11EE990)
#define MX_LOGIC_DATA_SCHOOLCONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11EE9D0)
#define MX_LOGIC_DATA_SCHOOLCONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EED40)
#define MX_LOGIC_DATA_SCHOOLCONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EED90)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SchoolConstraint_TypeDefinitionIndex = 13485;

	class SchoolConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::SchoolConstraint* Empty; // 0x0
		::FlatData::School* School; // 0x10
		::MX::Logic::Data::IncludeType* IncludeType; // 0x14

		::System::Boolean IsMatch(::FlatData::School* arg)
		{
			return ((::System::Boolean(*)(::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONSTRAINT_ISMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::SchoolConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SchoolConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::SchoolConstraint* arg, ::MX::Logic::Data::SchoolConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SchoolConstraint*, ::MX::Logic::Data::SchoolConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::SchoolConstraint* arg, ::MX::Logic::Data::SchoolConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SchoolConstraint*, ::MX::Logic::Data::SchoolConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::SchoolConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::SchoolConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::SchoolConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::SchoolConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SCHOOLCONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

