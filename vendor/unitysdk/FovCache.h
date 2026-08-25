#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Rect; }
namespace Cinemachine { class LensSettings; }

#define FOVCACHE_UPDATECACHE_OFFSET UNITYSDK_OFFSET(0x2843870)
#define FOVCACHE_SCREENTOFOV_OFFSET UNITYSDK_OFFSET(0x2844140)

	inline static constexpr unsigned int FovCache_TypeDefinitionIndex = 34249;

	class FovCache : public Il2CppObject
	{
	public:
		::UnityEngine::Rect* mFovSoftGuideRect; // 0x10
		::UnityEngine::Rect* mFovHardGuideRect; // 0x20
		::System::Single mFovH; // 0x30
		::System::Single mFov; // 0x34
		::System::Single mOrthoSizeOverDistance; // 0x38
		::System::Single mAspect; // 0x3C
		::UnityEngine::Rect* mSoftGuideRect; // 0x40
		::UnityEngine::Rect* mHardGuideRect; // 0x50

		::System::Void UpdateCache(::Cinemachine::LensSettings* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::LensSettings*, ::UnityEngine::Rect*, ::UnityEngine::Rect*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FOVCACHE_UPDATECACHE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Rect* ScreenToFOV(::UnityEngine::Rect* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FOVCACHE_SCREENTOFOV_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

