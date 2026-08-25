#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_ENDWAVEARGS_SET_STEP_OFFSET UNITYSDK_OFFSET(0x1273330)
#define MX_LOGIC_BATTLES_ENDWAVEARGS_GET_STEP_OFFSET UNITYSDK_OFFSET(0x1273340)
#define MX_LOGIC_BATTLES_ENDWAVEARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1273350)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int EndWaveArgs_TypeDefinitionIndex = 14043;

	class EndWaveArgs : public Il2CppObject
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Int32 _Step_k__BackingField; // 0x18

		::System::Void set_Step(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ENDWAVEARGS_SET_STEP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Step()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ENDWAVEARGS_GET_STEP_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ENDWAVEARGS_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

