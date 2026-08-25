#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class WeaponConstraint; }
namespace FlatData { class WeaponType; }
namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_WEAPONCONSTRAINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11F3600)
#define MX_LOGIC_DATA_WEAPONCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11F3620)
#define MX_LOGIC_DATA_WEAPONCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11F3640)
#define MX_LOGIC_DATA_WEAPONCONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11EBAA0)
#define MX_LOGIC_DATA_WEAPONCONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11EB860)
#define MX_LOGIC_DATA_WEAPONCONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11F36D0)
#define MX_LOGIC_DATA_WEAPONCONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11F3790)
#define MX_LOGIC_DATA_WEAPONCONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11F37D0)
#define MX_LOGIC_DATA_WEAPONCONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F3B40)
#define MX_LOGIC_DATA_WEAPONCONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F3B90)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int WeaponConstraint_TypeDefinitionIndex = 13503;

	class WeaponConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::WeaponConstraint* Empty; // 0x0
		::FlatData::WeaponType* Weapon; // 0x10
		::MX::Logic::Data::IncludeType* IncludeType; // 0x14

		::System::Boolean IsMatch(::FlatData::WeaponType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::WeaponType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONSTRAINT_ISMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::WeaponConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::WeaponConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::WeaponConstraint* arg, ::MX::Logic::Data::WeaponConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::WeaponConstraint*, ::MX::Logic::Data::WeaponConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::WeaponConstraint* arg, ::MX::Logic::Data::WeaponConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::WeaponConstraint*, ::MX::Logic::Data::WeaponConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::WeaponConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::WeaponConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::WeaponConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::WeaponConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONCONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

