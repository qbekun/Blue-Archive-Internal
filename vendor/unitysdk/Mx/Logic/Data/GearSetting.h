#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class GearSetting; }

#define MX_LOGIC_DATA_GEARSETTING_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x11DBAB0)
#define MX_LOGIC_DATA_GEARSETTING_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x11DBAC0)
#define MX_LOGIC_DATA_GEARSETTING_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x11DBAD0)
#define MX_LOGIC_DATA_GEARSETTING_GET_TIER_OFFSET UNITYSDK_OFFSET(0x11DBAE0)
#define MX_LOGIC_DATA_GEARSETTING_SET_TIER_OFFSET UNITYSDK_OFFSET(0x11DBAF0)
#define MX_LOGIC_DATA_GEARSETTING_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x11DBB00)
#define MX_LOGIC_DATA_GEARSETTING_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x11DBB10)
#define MX_LOGIC_DATA_GEARSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DBB20)
#define MX_LOGIC_DATA_GEARSETTING_GETGEAROPTIONS_OFFSET UNITYSDK_OFFSET(0x11DBB30)
#define MX_LOGIC_DATA_GEARSETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DC020)
#define MX_LOGIC_DATA_GEARSETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DC040)
#define MX_LOGIC_DATA_GEARSETTING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11DC0C0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int GearSetting_TypeDefinitionIndex = 13431;

	class GearSetting : public Il2CppObject
	{
	public:
		::System::Int32 InvalidId; // 0x0
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::Int32 _Tier_k__BackingField; // 0x18
		::System::Int32 _Level_k__BackingField; // 0x1C

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GEARSETTING_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GEARSETTING_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GEARSETTING_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Tier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GEARSETTING_GET_TIER_OFFSET))(nullptr);
		}

		::System::Void set_Tier(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GEARSETTING_SET_TIER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GEARSETTING_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GEARSETTING_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GEARSETTING_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetGearOptions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GEARSETTING_GETGEAROPTIONS_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::GearSetting* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::GearSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GEARSETTING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GEARSETTING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GEARSETTING_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

