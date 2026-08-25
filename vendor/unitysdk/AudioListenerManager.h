#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class AudioListener; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Vector3; }
class TransformInfo;

#define AUDIOLISTENERMANAGER_GET_MAINAUDIOLISTENER_OFFSET UNITYSDK_OFFSET(0x20A9900)
#define AUDIOLISTENERMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x20A9910)
#define AUDIOLISTENERMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x20A9BC0)
#define AUDIOLISTENERMANAGER_SETLISTENERASUIMODE_OFFSET UNITYSDK_OFFSET(0x20A9920)
#define AUDIOLISTENERMANAGER_SETLISTENERASBATTLEMODE_OFFSET UNITYSDK_OFFSET(0x20A9CC0)
#define AUDIOLISTENERMANAGER_SETLISTENERTOGAMECAMERA_OFFSET UNITYSDK_OFFSET(0x20AA070)
#define AUDIOLISTENERMANAGER_SETLISTENERTOTARGET_OFFSET UNITYSDK_OFFSET(0x20AA230)
#define AUDIOLISTENERMANAGER_SETLISTENERTOTARGET_OFFSET UNITYSDK_OFFSET(0x20AA5D0)
#define AUDIOLISTENERMANAGER_SETLISTENERTOTARGET_OFFSET UNITYSDK_OFFSET(0x20AA350)
#define AUDIOLISTENERMANAGER_SETLISTENERBYGROUNDCOMMAND_OFFSET UNITYSDK_OFFSET(0x20AA790)
#define AUDIOLISTENERMANAGER_SETLOWPASSFILTER_OFFSET UNITYSDK_OFFSET(0x20AA9D0)
#define AUDIOLISTENERMANAGER_OFFLOWPASSFILTER_OFFSET UNITYSDK_OFFSET(0x20AAAC0)
#define AUDIOLISTENERMANAGER_SETLISTENER_OFFSET UNITYSDK_OFFSET(0x20A9D80)
#define AUDIOLISTENERMANAGER_GETLISTENERTARGETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x20AAC30)
#define AUDIOLISTENERMANAGER_COANIMATELISTENERLOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x20A9C00)
#define AUDIOLISTENERMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20AAF60)
#define AUDIOLISTENERMANAGER__SETLISTENERTOTARGET_G__CO_FOLLOW|17_0_OFFSET UNITYSDK_OFFSET(0x20AA6C0)

	inline static constexpr unsigned int AudioListenerManager_TypeDefinitionIndex = 3549;

	class AudioListenerManager : public Id
	{
	public:
		::System::Single DefaultAnimateDuration; // 0x0
		::UnityEngine::Transform* audioListenerTransform; // 0x20
		::UnityEngine::AudioListener* audioListener; // 0x28
		::UnityEngine::Transform* uiRoot; // 0x30
		::UnityEngine::Transform* cameraLookTarget; // 0x38
		::UnityEngine::Coroutine* animateCoroutine; // 0x40
		::UnityEngine::Coroutine* followingCoroutine; // 0x48

		::UnityEngine::AudioListener* get_MainAudioListener()
		{
			return ((::UnityEngine::AudioListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_GET_MAINAUDIOLISTENER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void SetListenerAsUIMode(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_SETLISTENERASUIMODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetListenerAsBattleMode(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_SETLISTENERASBATTLEMODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetListenerToGameCamera(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_SETLISTENERTOGAMECAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void SetListenerToTarget(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_SETLISTENERTOTARGET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetListenerToTarget(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_SETLISTENERTOTARGET_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetListenerToTarget(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_SETLISTENERTOTARGET_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetListenerByGroundCommand(::UnityEngine::Vector3* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_SETLISTENERBYGROUNDCOMMAND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetLowPassFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_SETLOWPASSFILTER_OFFSET))(nullptr);
		}

		::System::Void OffLowPassFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_OFFLOWPASSFILTER_OFFSET))(nullptr);
		}

		::System::Void SetListener(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2, ::System::Single arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_SETLISTENER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Vector3* GetListenerTargetLocalPosition(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2, ::System::Single arg3)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_GETLISTENERTARGETLOCALPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CoAnimateListenerLocalTransform(TransformInfo* arg, TransformInfo* arg2, ::System::Single arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(TransformInfo*, TransformInfo*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_COANIMATELISTENERLOCALTRANSFORM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _SetListenerToTarget_g__Co_Follow|17_0(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOLISTENERMANAGER__SETLISTENERTOTARGET_G__CO_FOLLOW|17_0_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

