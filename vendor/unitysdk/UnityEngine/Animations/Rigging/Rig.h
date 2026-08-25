#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_ANIMATIONS_RIGGING_RIG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E24270)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIG_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x9E24300)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIG_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x9E24340)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int Rig_TypeDefinitionIndex = 37171;

	class Rig : public Il2CppObject
	{
	public:
		::System::Single m_Weight; // 0x18
		Il2CppObject* m_Effectors; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_weight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIG_SET_WEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single get_weight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIG_GET_WEIGHT_OFFSET))(nullptr);
		}

	};
}

