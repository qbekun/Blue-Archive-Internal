#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::VFX { class VisualEffectAsset; }
namespace UnityEngine::VFX { class VFXEventAttribute; }

#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A7970)
#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE_CREATEEVENTATTRIBUTEWRAPPER_OFFSET UNITYSDK_OFFSET(0xA4A79B0)
#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE_SETWRAPVALUE_OFFSET UNITYSDK_OFFSET(0xA4A7A40)
#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA4A7AB0)
#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE_INTERNAL_INSTANCIATEVFXEVENTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA4A7AF0)
#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE_INTERNAL_INITFROMASSET_OFFSET UNITYSDK_OFFSET(0xA4A7BB0)
#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE_RELEASE_OFFSET UNITYSDK_OFFSET(0xA4A7BF0)
#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA4A7CE0)
#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A7E50)
#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0xA4A7CA0)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VFXEventAttribute_TypeDefinitionIndex = 37919;

	class VFXEventAttribute : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		::System::Boolean m_Owner; // 0x18
		::UnityEngine::VFX::VisualEffectAsset* m_VfxAsset; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg, ::UnityEngine::VFX::VisualEffectAsset* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::UnityEngine::VFX::VisualEffectAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::VFX::VFXEventAttribute* CreateEventAttributeWrapper()
		{
			return (return (::UnityEngine::VFX::VFXEventAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE_CREATEEVENTATTRIBUTEWRAPPER_OFFSET))(nullptr);
		}

		::System::Void SetWrapValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE_SETWRAPVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Internal_Create()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE_INTERNAL_CREATE_OFFSET))(nullptr);
		}

		::UnityEngine::VFX::VFXEventAttribute* Internal_InstanciateVFXEventAttribute(::UnityEngine::VFX::VisualEffectAsset* arg)
		{
			return (return (::UnityEngine::VFX::VFXEventAttribute*(*)(::UnityEngine::VFX::VisualEffectAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE_INTERNAL_INSTANCIATEVFXEVENTATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_InitFromAsset(::UnityEngine::VFX::VisualEffectAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::VFX::VisualEffectAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE_INTERNAL_INITFROMASSET_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE_RELEASE_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Internal_Destroy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE_INTERNAL_DESTROY_OFFSET))(arg, nullptr);
		}

	};
}

