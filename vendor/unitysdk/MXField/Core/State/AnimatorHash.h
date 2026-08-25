#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_CORE_STATE_ANIMATORHASH_.CCTOR_OFFSET UNITYSDK_OFFSET(0xEDB040)

namespace MXField::Core::State
{
	inline static constexpr unsigned int AnimatorHash_TypeDefinitionIndex = 10973;

	class AnimatorHash : public Il2CppObject
	{
	public:
		::System::Int32 MoveInputMag; // 0x0
		::System::Int32 Rotator; // 0x4

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_STATE_ANIMATORHASH_.CCTOR_OFFSET))(nullptr);
		}

	};
}

