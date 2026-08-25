#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SquadTypeConstraint; }
namespace FlatData { class SquadType; }
namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_SQUADTYPECONSTRAINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11EFC40)
#define MX_LOGIC_DATA_SQUADTYPECONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EFC60)
#define MX_LOGIC_DATA_SQUADTYPECONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EFC80)
#define MX_LOGIC_DATA_SQUADTYPECONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11EFD10)
#define MX_LOGIC_DATA_SQUADTYPECONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11EFD40)
#define MX_LOGIC_DATA_SQUADTYPECONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11EFDA0)
#define MX_LOGIC_DATA_SQUADTYPECONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11EFE60)
#define MX_LOGIC_DATA_SQUADTYPECONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11EFEA0)
#define MX_LOGIC_DATA_SQUADTYPECONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F0210)
#define MX_LOGIC_DATA_SQUADTYPECONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F0260)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SquadTypeConstraint_TypeDefinitionIndex = 13490;

	class SquadTypeConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::SquadTypeConstraint* Empty; // 0x0
		::FlatData::SquadType* SquadType; // 0x10
		::MX::Logic::Data::IncludeType* IncludeType; // 0x14

		::System::Boolean IsMatch(::FlatData::SquadType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONSTRAINT_ISMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::SquadTypeConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SquadTypeConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::SquadTypeConstraint* arg, ::MX::Logic::Data::SquadTypeConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SquadTypeConstraint*, ::MX::Logic::Data::SquadTypeConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::SquadTypeConstraint* arg, ::MX::Logic::Data::SquadTypeConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::SquadTypeConstraint*, ::MX::Logic::Data::SquadTypeConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::SquadTypeConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::SquadTypeConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::SquadTypeConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::SquadTypeConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SQUADTYPECONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

