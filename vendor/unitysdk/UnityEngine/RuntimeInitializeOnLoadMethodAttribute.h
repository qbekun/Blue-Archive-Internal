#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RuntimeInitializeLoadType; }

#define UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA231D70)
#define UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA231DA0)
#define UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_SET_LOADTYPE_OFFSET UNITYSDK_OFFSET(0xA231D90)

namespace UnityEngine
{
	inline static constexpr unsigned int RuntimeInitializeOnLoadMethodAttribute_TypeDefinitionIndex = 31161;

	class RuntimeInitializeOnLoadMethodAttribute : public Il2CppObject
	{
	public:
		::UnityEngine::RuntimeInitializeLoadType* m_LoadType; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::RuntimeInitializeLoadType* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeInitializeLoadType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_loadType(::UnityEngine::RuntimeInitializeLoadType* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeInitializeLoadType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_SET_LOADTYPE_OFFSET))(arg, nullptr);
		}

	};
}

