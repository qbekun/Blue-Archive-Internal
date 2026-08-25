#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ArmorTypeConstraint; }
namespace MX::Logic::Data { class IncludeType; }
namespace FlatData { class ArmorType; }

#define MX_LOGIC_DATA_ARMORTYPECONSTRAINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11E8B10)
#define MX_LOGIC_DATA_ARMORTYPECONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E8B80)
#define MX_LOGIC_DATA_ARMORTYPECONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E8BE0)
#define MX_LOGIC_DATA_ARMORTYPECONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11E8CC0)
#define MX_LOGIC_DATA_ARMORTYPECONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11E8D20)
#define MX_LOGIC_DATA_ARMORTYPECONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11E8DD0)
#define MX_LOGIC_DATA_ARMORTYPECONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11E8F10)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ArmorTypeConstraint_TypeDefinitionIndex = 13461;

	class ArmorTypeConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::ArmorTypeConstraint* Empty; // 0x0
		Il2CppObject* ArmorType; // 0x10
		::MX::Logic::Data::IncludeType* IncludeType; // 0x18

		::System::Boolean IsMatch(::FlatData::ArmorType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORTYPECONSTRAINT_ISMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::ArmorTypeConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::ArmorTypeConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORTYPECONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORTYPECONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORTYPECONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::ArmorTypeConstraint* arg, ::MX::Logic::Data::ArmorTypeConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::ArmorTypeConstraint*, ::MX::Logic::Data::ArmorTypeConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORTYPECONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::ArmorTypeConstraint* arg, ::MX::Logic::Data::ArmorTypeConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::ArmorTypeConstraint*, ::MX::Logic::Data::ArmorTypeConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORTYPECONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ARMORTYPECONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

