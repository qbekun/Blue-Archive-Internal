#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class LimitBreakGaugeGainTrigger; }

#define MX_LOGIC_BATTLES_LIMITGAUGEGAINRULE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1301700)
#define MX_LOGIC_BATTLES_LIMITGAUGEGAINRULE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1301710)
#define MX_LOGIC_BATTLES_LIMITGAUGEGAINRULE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13019D0)
#define MX_LOGIC_BATTLES_LIMITGAUGEGAINRULE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1301B10)
#define MX_LOGIC_BATTLES_LIMITGAUGEGAINRULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1301F00)
#define MX_LOGIC_BATTLES_LIMITGAUGEGAINRULE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1301F10)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int LimitGaugeGainRule_TypeDefinitionIndex = 14215;

	class LimitGaugeGainRule : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::LimitBreakGaugeGainTrigger* Trigger; // 0x10
		::System::Int64 GaugeGain; // 0x18
		::System::Int64 Parameter0; // 0x20
		::System::Int64 Parameter1; // 0x28

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITGAUGEGAINRULE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITGAUGEGAINRULE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::LimitGaugeGainRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::LimitGaugeGainRule&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITGAUGEGAINRULE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::LimitGaugeGainRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::LimitGaugeGainRule&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITGAUGEGAINRULE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITGAUGEGAINRULE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LIMITGAUGEGAINRULE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

