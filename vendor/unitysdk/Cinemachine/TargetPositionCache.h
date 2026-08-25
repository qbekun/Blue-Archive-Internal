#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Quaternion; }

#define CINEMACHINE_TARGETPOSITIONCACHE_CREATEPLAYBACKCURVES_OFFSET UNITYSDK_OFFSET(0x2863C00)
#define CINEMACHINE_TARGETPOSITIONCACHE_GETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x2857C20)
#define CINEMACHINE_TARGETPOSITIONCACHE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2864840)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_ISRECORDING_OFFSET UNITYSDK_OFFSET(0x2864850)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_HASCURRENTTIME_OFFSET UNITYSDK_OFFSET(0x28641F0)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x28648C0)
#define CINEMACHINE_TARGETPOSITIONCACHE_SET_CACHEMODE_OFFSET UNITYSDK_OFFSET(0x2864910)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_CURRENTPLAYBACKTIMEVALID_OFFSET UNITYSDK_OFFSET(0x2864970)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_CACHETIMERANGE_OFFSET UNITYSDK_OFFSET(0x2864A00)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_CACHEMODE_OFFSET UNITYSDK_OFFSET(0x2864A40)
#define CINEMACHINE_TARGETPOSITIONCACHE_GETTARGETROTATION_OFFSET UNITYSDK_OFFSET(0x28572B0)
#define CINEMACHINE_TARGETPOSITIONCACHE_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x28640B0)

namespace Cinemachine
{
	inline static constexpr unsigned int TargetPositionCache_TypeDefinitionIndex = 34340;

	class TargetPositionCache : public Il2CppObject
	{
	public:
		::System::Boolean UseCache; // 0x0
		::System::Single CacheStepSize; // 0x0
		Mode* m_CacheMode; // 0x4
		::System::Single CurrentTime; // 0x8
		::System::Int32 CurrentFrame; // 0xC
		::System::Boolean IsCameraCut; // 0x10
		Il2CppObject* m_Cache; // 0x18
		TimeRange* m_CacheTimeRange; // 0x20
		::System::Single kWraparoundSlush; // 0x0

		::System::Void CreatePlaybackCurves()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CREATEPLAYBACKCURVES_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetTargetPosition(::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GETTARGETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRecording()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_ISRECORDING_OFFSET))(nullptr);
		}

		::System::Boolean get_HasCurrentTime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_HASCURRENTTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Void set_CacheMode(Mode* arg)
		{
			((::System::Void(*)(Mode*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_SET_CACHEMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CurrentPlaybackTimeValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_CURRENTPLAYBACKTIMEVALID_OFFSET))(nullptr);
		}

		TimeRange* get_CacheTimeRange()
		{
			return (return (TimeRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_CACHETIMERANGE_OFFSET))(nullptr);
		}

		Mode* get_CacheMode()
		{
			return (return (Mode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_CACHEMODE_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* GetTargetRotation(::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GETTARGETROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void ClearCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CLEARCACHE_OFFSET))(nullptr);
		}

	};
}

