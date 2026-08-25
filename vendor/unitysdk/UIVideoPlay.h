#pragma once
#include "unitysdk.h"

namespace UnityEngine::Video { class VideoPlayer; }
class CanNotTouchTypes;
class UITexture;
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class Camera; }
namespace MX::Data { class VideoPlayInfo; }

#define UIVIDEOPLAY_SET_CANNOTTOUCHTYPE_OFFSET UNITYSDK_OFFSET(0xBBDA30)
#define UIVIDEOPLAY_DETACHEXTENSIONONFILENAME_OFFSET UNITYSDK_OFFSET(0xBBDA40)
#define UIVIDEOPLAY_SKIPBTTONCANCEL_OFFSET UNITYSDK_OFFSET(0xBBDB60)
#define UIVIDEOPLAY_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBBDBA0)
#define UIVIDEOPLAY_AWAKE_OFFSET UNITYSDK_OFFSET(0xBBDDA0)
#define UIVIDEOPLAY_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xBBDFB0)
#define UIVIDEOPLAY_ONCLICK_OFFSET UNITYSDK_OFFSET(0xBBE1E0)
#define UIVIDEOPLAY_ENDVIDEO_OFFSET UNITYSDK_OFFSET(0xBBE380)
#define UIVIDEOPLAY_COWAITANDPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0xBBE7F0)
#define UIVIDEOPLAY_ONLOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0xBBE860)
#define UIVIDEOPLAY_CLEARVIDEO_OFFSET UNITYSDK_OFFSET(0xBBE6D0)
#define UIVIDEOPLAY_COPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0xBBDD30)
#define UIVIDEOPLAY_OPEN_OFFSET UNITYSDK_OFFSET(0xBBE8C0)
#define UIVIDEOPLAY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xBBEA10)
#define UIVIDEOPLAY_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xBBEAB0)
#define UIVIDEOPLAY_GET_CANNOTTOUCHTYPE_OFFSET UNITYSDK_OFFSET(0xBBEC20)
#define UIVIDEOPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xBBEC30)
#define UIVIDEOPLAY_GET_ISTOUCHABLEBYMODE_OFFSET UNITYSDK_OFFSET(0xBBE060)
#define UIVIDEOPLAY_OPENPV_OFFSET UNITYSDK_OFFSET(0xBBEC40)

	inline static constexpr unsigned int UIVideoPlay_TypeDefinitionIndex = 8616;

	class UIVideoPlay : public Il2CppObject
	{
	public:
		::System::Action* EndAction; // 0xD8
		::UnityEngine::Video::VideoPlayer* VideoPlayer; // 0xE0
		::System::Boolean CanTouch; // 0xE8
		CanNotTouchTypes* _CanNotTouchType_k__BackingField; // 0xEC
		::System::Boolean OnOpenPV; // 0x0
		::System::Boolean OnSkipPopup; // 0x1
		UITexture* BGTexture; // 0xF0
		::UnityEngine::AudioSource* AudioSource; // 0xF8
		::UnityEngine::Camera* videoCamera; // 0x100
		::System::Int32 cachedCullingMask; // 0x108
		::System::String* filePath; // 0x8

		::System::Void set_CanNotTouchType(CanNotTouchTypes* arg)
		{
			((::System::Void(*)(CanNotTouchTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_SET_CANNOTTOUCHTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void DetachExtensionOnFileName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_DETACHEXTENSIONONFILENAME_OFFSET))(nullptr);
		}

		::System::Void SkipBttonCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_SKIPBTTONCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void EndVideo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_ENDVIDEO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoWaitAndPlayVideo()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_COWAITANDPLAYVIDEO_OFFSET))(nullptr);
		}

		::System::Void OnLoopPointReached(::UnityEngine::Video::VideoPlayer* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_ONLOOPPOINTREACHED_OFFSET))(arg, nullptr);
		}

		::System::Void ClearVideo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_CLEARVIDEO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayVideo()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_COPLAYVIDEO_OFFSET))(nullptr);
		}

		::System::Void Open(::MX::Data::VideoPlayInfo* arg, ::System::Action* arg2, ::System::Boolean arg3, CanNotTouchTypes* arg4)
		{
			((::System::Void(*)(::MX::Data::VideoPlayInfo*, ::System::Action*, ::System::Boolean, CanNotTouchTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_OPEN_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		CanNotTouchTypes* get_CanNotTouchType()
		{
			return ((CanNotTouchTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_GET_CANNOTTOUCHTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTouchableByMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_GET_ISTOUCHABLEBYMODE_OFFSET))(nullptr);
		}

		::System::Void OpenPV(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIVIDEOPLAY_OPENPV_OFFSET))(arg, nullptr);
		}

	};

