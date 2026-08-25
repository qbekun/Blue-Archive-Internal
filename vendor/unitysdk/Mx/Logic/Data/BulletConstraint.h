#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BulletConstraint; }
namespace FlatData { class BulletType; }
namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_BULLETCONSTRAINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11EA370)
#define MX_LOGIC_DATA_BULLETCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EA390)
#define MX_LOGIC_DATA_BULLETCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EA3B0)
#define MX_LOGIC_DATA_BULLETCONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11EA440)
#define MX_LOGIC_DATA_BULLETCONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11EA470)
#define MX_LOGIC_DATA_BULLETCONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11EA4D0)
#define MX_LOGIC_DATA_BULLETCONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11EA590)
#define MX_LOGIC_DATA_BULLETCONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11EA5D0)
#define MX_LOGIC_DATA_BULLETCONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EA940)
#define MX_LOGIC_DATA_BULLETCONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EA990)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BulletConstraint_TypeDefinitionIndex = 13465;

	class BulletConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BulletConstraint* Empty; // 0x0
		::FlatData::BulletType* BulletType; // 0x10
		::MX::Logic::Data::IncludeType* IncludeType; // 0x14

		::System::Boolean IsMatch(::FlatData::BulletType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETCONSTRAINT_ISMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::BulletConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::BulletConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETCONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::BulletConstraint* arg, ::MX::Logic::Data::BulletConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::BulletConstraint*, ::MX::Logic::Data::BulletConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETCONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::BulletConstraint* arg, ::MX::Logic::Data::BulletConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::BulletConstraint*, ::MX::Logic::Data::BulletConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETCONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETCONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETCONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::BulletConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::BulletConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETCONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::BulletConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::BulletConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETCONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

