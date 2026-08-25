#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_HIDECHARACTEREFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F41C0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HideCharacterEffectData_TypeDefinitionIndex = 13603;

	class HideCharacterEffectData : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Boolean IsDispellable; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HIDECHARACTEREFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

