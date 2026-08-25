#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class ExtraStatType; }
namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_HEALEDLIMITEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4190)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HealedLimitEffectData_TypeDefinitionIndex = 13600;

	class HealedLimitEffectData : public Il2CppObject
	{
	public:
		::System::Int64 LimitAmount; // 0x58
		::System::Int64 LimitHPRate; // 0x60
		::MX::Logic::Skills::ExtraStatType* ExtraStatType; // 0x68
		::FlatData::EndCondition* EndCondition; // 0x6C
		::System::String* EndConditionArgumentFirst; // 0x70
		::System::String* EndConditionArgumentSecond; // 0x78
		::System::Boolean Dispellable; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEDLIMITEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

