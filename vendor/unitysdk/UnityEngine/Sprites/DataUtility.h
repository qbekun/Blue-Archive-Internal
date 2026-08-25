#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_SPRITES_DATAUTILITY_GETINNERUV_OFFSET UNITYSDK_OFFSET(0xA2442A0)
#define UNITYENGINE_SPRITES_DATAUTILITY_GETOUTERUV_OFFSET UNITYSDK_OFFSET(0xA244310)
#define UNITYENGINE_SPRITES_DATAUTILITY_GETPADDING_OFFSET UNITYSDK_OFFSET(0xA244380)
#define UNITYENGINE_SPRITES_DATAUTILITY_GETMINSIZE_OFFSET UNITYSDK_OFFSET(0xA2443F0)

namespace UnityEngine::Sprites
{
	inline static constexpr unsigned int DataUtility_TypeDefinitionIndex = 31225;

	class DataUtility : public Il2CppObject
	{
	public:
		::UnityEngine::Vector4* GetInnerUV(::UnityEngine::Sprite* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETINNERUV_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* GetOuterUV(::UnityEngine::Sprite* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETOUTERUV_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* GetPadding(::UnityEngine::Sprite* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETPADDING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetMinSize(::UnityEngine::Sprite* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETMINSIZE_OFFSET))(arg, nullptr);
		}

	};
}

