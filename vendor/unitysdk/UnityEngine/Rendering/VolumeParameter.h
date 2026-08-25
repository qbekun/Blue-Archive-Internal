#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class VolumeParameter; }

#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_SET_OVERRIDESTATE_OFFSET UNITYSDK_OFFSET(0x9FE3810)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9FE3820)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_GET_OVERRIDESTATE_OFFSET UNITYSDK_OFFSET(0x9FE3830)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_RELEASE_OFFSET UNITYSDK_OFFSET(0x9FE3840)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FE3850)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_ISOBJECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x9FE1360)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE3860)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeParameter_TypeDefinitionIndex = 34092;

	class VolumeParameter : public Il2CppObject
	{
	public:
		::System::String* k_DebuggerDisplay; // 0x0
		::System::Boolean m_OverrideState; // 0x10

		::System::Void set_overrideState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_SET_OVERRIDESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_ONDISABLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_GETVALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_overrideState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_GET_OVERRIDESTATE_OFFSET))(nullptr);
		}

		::System::Void Interp(::UnityEngine::Rendering::VolumeParameter* arg, ::UnityEngine::Rendering::VolumeParameter* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_INTERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_RELEASE_OFFSET))(nullptr);
		}

		::System::Void SetValue(::UnityEngine::Rendering::VolumeParameter* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeParameter*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_SETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean IsObjectParameter(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_ISOBJECTPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER_.CTOR_OFFSET))(nullptr);
		}

	};
}

