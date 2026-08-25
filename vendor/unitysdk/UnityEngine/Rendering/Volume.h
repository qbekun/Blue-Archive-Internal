#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class VolumeProfile; }

#define UNITYENGINE_RENDERING_VOLUME_UPDATELAYER_OFFSET UNITYSDK_OFFSET(0x9FDEFB0)
#define UNITYENGINE_RENDERING_VOLUME_GET_PROFILEREF_OFFSET UNITYSDK_OFFSET(0x9FDF1A0)
#define UNITYENGINE_RENDERING_VOLUME_GET_COLLIDERS_OFFSET UNITYSDK_OFFSET(0x9FDF210)
#define UNITYENGINE_RENDERING_VOLUME_SET_ISGLOBAL_OFFSET UNITYSDK_OFFSET(0x9FDF220)
#define UNITYENGINE_RENDERING_VOLUME_HASINSTANTIATEDPROFILE_OFFSET UNITYSDK_OFFSET(0x9FDF230)
#define UNITYENGINE_RENDERING_VOLUME_GET_ISGLOBAL_OFFSET UNITYSDK_OFFSET(0x9FDF280)
#define UNITYENGINE_RENDERING_VOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9FDF290)
#define UNITYENGINE_RENDERING_VOLUME_SET_PROFILE_OFFSET UNITYSDK_OFFSET(0x9FDF5A0)
#define UNITYENGINE_RENDERING_VOLUME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FDF5B0)
#define UNITYENGINE_RENDERING_VOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FDF640)
#define UNITYENGINE_RENDERING_VOLUME_GET_PROFILE_OFFSET UNITYSDK_OFFSET(0x9FDFA80)
#define UNITYENGINE_RENDERING_VOLUME_UPDATE_OFFSET UNITYSDK_OFFSET(0x9FDFDA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Volume_TypeDefinitionIndex = 34082;

	class Volume : public Il2CppObject
	{
	public:
		::System::Boolean m_IsGlobal; // 0x18
		::System::Single priority; // 0x1C
		::System::Single blendDistance; // 0x20
		::System::Single weight; // 0x24
		::UnityEngine::Rendering::VolumeProfile* sharedProfile; // 0x28
		Il2CppObject* m_Colliders; // 0x30
		::System::Int32 m_PreviousLayer; // 0x38
		::System::Single m_PreviousPriority; // 0x3C
		::UnityEngine::Rendering::VolumeProfile* m_InternalProfile; // 0x40

		::System::Void UpdateLayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_UPDATELAYER_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::VolumeProfile* get_profileRef()
		{
			return (return (::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_GET_PROFILEREF_OFFSET))(nullptr);
		}

		Il2CppObject* get_colliders()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_GET_COLLIDERS_OFFSET))(nullptr);
		}

		::System::Void set_isGlobal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_SET_ISGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasInstantiatedProfile()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_HASINSTANTIATEDPROFILE_OFFSET))(nullptr);
		}

		::System::Boolean get_isGlobal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_GET_ISGLOBAL_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_profile(::UnityEngine::Rendering::VolumeProfile* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeProfile*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_SET_PROFILE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::VolumeProfile* get_profile()
		{
			return (return (::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_GET_PROFILE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_UPDATE_OFFSET))(nullptr);
		}

	};
}

