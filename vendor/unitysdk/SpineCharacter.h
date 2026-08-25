#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace Spine { class TrackEntry; }
namespace Spine { class Event; }

#define SPINECHARACTER_GET_INSTMATERIAL_OFFSET UNITYSDK_OFFSET(0x20E6F10)
#define SPINECHARACTER_ISINTERACTIVE_OFFSET UNITYSDK_OFFSET(0x20E6FB0)
#define SPINECHARACTER_BLOCKINTERACTION_OFFSET UNITYSDK_OFFSET(0x20E7000)
#define SPINECHARACTER_BODYTOUCH_OFFSET UNITYSDK_OFFSET(0x20E7130)
#define SPINECHARACTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x20E7150)
#define SPINECHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20E7730)
#define SPINECHARACTER_ONSPINEEVENT_OFFSET UNITYSDK_OFFSET(0x20E7810)
#define SPINECHARACTER_GETCURRENTMAINCLIPNAME_OFFSET UNITYSDK_OFFSET(0x20E78B0)
#define SPINECHARACTER_PLAYTALKANIMATION_OFFSET UNITYSDK_OFFSET(0x20E7970)
#define SPINECHARACTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20E79C0)
#define SPINECHARACTER_PLAYLIPSYNC_OFFSET UNITYSDK_OFFSET(0x20E7A80)
#define SPINECHARACTER__AWAKE_G__SETLOCALIZETEXTURES|9_0_OFFSET UNITYSDK_OFFSET(0x20E74C0)

	inline static constexpr unsigned int SpineCharacter_TypeDefinitionIndex = 3781;

	class SpineCharacter : public Il2CppObject
	{
	public:
		::System::Boolean Awaken; // 0x98
		::System::Action* BodyTouchCB; // 0xA0
		Il2CppObject* PlayVoiceCB; // 0xA8
		::System::Boolean MuteVoice; // 0xB0
		Il2CppObject* InstMaterials; // 0xB8
		::Il2CppArray<::System::Object*>* LocalizeTextures; // 0xC0
		Il2CppObject* blockInteractionRequesters; // 0xC8

		::UnityEngine::Material* get_InstMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTER_GET_INSTMATERIAL_OFFSET))(nullptr);
		}

		::System::Boolean IsInteractive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTER_ISINTERACTIVE_OFFSET))(nullptr);
		}

		::System::Void BlockInteraction(::System::Object* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTER_BLOCKINTERACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void BodyTouch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTER_BODYTOUCH_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnSpineEvent(::Spine::TrackEntry* arg, ::Spine::Event* arg2)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::Spine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTER_ONSPINEEVENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetCurrentMainClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTER_GETCURRENTMAINCLIPNAME_OFFSET))(nullptr);
		}

		::System::Void PlayTalkAnimation(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTER_PLAYTALKANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void PlayLipsync(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTER_PLAYLIPSYNC_OFFSET))(str, str2, nullptr);
		}

		::System::Void _Awake_g__SetLocalizeTextures|9_0(::UnityEngine::Material* arg, ::UnityEngine::Material* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTER__AWAKE_G__SETLOCALIZETEXTURES|9_0_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

