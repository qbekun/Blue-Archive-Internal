#pragma once
#include "unitysdk.h"

namespace Cinemachine { class ConfinerOven; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Collider2D&; }

#define SHAPECACHE_CALCULATEDELTATRANSFORMATIONMATRIX_OFFSET UNITYSDK_OFFSET(0x282D7A0)
#define SHAPECACHE_VALIDATECACHE_OFFSET UNITYSDK_OFFSET(0x282CB00)
#define SHAPECACHE_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x282D6A0)
#define SHAPECACHE_ISVALID_OFFSET UNITYSDK_OFFSET(0x282D9E0)

	inline static constexpr unsigned int ShapeCache_TypeDefinitionIndex = 34211;

	class ShapeCache : public Il2CppObject
	{
	public:
		::Cinemachine::ConfinerOven* m_confinerOven; // 0x10
		Il2CppObject* m_OriginalPath; // 0x18
		::UnityEngine::Matrix4x4* m_DeltaWorldToBaked; // 0x20
		::UnityEngine::Matrix4x4* m_DeltaBakedToWorld; // 0x60
		::System::Single m_aspectRatio; // 0xA0
		::System::Single m_maxWindowSize; // 0xA4
		::System::Single m_maxComputationTimePerFrameInSeconds; // 0xA8
		::UnityEngine::Matrix4x4* m_bakedToWorld; // 0xAC
		::UnityEngine::Collider2D* m_boundingShape2D; // 0xF0

		::System::Void CalculateDeltaTransformationMatrix()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHAPECACHE_CALCULATEDELTATRANSFORMATIONMATRIX_OFFSET))(nullptr);
		}

		::System::Boolean ValidateCache(::UnityEngine::Collider2D* arg, ::System::Single arg, ::System::Single arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Collider2D*, ::System::Single, ::System::Single, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SHAPECACHE_VALIDATECACHE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Invalidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHAPECACHE_INVALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean IsValid(::UnityEngine::Collider2D&* arg, float&* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Collider2D&*, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + SHAPECACHE_ISVALID_OFFSET))(arg, arg, arg, nullptr);
		}

	};

