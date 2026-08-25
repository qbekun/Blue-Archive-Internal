#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class RaidBossResult; }
namespace MX::Logic::Data { class RaidDamage; }

#define MX_LOGIC_DATA_RAIDBOSSRESULT_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x11DDF20)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_GET_GIVENDAMAGE_OFFSET UNITYSDK_OFFSET(0x11DDFB0)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_GET_GIVENGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x11DE040)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_GET_RAIDDAMAGE_OFFSET UNITYSDK_OFFSET(0x11DE0D0)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_SET_RAIDDAMAGE_OFFSET UNITYSDK_OFFSET(0x11DE0F0)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_GET_ENDHPRATERAWVALUE_OFFSET UNITYSDK_OFFSET(0x11DE100)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_SET_ENDHPRATERAWVALUE_OFFSET UNITYSDK_OFFSET(0x11DE110)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_GET_GROGGYRATERAWVALUE_OFFSET UNITYSDK_OFFSET(0x11DE120)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_SET_GROGGYRATERAWVALUE_OFFSET UNITYSDK_OFFSET(0x11DE130)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_GET_GROGGYCOUNT_OFFSET UNITYSDK_OFFSET(0x11DE140)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_SET_GROGGYCOUNT_OFFSET UNITYSDK_OFFSET(0x11DE150)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_GET_SUBPARTSHPS_OFFSET UNITYSDK_OFFSET(0x11DE160)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_SET_SUBPARTSHPS_OFFSET UNITYSDK_OFFSET(0x11DE170)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_GET_AIPHASE_OFFSET UNITYSDK_OFFSET(0x11DE180)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_SET_AIPHASE_OFFSET UNITYSDK_OFFSET(0x11DE190)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DE1A0)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DE2B0)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DE360)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11DE470)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11DE550)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11DE5D0)
#define MX_LOGIC_DATA_RAIDBOSSRESULT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11DE6D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RaidBossResult_TypeDefinitionIndex = 13436;

	class RaidBossResult : public Il2CppObject
	{
	public:
		::MX::Logic::Data::RaidBossResult* Invalid; // 0x0
		::MX::Logic::Data::RaidDamage* _RaidDamage_k__BackingField; // 0x10
		::System::Int64 _EndHpRateRawValue_k__BackingField; // 0x28
		::System::Int64 _GroggyRateRawValue_k__BackingField; // 0x30
		::System::Int32 _GroggyCount_k__BackingField; // 0x38
		Il2CppObject* _SubPartsHPs_k__BackingField; // 0x40
		::System::Int64 _AIPhase_k__BackingField; // 0x48

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_GivenDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_GET_GIVENDAMAGE_OFFSET))(nullptr);
		}

		::System::Int64 get_GivenGroggyPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_GET_GIVENGROGGYPOINT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::RaidDamage* get_RaidDamage()
		{
			return ((::MX::Logic::Data::RaidDamage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_GET_RAIDDAMAGE_OFFSET))(nullptr);
		}

		::System::Void set_RaidDamage(::MX::Logic::Data::RaidDamage* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::RaidDamage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_SET_RAIDDAMAGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EndHpRateRawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_GET_ENDHPRATERAWVALUE_OFFSET))(nullptr);
		}

		::System::Void set_EndHpRateRawValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_SET_ENDHPRATERAWVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroggyRateRawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_GET_GROGGYRATERAWVALUE_OFFSET))(nullptr);
		}

		::System::Void set_GroggyRateRawValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_SET_GROGGYRATERAWVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_GroggyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_GET_GROGGYCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_GroggyCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_SET_GROGGYCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SubPartsHPs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_GET_SUBPARTSHPS_OFFSET))(nullptr);
		}

		::System::Void set_SubPartsHPs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_SET_SUBPARTSHPS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AIPhase()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_GET_AIPHASE_OFFSET))(nullptr);
		}

		::System::Void set_AIPhase(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_SET_AIPHASE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::RaidBossResult* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::RaidBossResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::RaidBossResult* arg, ::MX::Logic::Data::RaidBossResult* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::RaidBossResult*, ::MX::Logic::Data::RaidBossResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::RaidBossResult* arg, ::MX::Logic::Data::RaidBossResult* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::RaidBossResult*, ::MX::Logic::Data::RaidBossResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDBOSSRESULT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

