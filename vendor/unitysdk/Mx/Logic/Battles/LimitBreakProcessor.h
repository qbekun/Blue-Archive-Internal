#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class BlackboardKey; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommandSetLimitBreakGauge; }

#define MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_GETLIMITGAUGERATE_OFFSET UNITYSDK_OFFSET(0x1280830)
#define MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x12808E0)
#define MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_SET_KEYLIMITGAUGE_OFFSET UNITYSDK_OFFSET(0x12808F0)
#define MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_ONLIMITGAUGECHANGED_OFFSET UNITYSDK_OFFSET(0x1280910)
#define MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_SETLIMITBREAKGAUGE_OFFSET UNITYSDK_OFFSET(0x1280B30)
#define MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR__SETLIMITBREAKGAUGE_G__INITSKILLS|14_1_OFFSET UNITYSDK_OFFSET(0x1281370)
#define MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1280BE0)
#define MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_GET_KEYLIMITGAUGE_OFFSET UNITYSDK_OFFSET(0x1281490)
#define MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_SET_ISFULL_OFFSET UNITYSDK_OFFSET(0x12814B0)
#define MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR__SETLIMITBREAKGAUGE_G__INITGAUGE|14_0_OFFSET UNITYSDK_OFFSET(0x1280F60)
#define MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1281580)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int LimitBreakProcessor_TypeDefinitionIndex = 14084;

	class LimitBreakProcessor : public Il2CppObject
	{
	public:
		::System::String* BlackboardKeyStringLimitGauge; // 0x0
		::System::String* BlackboardKeyStringDamagedSum; // 0x0
		::System::String* BlackboardKeyStringDamagingSum; // 0x0
		::System::Boolean _IsFull_k__BackingField; // 0x10
		::MX::Logic::Battles::BlackboardKey* _KeyLimitGauge_k__BackingField; // 0x18
		::MX::Logic::Battles::Battle* battle; // 0x30
		Il2CppObject* gainRuleTrackers; // 0x38
		Il2CppObject* limitBreakSkills; // 0x40

		::System::Single GetLimitGaugeRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_GETLIMITGAUGERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_GET_ISFULL_OFFSET))(nullptr);
		}

		::System::Void set_KeyLimitGauge(::MX::Logic::Battles::BlackboardKey* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::BlackboardKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_SET_KEYLIMITGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnLimitGaugeChanged(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_ONLIMITGAUGECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void SetLimitBreakGauge(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::GroundCommandSetLimitBreakGauge* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::GroundCommandSetLimitBreakGauge*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_SETLIMITBREAKGAUGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _SetLimitBreakGauge_g__InitSkills|14_1(<>c__DisplayClass14_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass14_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR__SETLIMITBREAKGAUGE_G__INITSKILLS|14_1_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_DISPOSE_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::BlackboardKey* get_KeyLimitGauge()
		{
			return ((::MX::Logic::Battles::BlackboardKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_GET_KEYLIMITGAUGE_OFFSET))(nullptr);
		}

		::System::Void set_IsFull(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_SET_ISFULL_OFFSET))(arg, nullptr);
		}

		::System::Void _SetLimitBreakGauge_g__InitGauge|14_0(<>c__DisplayClass14_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass14_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR__SETLIMITBREAKGAUGE_G__INITGAUGE|14_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITBREAKPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

