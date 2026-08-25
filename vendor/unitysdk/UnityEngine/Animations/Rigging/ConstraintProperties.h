#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Component; }

#define UNITYENGINE_ANIMATIONS_RIGGING_CONSTRAINTPROPERTIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E2D4A0)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int ConstraintProperties_TypeDefinitionIndex = 37193;

	class ConstraintProperties : public Il2CppObject
	{
	public:
		::System::String* s_Weight; // 0x0
		::UnityEngine::Component* component; // 0x10
		::Il2CppArray<::System::Object*>* properties; // 0x18

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_CONSTRAINTPROPERTIES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

