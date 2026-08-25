#pragma once
#include "unitysdk.h"

namespace UnityEngine { class TrailRenderer; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Camera; }
class Mode;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Coroutine; }
class UIGachaDirectingAroPlaWaitkey;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }

#define GACHASIGNATURE_GET_FXCAMERA_OFFSET UNITYSDK_OFFSET(0x258C3C0)
#define GACHASIGNATURE_SET_FXCAMERA_OFFSET UNITYSDK_OFFSET(0x258C3D0)
#define GACHASIGNATURE_GET_PAPERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x258C3E0)
#define GACHASIGNATURE_SET_PAPERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x258C3F0)
#define GACHASIGNATURE_GET_SIGNATUREFILENAME_OFFSET UNITYSDK_OFFSET(0x258C400)
#define GACHASIGNATURE_GET_SIGNATUREFILEPATH_OFFSET UNITYSDK_OFFSET(0x258C4F0)
#define GACHASIGNATURE_GET_DEFAULTSIGNATUREFILEPATH_OFFSET UNITYSDK_OFFSET(0x258C550)
#define GACHASIGNATURE_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x258C5C0)
#define GACHASIGNATURE_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x258C5D0)
#define GACHASIGNATURE_GET_HASSAVEDSIGNATURE_OFFSET UNITYSDK_OFFSET(0x258C5F0)
#define GACHASIGNATURE_SET_HASSAVEDSIGNATURE_OFFSET UNITYSDK_OFFSET(0x258C600)
#define GACHASIGNATURE_ISDRAWNEWSIGNATURE_OFFSET UNITYSDK_OFFSET(0x258C610)
#define GACHASIGNATURE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x258C620)
#define GACHASIGNATURE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x258CE80)
#define GACHASIGNATURE_LOADSAVEDDATA_OFFSET UNITYSDK_OFFSET(0x258CB70)
#define GACHASIGNATURE_ONPRESS_OFFSET UNITYSDK_OFFSET(0x258CED0)
#define GACHASIGNATURE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x258D7C0)
#define GACHASIGNATURE_ONPRESSDOWN_OFFSET UNITYSDK_OFFSET(0x258CEE0)
#define GACHASIGNATURE_ONPRESSRELEASE_OFFSET UNITYSDK_OFFSET(0x258D260)
#define GACHASIGNATURE_ONCLICKSKIP_OFFSET UNITYSDK_OFFSET(0x258EB60)
#define GACHASIGNATURE_INPUTTOPAPERWORLDHITPOSITION_OFFSET UNITYSDK_OFFSET(0x258D9B0)
#define GACHASIGNATURE_SAVESTROKEPOSITION_OFFSET UNITYSDK_OFFSET(0x258DC10)
#define GACHASIGNATURE_SAVESTROKEPOSITION_OFFSET UNITYSDK_OFFSET(0x258EA10)
#define GACHASIGNATURE_REMOVESIGNATUREDATA_OFFSET UNITYSDK_OFFSET(0x258DB30)
#define GACHASIGNATURE_COMAINTIMER_OFFSET UNITYSDK_OFFSET(0x258E2F0)
#define GACHASIGNATURE_COINTERVALTIMER_OFFSET UNITYSDK_OFFSET(0x258EAF0)
#define GACHASIGNATURE_COPLAY_OFFSET UNITYSDK_OFFSET(0x258EC90)
#define GACHASIGNATURE_FINISH_OFFSET UNITYSDK_OFFSET(0x258E360)
#define GACHASIGNATURE_COFINISHFX_OFFSET UNITYSDK_OFFSET(0x258ED60)
#define GACHASIGNATURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x258EE00)

	inline static constexpr unsigned int GachaSignature_TypeDefinitionIndex = 6244;

	class GachaSignature : public Il2CppObject
	{
	public:
		::System::Boolean isWillRecordDefaultSignature; // 0x18
		::UnityEngine::TrailRenderer* trailTemplate; // 0x20
		::UnityEngine::MeshFilter* bakeTemplate; // 0x28
		::System::Single TimeoutSec; // 0x30
		::System::Single MaxInputIntervalSec; // 0x34
		::System::Int32 MaxStrokeIndex; // 0x38
		::System::Single AfterSignDelay; // 0x3C
		::UnityEngine::Camera* fxCamera; // 0x40
		Mode* mode; // 0x48
		::UnityEngine::TrailRenderer* trailCursor; // 0x50
		::System::Int32 strokeIndex; // 0x58
		::UnityEngine::Collider* paperCollider; // 0x60
		::UnityEngine::Coroutine* mainTimerCoroutine; // 0x68
		::UnityEngine::Coroutine* intervalTimerCoroutine; // 0x70
		::System::Single mainTimerStartTime; // 0x78
		::System::Single intervalTimerStartTime; // 0x7C
		Il2CppObject* createdTrailList; // 0x80
		Il2CppObject* bakedTrailList; // 0x88
		Il2CppObject* strokeDataList; // 0x90
		Il2CppObject* gachaSignatureData; // 0x98
		::System::Action* _OnFinish_k__BackingField; // 0xA0
		::System::Boolean _HasSavedSignature_k__BackingField; // 0xA8
		UIGachaDirectingAroPlaWaitkey* aroplaWaitkey; // 0xB0

		::UnityEngine::Camera* get_FXCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_GET_FXCAMERA_OFFSET))(nullptr);
		}

		::System::Void set_FXCamera(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_SET_FXCAMERA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Collider* get_PaperCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_GET_PAPERCOLLIDER_OFFSET))(nullptr);
		}

		::System::Void set_PaperCollider(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_SET_PAPERCOLLIDER_OFFSET))(arg, nullptr);
		}

		::System::String* get_SignatureFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_GET_SIGNATUREFILENAME_OFFSET))(nullptr);
		}

		::System::String* get_SignatureFilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_GET_SIGNATUREFILEPATH_OFFSET))(nullptr);
		}

		::System::String* get_DefaultSignatureFilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_GET_DEFAULTSIGNATUREFILEPATH_OFFSET))(nullptr);
		}

		::System::Action* get_OnFinish()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_GET_ONFINISH_OFFSET))(nullptr);
		}

		::System::Void set_OnFinish(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_SET_ONFINISH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasSavedSignature()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_GET_HASSAVEDSIGNATURE_OFFSET))(nullptr);
		}

		::System::Void set_HasSavedSignature(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_SET_HASSAVEDSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDrawNewSignature()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_ISDRAWNEWSIGNATURE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void LoadSavedData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_LOADSAVEDDATA_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnPressDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_ONPRESSDOWN_OFFSET))(nullptr);
		}

		::System::Void OnPressRelease()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_ONPRESSRELEASE_OFFSET))(nullptr);
		}

		::System::Void OnClickSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_ONCLICKSKIP_OFFSET))(nullptr);
		}

		::System::Boolean InputToPaperWorldHitPosition(::UnityEngine::Vector3&* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_INPUTTOPAPERWORLDHITPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void SaveStrokePosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_SAVESTROKEPOSITION_OFFSET))(nullptr);
		}

		::System::Void SaveStrokePosition(::System::Int32 arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_SAVESTROKEPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveSignatureData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_REMOVESIGNATUREDATA_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoMainTimer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_COMAINTIMER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoIntervalTimer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_COINTERVALTIMER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_COPLAY_OFFSET))(nullptr);
		}

		::System::Void Finish(::System::Boolean arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_FINISH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoFinishFx(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_COFINISHFX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHASIGNATURE_.CTOR_OFFSET))(nullptr);
		}

	};

