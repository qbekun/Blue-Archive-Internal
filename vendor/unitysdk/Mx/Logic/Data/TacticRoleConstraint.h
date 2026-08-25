#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class TacticRoleConstraint; }
namespace MX::Logic::Data { class IncludeType; }
namespace FlatData { class TacticRole; }

#define MX_LOGIC_DATA_TACTICROLECONSTRAINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11F18B0)
#define MX_LOGIC_DATA_TACTICROLECONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11F1930)
#define MX_LOGIC_DATA_TACTICROLECONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11F19C0)
#define MX_LOGIC_DATA_TACTICROLECONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11F1AC0)
#define MX_LOGIC_DATA_TACTICROLECONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11F1B70)
#define MX_LOGIC_DATA_TACTICROLECONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11F1C40)
#define MX_LOGIC_DATA_TACTICROLECONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11F1CB0)
#define MX_LOGIC_DATA_TACTICROLECONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11F1D30)
#define MX_LOGIC_DATA_TACTICROLECONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F2160)
#define MX_LOGIC_DATA_TACTICROLECONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F22C0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TacticRoleConstraint_TypeDefinitionIndex = 13496;

	class TacticRoleConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::TacticRoleConstraint* Empty; // 0x0
		::Il2CppArray<::System::Object*>* TacticRole; // 0x10
		::MX::Logic::Data::IncludeType* IncludeType; // 0x18

		::System::Boolean IsMatch(::FlatData::TacticRole* arg)
		{
			return ((::System::Boolean(*)(::FlatData::TacticRole*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONSTRAINT_ISMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::TacticRoleConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::TacticRoleConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::TacticRoleConstraint* arg, ::MX::Logic::Data::TacticRoleConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::TacticRoleConstraint*, ::MX::Logic::Data::TacticRoleConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::TacticRoleConstraint* arg, ::MX::Logic::Data::TacticRoleConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::TacticRoleConstraint*, ::MX::Logic::Data::TacticRoleConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::TacticRoleConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::TacticRoleConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::TacticRoleConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::TacticRoleConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

