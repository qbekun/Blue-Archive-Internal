#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_WAVEENEMYCLEAREDARGS_SET_STEP_OFFSET UNITYSDK_OFFSET(0x12733C0)
#define MX_LOGIC_BATTLES_WAVEENEMYCLEAREDARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x12733D0)
#define MX_LOGIC_BATTLES_WAVEENEMYCLEAREDARGS_GET_STEP_OFFSET UNITYSDK_OFFSET(0x1273440)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int WaveEnemyClearedArgs_TypeDefinitionIndex = 14044;

	class WaveEnemyClearedArgs : public Il2CppObject
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Int32 _Step_k__BackingField; // 0x18

		::System::Void set_Step(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEENEMYCLEAREDARGS_SET_STEP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEENEMYCLEAREDARGS_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 get_Step()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEENEMYCLEAREDARGS_GET_STEP_OFFSET))(nullptr);
		}

	};
}

