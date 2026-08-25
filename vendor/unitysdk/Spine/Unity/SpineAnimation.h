#pragma once
#include "../../unitysdk.h"

#define SPINE_UNITY_SPINEANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x961E410)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineAnimation_TypeDefinitionIndex = 35367;

	class SpineAnimation : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEANIMATION_.CTOR_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

	};
}

