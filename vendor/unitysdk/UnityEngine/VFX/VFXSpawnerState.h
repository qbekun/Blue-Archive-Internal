#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::VFX { class VFXEventAttribute; }
namespace UnityEngine::VFX { class VFXSpawnerState; }

#define UNITYENGINE_VFX_VFXSPAWNERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A8010)
#define UNITYENGINE_VFX_VFXSPAWNERSTATE_CREATESPAWNERSTATEWRAPPER_OFFSET UNITYSDK_OFFSET(0xA4A8040)
#define UNITYENGINE_VFX_VFXSPAWNERSTATE_PREPAREWRAPPER_OFFSET UNITYSDK_OFFSET(0xA4A80C0)
#define UNITYENGINE_VFX_VFXSPAWNERSTATE_SETWRAPVALUE_OFFSET UNITYSDK_OFFSET(0xA4A81F0)
#define UNITYENGINE_VFX_VFXSPAWNERSTATE_RELEASE_OFFSET UNITYSDK_OFFSET(0xA4A82F0)
#define UNITYENGINE_VFX_VFXSPAWNERSTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA4A83E0)
#define UNITYENGINE_VFX_VFXSPAWNERSTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A8550)
#define UNITYENGINE_VFX_VFXSPAWNERSTATE_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0xA4A83A0)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VFXSpawnerState_TypeDefinitionIndex = 37924;

	class VFXSpawnerState : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		::System::Boolean m_Owner; // 0x18
		::UnityEngine::VFX::VFXEventAttribute* m_WrapEventAttribute; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERSTATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::VFX::VFXSpawnerState* CreateSpawnerStateWrapper()
		{
			return (return (::UnityEngine::VFX::VFXSpawnerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERSTATE_CREATESPAWNERSTATEWRAPPER_OFFSET))(nullptr);
		}

		::System::Void PrepareWrapper()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERSTATE_PREPAREWRAPPER_OFFSET))(nullptr);
		}

		::System::Void SetWrapValue(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERSTATE_SETWRAPVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERSTATE_RELEASE_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERSTATE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERSTATE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Internal_Destroy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERSTATE_INTERNAL_DESTROY_OFFSET))(arg, nullptr);
		}

	};
}

