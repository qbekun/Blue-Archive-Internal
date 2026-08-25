#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_USEEXCLUSIVEHPBAREFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4550)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int UseExclusiveHPBarEffectData_TypeDefinitionIndex = 13647;

	class UseExclusiveHPBarEffectData : public Il2CppObject
	{
	public:
		::System::String* UIPath; // 0x58
		::FlatData::EndCondition* EndCondition; // 0x60
		::System::Int32 EndConditionArgument; // 0x64
		::System::Boolean Dispellable; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_USEEXCLUSIVEHPBAREFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

