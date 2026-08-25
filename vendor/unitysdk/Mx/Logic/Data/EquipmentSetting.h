#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class EquipmentSetting; }

#define MX_LOGIC_DATA_EQUIPMENTSETTING_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x11DD7A0)
#define MX_LOGIC_DATA_EQUIPMENTSETTING_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x11DD7B0)
#define MX_LOGIC_DATA_EQUIPMENTSETTING_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x11DD7C0)
#define MX_LOGIC_DATA_EQUIPMENTSETTING_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x11DD7D0)
#define MX_LOGIC_DATA_EQUIPMENTSETTING_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x11DD7E0)
#define MX_LOGIC_DATA_EQUIPMENTSETTING_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x11DD7F0)
#define MX_LOGIC_DATA_EQUIPMENTSETTING_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x11DD800)
#define MX_LOGIC_DATA_EQUIPMENTSETTING_GET_TIER_OFFSET UNITYSDK_OFFSET(0x11DD810)
#define MX_LOGIC_DATA_EQUIPMENTSETTING_SET_TIER_OFFSET UNITYSDK_OFFSET(0x11DD820)
#define MX_LOGIC_DATA_EQUIPMENTSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DD830)
#define MX_LOGIC_DATA_EQUIPMENTSETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DD850)
#define MX_LOGIC_DATA_EQUIPMENTSETTING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11DD8F0)
#define MX_LOGIC_DATA_EQUIPMENTSETTING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11DD960)
#define MX_LOGIC_DATA_EQUIPMENTSETTING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11DDA20)
#define MX_LOGIC_DATA_EQUIPMENTSETTING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11DDA40)
#define MX_LOGIC_DATA_EQUIPMENTSETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DD8D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int EquipmentSetting_TypeDefinitionIndex = 13434;

	class EquipmentSetting : public Il2CppObject
	{
	public:
		::System::Int32 InvalidId; // 0x0
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Int32 _Level_k__BackingField; // 0x20
		::System::Int32 _Tier_k__BackingField; // 0x24

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Tier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_GET_TIER_OFFSET))(nullptr);
		}

		::System::Void set_Tier(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_SET_TIER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::EquipmentSetting* arg, ::MX::Logic::Data::EquipmentSetting* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::EquipmentSetting*, ::MX::Logic::Data::EquipmentSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::EquipmentSetting* arg, ::MX::Logic::Data::EquipmentSetting* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::EquipmentSetting*, ::MX::Logic::Data::EquipmentSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::EquipmentSetting* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::EquipmentSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EQUIPMENTSETTING_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

