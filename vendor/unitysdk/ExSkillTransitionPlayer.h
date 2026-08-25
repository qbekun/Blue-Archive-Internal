#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine::Playables { class PlayableDirector; }
class FxKeepScreenSpaceSize;
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }
class BloomOverride;
namespace UnityEngine { class Camera; }

#define EXSKILLTRANSITIONPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x13BBD10)
#define EXSKILLTRANSITIONPLAYER_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0x13BBD80)
#define EXSKILLTRANSITIONPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x13BBE40)
#define EXSKILLTRANSITIONPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13BBFB0)
#define EXSKILLTRANSITIONPLAYER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x13BC000)

	inline static constexpr unsigned int ExSkillTransitionPlayer_TypeDefinitionIndex = 1015;

	class ExSkillTransitionPlayer : public Il2CppObject
	{
	public:
		::UnityEngine::Renderer* screen; // 0x18
		::UnityEngine::Playables::PlayableDirector* director; // 0x20
		FxKeepScreenSpaceSize* resizer; // 0x28
		::System::String* textureName; // 0x30
		::UnityEngine::RenderTexture* renderTexture; // 0x38
		::UnityEngine::Material* screenMaterial; // 0x40
		::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* uacData; // 0x48
		BloomOverride* bloomOverride; // 0x50
		::System::Int32 StandardRendererIndex; // 0x0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLTRANSITIONPLAYER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnStopped()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLTRANSITIONPLAYER_ONSTOPPED_OFFSET))(nullptr);
		}

		::System::Void Play(::System::Single arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLTRANSITIONPLAYER_PLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLTRANSITIONPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Capture(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLTRANSITIONPLAYER_CAPTURE_OFFSET))(arg, nullptr);
		}

	};

