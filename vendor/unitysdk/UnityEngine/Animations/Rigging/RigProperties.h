#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Component; }

#define UNITYENGINE_ANIMATIONS_RIGGING_RIGPROPERTIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E2D440)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int RigProperties_TypeDefinitionIndex = 37192;

	class RigProperties : public Il2CppObject
	{
	public:
		::System::String* s_Weight; // 0x0
		::UnityEngine::Component* component; // 0x10

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGPROPERTIES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

