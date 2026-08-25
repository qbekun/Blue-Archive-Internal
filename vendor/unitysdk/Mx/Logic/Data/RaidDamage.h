#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class RaidDamage; }

#define MX_LOGIC_DATA_RAIDDAMAGE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x11DDA70)
#define MX_LOGIC_DATA_RAIDDAMAGE_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x11DDA80)
#define MX_LOGIC_DATA_RAIDDAMAGE_GET_GIVENDAMAGE_OFFSET UNITYSDK_OFFSET(0x11DDA90)
#define MX_LOGIC_DATA_RAIDDAMAGE_SET_GIVENDAMAGE_OFFSET UNITYSDK_OFFSET(0x11DDAA0)
#define MX_LOGIC_DATA_RAIDDAMAGE_GET_GIVENGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x11DDAB0)
#define MX_LOGIC_DATA_RAIDDAMAGE_SET_GIVENGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x11DDAC0)
#define MX_LOGIC_DATA_RAIDDAMAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DDAD0)
#define MX_LOGIC_DATA_RAIDDAMAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DDB30)
#define MX_LOGIC_DATA_RAIDDAMAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DDC60)
#define MX_LOGIC_DATA_RAIDDAMAGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11DDD10)
#define MX_LOGIC_DATA_RAIDDAMAGE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11DDD60)
#define MX_LOGIC_DATA_RAIDDAMAGE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11DDE50)
#define MX_LOGIC_DATA_RAIDDAMAGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11DDED0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RaidDamage_TypeDefinitionIndex = 13435;

	class RaidDamage : public Il2CppObject
	{
	public:
		::MX::Logic::Data::RaidDamage* Invalid; // 0x0
		::System::Int32 _Index_k__BackingField; // 0x10
		::System::Int64 _GivenDamage_k__BackingField; // 0x18
		::System::Int64 _GivenGroggyPoint_k__BackingField; // 0x20

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGE_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void set_Index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGE_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GivenDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGE_GET_GIVENDAMAGE_OFFSET))(nullptr);
		}

		::System::Void set_GivenDamage(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGE_SET_GIVENDAMAGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GivenGroggyPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGE_GET_GIVENGROGGYPOINT_OFFSET))(nullptr);
		}

		::System::Void set_GivenGroggyPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGE_SET_GIVENGROGGYPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::RaidDamage* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::RaidDamage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::RaidDamage* arg, ::MX::Logic::Data::RaidDamage* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::RaidDamage*, ::MX::Logic::Data::RaidDamage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::RaidDamage* arg, ::MX::Logic::Data::RaidDamage* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::RaidDamage*, ::MX::Logic::Data::RaidDamage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDDAMAGE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

