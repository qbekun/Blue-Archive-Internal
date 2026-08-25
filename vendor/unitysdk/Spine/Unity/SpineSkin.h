#pragma once
#include "../../unitysdk.h"

#define SPINE_UNITY_SPINESKIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x961E7A0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineSkin_TypeDefinitionIndex = 35372;

	class SpineSkin : public Il2CppObject
	{
	public:
		::System::Boolean defaultAsEmptyString; // 0x30

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESKIN_.CTOR_OFFSET))(str, str, arg, arg, arg, arg, nullptr);
		}

	};
}

