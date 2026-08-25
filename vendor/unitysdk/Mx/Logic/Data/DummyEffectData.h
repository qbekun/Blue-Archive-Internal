#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_DUMMYEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4000)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DummyEffectData_TypeDefinitionIndex = 13585;

	class DummyEffectData : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Boolean StackSameEffectApplied; // 0x60
		::System::Int32 StackSameEffectCount; // 0x64
		::System::Boolean ExpireOldIfStackCountOver; // 0x68
		::System::Boolean IsDispellable; // 0x69

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DUMMYEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

