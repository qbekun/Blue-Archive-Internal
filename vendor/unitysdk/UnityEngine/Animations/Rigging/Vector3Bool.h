#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_ANIMATIONS_RIGGING_VECTOR3BOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E23920)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int Vector3Bool_TypeDefinitionIndex = 37203;

	class Vector3Bool : public Il2CppObject
	{
	public:
		::System::Boolean x; // 0x10
		::System::Boolean y; // 0x11
		::System::Boolean z; // 0x12

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_VECTOR3BOOL_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

