#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FontType; }
namespace MX::Logic::Battles { class DamageResult; }

#define MX_LOGIC_BATTLES_DAMAGERESULT_GET_ATTACKPOWER_OFFSET UNITYSDK_OFFSET(0x127EB60)
#define MX_LOGIC_BATTLES_DAMAGERESULT_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x127EB70)
#define MX_LOGIC_BATTLES_DAMAGERESULT_GET_STABILITY_OFFSET UNITYSDK_OFFSET(0x127EB80)
#define MX_LOGIC_BATTLES_DAMAGERESULT_GET_CRITICALMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x127EB90)
#define MX_LOGIC_BATTLES_DAMAGERESULT_GET_HITRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x127EBA0)
#define MX_LOGIC_BATTLES_DAMAGERESULT_GET_IGNORESHIELD_OFFSET UNITYSDK_OFFSET(0x127EBB0)
#define MX_LOGIC_BATTLES_DAMAGERESULT_GET_DONOTKILLTARGET_OFFSET UNITYSDK_OFFSET(0x127EBC0)
#define MX_LOGIC_BATTLES_DAMAGERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1273C70)
#define MX_LOGIC_BATTLES_DAMAGERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x127E7F0)
#define MX_LOGIC_BATTLES_DAMAGERESULT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x127EBD0)
#define MX_LOGIC_BATTLES_DAMAGERESULT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x127EC60)
#define MX_LOGIC_BATTLES_DAMAGERESULT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x127ECC0)
#define MX_LOGIC_BATTLES_DAMAGERESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0x127ECF0)
#define MX_LOGIC_BATTLES_DAMAGERESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0x127EC90)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int DamageResult_TypeDefinitionIndex = 14075;

	class DamageResult : public Il2CppObject
	{
	public:
		::System::Int64 _AttackPower_k__BackingField; // 0x10
		::System::Int64 _Damage_k__BackingField; // 0x18
		::System::Int32 _Stability_k__BackingField; // 0x20
		::System::Int64 _CriticalMultiplier_k__BackingField; // 0x28
		::FlatData::FontType* _HitResultType_k__BackingField; // 0x30
		::System::Boolean _IgnoreShield_k__BackingField; // 0x34
		::System::Boolean _DoNotKillTarget_k__BackingField; // 0x35

		::System::Int64 get_AttackPower()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULT_GET_ATTACKPOWER_OFFSET))(nullptr);
		}

		::System::Int64 get_Damage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULT_GET_DAMAGE_OFFSET))(nullptr);
		}

		::System::Int32 get_Stability()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULT_GET_STABILITY_OFFSET))(nullptr);
		}

		::System::Int64 get_CriticalMultiplier()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULT_GET_CRITICALMULTIPLIER_OFFSET))(nullptr);
		}

		::FlatData::FontType* get_HitResultType()
		{
			return ((::FlatData::FontType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULT_GET_HITRESULTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULT_GET_IGNORESHIELD_OFFSET))(nullptr);
		}

		::System::Boolean get_DoNotKillTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULT_GET_DONOTKILLTARGET_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::FlatData::FontType* arg2)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::FontType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int64 arg4, ::FlatData::FontType* arg5, ::System::Boolean arg6, ::System::Boolean arg7)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int32, ::System::Int64, ::FlatData::FontType*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Battles::DamageResult* arg, ::MX::Logic::Battles::DamageResult* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::DamageResult*, ::MX::Logic::Battles::DamageResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Battles::DamageResult* arg, ::MX::Logic::Battles::DamageResult* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::DamageResult*, ::MX::Logic::Battles::DamageResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Battles::DamageResult* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::DamageResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULT_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

