#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_ALLCLEARWAVEARGS_GET_STEP_OFFSET UNITYSDK_OFFSET(0x1273450)
#define MX_LOGIC_BATTLES_ALLCLEARWAVEARGS_SET_STEP_OFFSET UNITYSDK_OFFSET(0x1273460)
#define MX_LOGIC_BATTLES_ALLCLEARWAVEARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1273470)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int AllClearWaveArgs_TypeDefinitionIndex = 14045;

	class AllClearWaveArgs : public Il2CppObject
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Int32 _Step_k__BackingField; // 0x18

		::System::Int32 get_Step()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ALLCLEARWAVEARGS_GET_STEP_OFFSET))(nullptr);
		}

		::System::Void set_Step(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ALLCLEARWAVEARGS_SET_STEP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ALLCLEARWAVEARGS_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

