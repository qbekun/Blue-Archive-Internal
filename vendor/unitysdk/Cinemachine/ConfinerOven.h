#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Rect; }

#define CINEMACHINE_CONFINEROVEN_COMPUTESKELETON_OFFSET UNITYSDK_OFFSET(0x285F0A0)
#define CINEMACHINE_CONFINEROVEN_BAKECONFINER_OFFSET UNITYSDK_OFFSET(0x285F4A0)
#define CINEMACHINE_CONFINEROVEN_GETBAKEDSOLUTION_OFFSET UNITYSDK_OFFSET(0x285FB60)
#define CINEMACHINE_CONFINEROVEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x285FF70)
#define CINEMACHINE_CONFINEROVEN_GET_STATE_OFFSET UNITYSDK_OFFSET(0x2860740)
#define CINEMACHINE_CONFINEROVEN_GETPOLYGONBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x2860750)
#define CINEMACHINE_CONFINEROVEN_SET_STATE_OFFSET UNITYSDK_OFFSET(0x28608C0)
#define CINEMACHINE_CONFINEROVEN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2860040)

namespace Cinemachine
{
	inline static constexpr unsigned int ConfinerOven_TypeDefinitionIndex = 34324;

	class ConfinerOven : public Il2CppObject
	{
	public:
		::System::Single m_MinFrustumHeightWithBones; // 0x10
		Il2CppObject* m_OriginalPolygon; // 0x18
		Il2CppObject* m_Skeleton; // 0x20
		::System::Int64 k_FloatToIntScaler; // 0x0
		::System::Single k_IntToFloatScaler; // 0x0
		::System::Single k_MinStepSize; // 0x0
		::UnityEngine::Rect* m_PolygonRect; // 0x28
		AspectStretcher* m_AspectStretcher; // 0x38
		::System::Single m_maxComputationTimeForFullSkeletonBakeInSeconds; // 0x44
		BakingState* _State_k__BackingField; // 0x48
		::System::Single m_BakeProgress; // 0x4C
		BakingStateCache* m_Cache; // 0x50

		::System::Void ComputeSkeleton(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_COMPUTESKELETON_OFFSET))(arg, nullptr);
		}

		::System::Void BakeConfiner(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_BAKECONFINER_OFFSET))(arg, nullptr);
		}

		BakedSolution* GetBakedSolution(::System::Single arg)
		{
			return (return (BakedSolution*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_GETBAKEDSOLUTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject&* arg, float&* arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject&*, float&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		BakingState* get_State()
		{
			return (return (BakingState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_GET_STATE_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* GetPolygonBoundingBox(Il2CppObject&* arg)
		{
			return (return (::UnityEngine::Rect*(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_GETPOLYGONBOUNDINGBOX_OFFSET))(arg, nullptr);
		}

		::System::Void set_State(BakingState* arg)
		{
			((::System::Void(*)(BakingState*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(Il2CppObject&* arg, float&* arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject&*, float&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_INITIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

