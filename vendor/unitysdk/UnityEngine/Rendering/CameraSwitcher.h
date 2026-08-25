#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define UNITYENGINE_RENDERING_CAMERASWITCHER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9FA50C0)
#define UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_3_OFFSET UNITYSDK_OFFSET(0x9FA5150)
#define UNITYENGINE_RENDERING_CAMERASWITCHER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FA5160)
#define UNITYENGINE_RENDERING_CAMERASWITCHER_GETNEXTCAMERA_OFFSET UNITYSDK_OFFSET(0x9FA5AB0)
#define UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_1_OFFSET UNITYSDK_OFFSET(0x9FA5B00)
#define UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_2_OFFSET UNITYSDK_OFFSET(0x9FA5E10)
#define UNITYENGINE_RENDERING_CAMERASWITCHER_GETCAMERACOUNT_OFFSET UNITYSDK_OFFSET(0x9FA57D0)
#define UNITYENGINE_RENDERING_CAMERASWITCHER_SETCAMERAINDEX_OFFSET UNITYSDK_OFFSET(0x9FA5B10)
#define UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_0_OFFSET UNITYSDK_OFFSET(0x9FA5E20)
#define UNITYENGINE_RENDERING_CAMERASWITCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA5E30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraSwitcher_TypeDefinitionIndex = 33881;

	class CameraSwitcher : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_Cameras; // 0x18
		::System::Int32 m_CurrentCameraIndex; // 0x20
		::UnityEngine::Camera* m_OriginalCamera; // 0x28
		::UnityEngine::Vector3* m_OriginalCameraPosition; // 0x30
		::UnityEngine::Quaternion* m_OriginalCameraRotation; // 0x3C
		::UnityEngine::Camera* m_CurrentCamera; // 0x50
		::Il2CppArray<::System::Object*>* m_CameraNames; // 0x58
		::Il2CppArray<::System::Object*>* m_CameraIndices; // 0x60
		EnumField* m_DebugEntry; // 0x68
		::System::Int32 m_DebugEntryEnumIndex; // 0x70

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void _OnEnable_b__10_3(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_3_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* GetNextCamera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER_GETNEXTCAMERA_OFFSET))(nullptr);
		}

		::System::Void _OnEnable_b__10_1(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_1_OFFSET))(arg, nullptr);
		}

		::System::Int32 _OnEnable_b__10_2()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_2_OFFSET))(nullptr);
		}

		::System::Int32 GetCameraCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER_GETCAMERACOUNT_OFFSET))(nullptr);
		}

		::System::Void SetCameraIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER_SETCAMERAINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 _OnEnable_b__10_0()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER_.CTOR_OFFSET))(nullptr);
		}

	};
}

