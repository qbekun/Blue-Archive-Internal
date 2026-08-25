#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class DamageAppliedResult; }

#define MX_LOGIC_BATTLES_DAMAGEAPPLIEDRESULT_GET_ABSORBEDDAMAGE_OFFSET UNITYSDK_OFFSET(0x12758F0)
#define MX_LOGIC_BATTLES_DAMAGEAPPLIEDRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1275900)
#define MX_LOGIC_BATTLES_DAMAGEAPPLIEDRESULT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1275910)
#define MX_LOGIC_BATTLES_DAMAGEAPPLIEDRESULT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1275960)
#define MX_LOGIC_BATTLES_DAMAGEAPPLIEDRESULT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x12759C0)
#define MX_LOGIC_BATTLES_DAMAGEAPPLIEDRESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0x12759F0)
#define MX_LOGIC_BATTLES_DAMAGEAPPLIEDRESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1275990)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int DamageAppliedResult_TypeDefinitionIndex = 14073;

	class DamageAppliedResult : public Il2CppObject
	{
	public:
		::System::Int64 ActualDamageTaken; // 0x10
		::System::Int64 ShieldHPAbsorbed; // 0x18
		::System::Int64 TemporaryHpAbsorbed; // 0x20

		::System::Int64 get_AbsorbedDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGEAPPLIEDRESULT_GET_ABSORBEDDAMAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGEAPPLIEDRESULT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGEAPPLIEDRESULT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Battles::DamageAppliedResult* arg, ::MX::Logic::Battles::DamageAppliedResult* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::DamageAppliedResult*, ::MX::Logic::Battles::DamageAppliedResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGEAPPLIEDRESULT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Battles::DamageAppliedResult* arg, ::MX::Logic::Battles::DamageAppliedResult* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::DamageAppliedResult*, ::MX::Logic::Battles::DamageAppliedResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGEAPPLIEDRESULT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGEAPPLIEDRESULT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Battles::DamageAppliedResult* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::DamageAppliedResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGEAPPLIEDRESULT_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

