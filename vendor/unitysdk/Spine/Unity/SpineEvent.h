#pragma once
#include "../../unitysdk.h"

#define SPINE_UNITY_SPINEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x961E4D0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineEvent_TypeDefinitionIndex = 35368;

	class SpineEvent : public Il2CppObject
	{
	public:
		::System::Boolean audioOnly; // 0x30

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEEVENT_.CTOR_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

	};
}

