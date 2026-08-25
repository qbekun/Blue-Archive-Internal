#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class WeaponSetting; }
namespace FlatData { class EquipmentOptionType; }

#define MX_LOGIC_DATA_WEAPONSETTING_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x11DC7F0)
#define MX_LOGIC_DATA_WEAPONSETTING_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x11E72F0)
#define MX_LOGIC_DATA_WEAPONSETTING_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x11E7300)
#define MX_LOGIC_DATA_WEAPONSETTING_GET_STARGRADE_OFFSET UNITYSDK_OFFSET(0x11E7310)
#define MX_LOGIC_DATA_WEAPONSETTING_SET_STARGRADE_OFFSET UNITYSDK_OFFSET(0x11E7320)
#define MX_LOGIC_DATA_WEAPONSETTING_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x11E7330)
#define MX_LOGIC_DATA_WEAPONSETTING_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x11E7340)
#define MX_LOGIC_DATA_WEAPONSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E7350)
#define MX_LOGIC_DATA_WEAPONSETTING_GETEQUIPMENTOPTIONS_OFFSET UNITYSDK_OFFSET(0x11E7360)
#define MX_LOGIC_DATA_WEAPONSETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E7840)
#define MX_LOGIC_DATA_WEAPONSETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E7860)
#define MX_LOGIC_DATA_WEAPONSETTING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11E78E0)
#define MX_LOGIC_DATA_WEAPONSETTING_GETVALUE_OFFSET UNITYSDK_OFFSET(0x11E7950)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int WeaponSetting_TypeDefinitionIndex = 13458;

	class WeaponSetting : public Il2CppObject
	{
	public:
		::System::Int32 InvalidId; // 0x0
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::Int32 _StarGrade_k__BackingField; // 0x18
		::System::Int32 _Level_k__BackingField; // 0x1C

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONSETTING_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONSETTING_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONSETTING_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONSETTING_GET_STARGRADE_OFFSET))(nullptr);
		}

		::System::Void set_StarGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONSETTING_SET_STARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONSETTING_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONSETTING_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONSETTING_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetEquipmentOptions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONSETTING_GETEQUIPMENTOPTIONS_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::WeaponSetting* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::WeaponSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONSETTING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONSETTING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONSETTING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int64 GetValue(::FlatData::EquipmentOptionType* arg)
		{
			return ((::System::Int64(*)(::FlatData::EquipmentOptionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_WEAPONSETTING_GETVALUE_OFFSET))(arg, nullptr);
		}

	};
}

