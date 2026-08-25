#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class EchelonConstraint; }
namespace MX::Logic::Data { class CountConstraint; }
namespace MX::Logic::Data { class SchoolConstraint; }
namespace MX::Logic::Data { class WeaponConstraint; }

#define MX_LOGIC_DATA_ECHELONCONSTRAINT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x11EB4A0)
#define MX_LOGIC_DATA_ECHELONCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EB5C0)
#define MX_LOGIC_DATA_ECHELONCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11EB8C0)
#define MX_LOGIC_DATA_ECHELONCONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11EB960)
#define MX_LOGIC_DATA_ECHELONCONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11EB550)
#define MX_LOGIC_DATA_ECHELONCONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11EBAD0)
#define MX_LOGIC_DATA_ECHELONCONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11EBBA0)
#define MX_LOGIC_DATA_ECHELONCONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11EBCA0)
#define MX_LOGIC_DATA_ECHELONCONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EBEA0)
#define MX_LOGIC_DATA_ECHELONCONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11EBEF0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int EchelonConstraint_TypeDefinitionIndex = 13470;

	class EchelonConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::EchelonConstraint* Empty; // 0x0
		::MX::Logic::Data::CountConstraint* CountConstraint; // 0x10
		::MX::Logic::Data::SchoolConstraint* SchoolConstraint; // 0x18
		::MX::Logic::Data::WeaponConstraint* WeaponConstraint; // 0x20

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONCONSTRAINT_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::EchelonConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::EchelonConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONCONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::EchelonConstraint* arg, ::MX::Logic::Data::EchelonConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::EchelonConstraint*, ::MX::Logic::Data::EchelonConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONCONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::EchelonConstraint* arg, ::MX::Logic::Data::EchelonConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::EchelonConstraint*, ::MX::Logic::Data::EchelonConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONCONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONCONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONCONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::EchelonConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::EchelonConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONCONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::EchelonConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::EchelonConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONCONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

