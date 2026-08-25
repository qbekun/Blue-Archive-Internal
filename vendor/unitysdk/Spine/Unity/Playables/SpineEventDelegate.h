#pragma once
#include "../../../unitysdk.h"

namespace Spine { class Event; }

#define SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x95E3B80)
#define SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E3B90)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineEventDelegate_TypeDefinitionIndex = 37934;

	class SpineEventDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::Spine::Event* arg)
		{
			((::System::Void(*)(::Spine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

