#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EquipmentOptionType; }
namespace MX::Logic::Equipments { class EquipmentOption; }

#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_GET_OPTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1088D00)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_SET_OPTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1088D10)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1088D20)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1088D30)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1088D40)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1088770)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1088D60)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1088F00)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1088F50)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1089020)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1089120)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x10891C0)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1089260)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1088E60)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1089300)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x10893A0)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1089440)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x10894E0)

namespace MX::Logic::Equipments
{
	inline static constexpr unsigned int EquipmentOption_TypeDefinitionIndex = 12919;

	class EquipmentOption : public Il2CppObject
	{
	public:
		::FlatData::EquipmentOptionType* _OptionType_k__BackingField; // 0x10
		::System::Int64 _Value_k__BackingField; // 0x18

		::FlatData::EquipmentOptionType* get_OptionType()
		{
			return ((::FlatData::EquipmentOptionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_GET_OPTIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_OptionType(::FlatData::EquipmentOptionType* arg)
		{
			((::System::Void(*)(::FlatData::EquipmentOptionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_SET_OPTIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Value()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::EquipmentOptionType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::EquipmentOptionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return ((::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::MX::Logic::Equipments::EquipmentOption* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::Equipments::EquipmentOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Equipments::EquipmentOption* arg, ::MX::Logic::Equipments::EquipmentOption* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Equipments::EquipmentOption*, ::MX::Logic::Equipments::EquipmentOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Equipments::EquipmentOption* arg, ::MX::Logic::Equipments::EquipmentOption* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Equipments::EquipmentOption*, ::MX::Logic::Equipments::EquipmentOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Equipments::EquipmentOption* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Equipments::EquipmentOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_LessThan(::MX::Logic::Equipments::EquipmentOption* arg, ::MX::Logic::Equipments::EquipmentOption* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Equipments::EquipmentOption*, ::MX::Logic::Equipments::EquipmentOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_OP_LESSTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_LessThanOrEqual(::MX::Logic::Equipments::EquipmentOption* arg, ::MX::Logic::Equipments::EquipmentOption* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Equipments::EquipmentOption*, ::MX::Logic::Equipments::EquipmentOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_OP_LESSTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThan(::MX::Logic::Equipments::EquipmentOption* arg, ::MX::Logic::Equipments::EquipmentOption* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Equipments::EquipmentOption*, ::MX::Logic::Equipments::EquipmentOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_OP_GREATERTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThanOrEqual(::MX::Logic::Equipments::EquipmentOption* arg, ::MX::Logic::Equipments::EquipmentOption* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Equipments::EquipmentOption*, ::MX::Logic::Equipments::EquipmentOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTION_OP_GREATERTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

	};
}

