#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class CharacterConstraint; }
namespace FlatData { class School; }
namespace FlatData { class WeaponType; }
namespace FlatData { class ObstacleCoverType; }

#define MX_LOGIC_DATA_CHARACTERCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EAB00)
#define MX_LOGIC_DATA_CHARACTERCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EAB20)
#define MX_LOGIC_DATA_CHARACTERCONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11EABC0)
#define MX_LOGIC_DATA_CHARACTERCONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11EAC10)
#define MX_LOGIC_DATA_CHARACTERCONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11EAC80)
#define MX_LOGIC_DATA_CHARACTERCONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11EAD50)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CharacterConstraint_TypeDefinitionIndex = 13466;

	class CharacterConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::CharacterConstraint* Empty; // 0x0
		::FlatData::School* School; // 0x10
		::FlatData::WeaponType* WeaponType; // 0x14
		::FlatData::ObstacleCoverType* CoverType; // 0x18

		::System::Boolean Equals(::MX::Logic::Data::CharacterConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::CharacterConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERCONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::CharacterConstraint* arg, ::MX::Logic::Data::CharacterConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::CharacterConstraint*, ::MX::Logic::Data::CharacterConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERCONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::CharacterConstraint* arg, ::MX::Logic::Data::CharacterConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::CharacterConstraint*, ::MX::Logic::Data::CharacterConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERCONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERCONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

