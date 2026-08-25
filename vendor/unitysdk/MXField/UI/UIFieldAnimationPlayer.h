#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Animation; }

#define MXFIELD_UI_UIFIELDANIMATIONPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE85C60)
#define MXFIELD_UI_UIFIELDANIMATIONPLAYER_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xE85CD0)
#define MXFIELD_UI_UIFIELDANIMATIONPLAYER_SET_ANIM_OFFSET UNITYSDK_OFFSET(0xE85CE0)
#define MXFIELD_UI_UIFIELDANIMATIONPLAYER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE85CF0)
#define MXFIELD_UI_UIFIELDANIMATIONPLAYER_GET_ANIM_OFFSET UNITYSDK_OFFSET(0xE85E20)
#define MXFIELD_UI_UIFIELDANIMATIONPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE85E30)
#define MXFIELD_UI_UIFIELDANIMATIONPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE85E40)
#define MXFIELD_UI_UIFIELDANIMATIONPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xE85EF0)
#define MXFIELD_UI_UIFIELDANIMATIONPLAYER_SAMPLEFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0xE85E50)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldAnimationPlayer_TypeDefinitionIndex = 10645;

	class UIFieldAnimationPlayer : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* _Anim_k__BackingField; // 0x18
		::System::Boolean _IsPlaying_k__BackingField; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDANIMATIONPLAYER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_IsPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDANIMATIONPLAYER_SET_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Void set_Anim(::UnityEngine::Animation* arg)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDANIMATIONPLAYER_SET_ANIM_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDANIMATIONPLAYER_LATEUPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* get_Anim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDANIMATIONPLAYER_GET_ANIM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDANIMATIONPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDANIMATIONPLAYER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDANIMATIONPLAYER_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void SampleFirstFrame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDANIMATIONPLAYER_SAMPLEFIRSTFRAME_OFFSET))(nullptr);
		}

	};
}

