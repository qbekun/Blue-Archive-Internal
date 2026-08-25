#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroundEvent; }

#define MX_LOGIC_BATTLES_GROUNDCONDITION_SET_ACHIEVE_OFFSET UNITYSDK_OFFSET(0x1337670)
#define MX_LOGIC_BATTLES_GROUNDCONDITION_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLES_GROUNDCONDITION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1337680)
#define MX_LOGIC_BATTLES_GROUNDCONDITION_ONACHIEVE_OFFSET UNITYSDK_OFFSET(0x1337880)
#define MX_LOGIC_BATTLES_GROUNDCONDITION_END_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLES_GROUNDCONDITION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13378B0)
#define MX_LOGIC_BATTLES_GROUNDCONDITION_GET_ACHIEVE_OFFSET UNITYSDK_OFFSET(0x13378D0)
#define MX_LOGIC_BATTLES_GROUNDCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13378E0)
#define MX_LOGIC_BATTLES_GROUNDCONDITION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13378F0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCondition_TypeDefinitionIndex = 14279;

	class GroundCondition : public Il2CppObject
	{
	public:
		::System::String* ConditionID; // 0x10
		::System::Boolean _Achieve_k__BackingField; // 0x18
		::MX::Logic::Battles::GroundEvent* Event; // 0x20

		::System::Void set_Achieve(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITION_SET_ACHIEVE_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITION_START_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void OnAchieve()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITION_ONACHIEVE_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITION_END_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::GroundEvent* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITION_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Achieve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITION_GET_ACHIEVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

