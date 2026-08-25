#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ShadowCaster2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2D_UNREGISTERSHADOWCASTER2D_OFFSET UNITYSDK_OFFSET(0xA0256F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2D_GETSHADOWCASTERS_OFFSET UNITYSDK_OFFSET(0xA025740)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA025750)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2D_GETSHADOWGROUP_OFFSET UNITYSDK_OFFSET(0xA025760)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2D_CACHEVALUES_OFFSET UNITYSDK_OFFSET(0xA025770)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2D_REGISTERSHADOWCASTER2D_OFFSET UNITYSDK_OFFSET(0xA025800)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShadowCasterGroup2D_TypeDefinitionIndex = 32497;

	class ShadowCasterGroup2D : public Il2CppObject
	{
	public:
		::System::Int32 m_ShadowGroup; // 0x18
		Il2CppObject* m_ShadowCasters; // 0x20

		::System::Void UnregisterShadowCaster2D(::UnityEngine::Rendering::Universal::ShadowCaster2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ShadowCaster2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2D_UNREGISTERSHADOWCASTER2D_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetShadowCasters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2D_GETSHADOWCASTERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2D_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetShadowGroup()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2D_GETSHADOWGROUP_OFFSET))(nullptr);
		}

		::System::Void CacheValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2D_CACHEVALUES_OFFSET))(nullptr);
		}

		::System::Void RegisterShadowCaster2D(::UnityEngine::Rendering::Universal::ShadowCaster2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ShadowCaster2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTERGROUP2D_REGISTERSHADOWCASTER2D_OFFSET))(arg, nullptr);
		}

	};
}

