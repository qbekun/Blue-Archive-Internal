#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_BINDINGS_VISIBLETOOTHERMODULESATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A57F0)
#define UNITYENGINE_BINDINGS_VISIBLETOOTHERMODULESATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5800)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int VisibleToOtherModulesAttribute_TypeDefinitionIndex = 37877;

	class VisibleToOtherModulesAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_VISIBLETOOTHERMODULESATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_VISIBLETOOTHERMODULESATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

