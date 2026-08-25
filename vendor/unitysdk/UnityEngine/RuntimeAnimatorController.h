#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_RUNTIMEANIMATORCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1CC150)
#define UNITYENGINE_RUNTIMEANIMATORCONTROLLER_GET_ANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0xA1CDD60)

namespace UnityEngine
{
	inline static constexpr unsigned int RuntimeAnimatorController_TypeDefinitionIndex = 36481;

	class RuntimeAnimatorController : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEANIMATORCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_animationClips()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEANIMATORCONTROLLER_GET_ANIMATIONCLIPS_OFFSET))(nullptr);
		}

	};
}

