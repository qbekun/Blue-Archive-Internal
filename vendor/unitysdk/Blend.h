#pragma once
#include "unitysdk.h"

class AnimatorStateName;

#define BLEND_.CTOR_OFFSET UNITYSDK_OFFSET(0x214A5D0)

	inline static constexpr unsigned int Blend_TypeDefinitionIndex = 3956;

	class Blend : public Il2CppObject
	{
	public:
		AnimatorStateName* From; // 0x10
		AnimatorStateName* To; // 0x14
		::System::Single Time; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEND_.CTOR_OFFSET))(nullptr);
		}

	};

