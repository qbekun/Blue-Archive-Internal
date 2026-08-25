#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_LIGHTANCHOR_GET_YAW_OFFSET UNITYSDK_OFFSET(0x9F7BB60)
#define UNITYENGINE_LIGHTANCHOR_SET_YAW_OFFSET UNITYSDK_OFFSET(0x9F7BB70)
#define UNITYENGINE_LIGHTANCHOR_GET_PITCH_OFFSET UNITYSDK_OFFSET(0x9F7BC40)
#define UNITYENGINE_LIGHTANCHOR_SET_PITCH_OFFSET UNITYSDK_OFFSET(0x9F7BC50)
#define UNITYENGINE_LIGHTANCHOR_GET_ROLL_OFFSET UNITYSDK_OFFSET(0x9F7BCC0)
#define UNITYENGINE_LIGHTANCHOR_SET_ROLL_OFFSET UNITYSDK_OFFSET(0x9F7BCD0)
#define UNITYENGINE_LIGHTANCHOR_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x9F7BD40)
#define UNITYENGINE_LIGHTANCHOR_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x9F7BD50)
#define UNITYENGINE_LIGHTANCHOR_GET_FRAMESPACE_OFFSET UNITYSDK_OFFSET(0x9F7BD80)
#define UNITYENGINE_LIGHTANCHOR_SET_FRAMESPACE_OFFSET UNITYSDK_OFFSET(0x9F7BD90)
#define UNITYENGINE_LIGHTANCHOR_GET_ANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x9F7BDA0)
#define UNITYENGINE_LIGHTANCHOR_GET_ANCHORPOSITIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9F7BF00)
#define UNITYENGINE_LIGHTANCHOR_SET_ANCHORPOSITIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9F7BF10)
#define UNITYENGINE_LIGHTANCHOR_GET_ANCHORPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x9F7BF20)
#define UNITYENGINE_LIGHTANCHOR_SET_ANCHORPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x9F7BF40)
#define UNITYENGINE_LIGHTANCHOR_NORMALIZEANGLEDEGREE_OFFSET UNITYSDK_OFFSET(0x9F7BBE0)
#define UNITYENGINE_LIGHTANCHOR_SYNCHRONIZEONTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9F7BF50)
#define UNITYENGINE_LIGHTANCHOR_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x9F7D7B0)
#define UNITYENGINE_LIGHTANCHOR_GETWORLDSPACEAXES_OFFSET UNITYSDK_OFFSET(0x9F7C9D0)
#define UNITYENGINE_LIGHTANCHOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F7DC80)
#define UNITYENGINE_LIGHTANCHOR_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x9F7DDF0)
#define UNITYENGINE_LIGHTANCHOR_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x9F7D870)
#define UNITYENGINE_LIGHTANCHOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F7DED0)

namespace UnityEngine
{
	inline static constexpr unsigned int LightAnchor_TypeDefinitionIndex = 33777;

	class LightAnchor : public Il2CppObject
	{
	public:
		::System::Single k_ArcRadius; // 0x0
		::System::Single k_AxisLength; // 0x0
		::System::Single k_MaxDistance; // 0x0
		::System::Single m_Distance; // 0x18
		UpDirection* m_FrameSpace; // 0x1C
		::UnityEngine::Transform* m_AnchorPositionOverride; // 0x20
		::UnityEngine::Vector3* m_AnchorPositionOffset; // 0x28
		::System::Single m_Yaw; // 0x34
		::System::Single m_Pitch; // 0x38
		::System::Single m_Roll; // 0x3C

		::System::Single get_yaw()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_GET_YAW_OFFSET))(nullptr);
		}

		::System::Void set_yaw(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_SET_YAW_OFFSET))(arg, nullptr);
		}

		::System::Single get_pitch()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_GET_PITCH_OFFSET))(nullptr);
		}

		::System::Void set_pitch(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_SET_PITCH_OFFSET))(arg, nullptr);
		}

		::System::Single get_roll()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_GET_ROLL_OFFSET))(nullptr);
		}

		::System::Void set_roll(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_SET_ROLL_OFFSET))(arg, nullptr);
		}

		::System::Single get_distance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_GET_DISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_distance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_SET_DISTANCE_OFFSET))(arg, nullptr);
		}

		UpDirection* get_frameSpace()
		{
			return (return (UpDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_GET_FRAMESPACE_OFFSET))(nullptr);
		}

		::System::Void set_frameSpace(UpDirection* arg)
		{
			((::System::Void(*)(UpDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_SET_FRAMESPACE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_anchorPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_GET_ANCHORPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_anchorPositionOverride()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_GET_ANCHORPOSITIONOVERRIDE_OFFSET))(nullptr);
		}

		::System::Void set_anchorPositionOverride(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_SET_ANCHORPOSITIONOVERRIDE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_anchorPositionOffset()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_GET_ANCHORPOSITIONOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_anchorPositionOffset(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_SET_ANCHORPOSITIONOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Single NormalizeAngleDegree(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_NORMALIZEANGLEDEGREE_OFFSET))(arg, nullptr);
		}

		::System::Void SynchronizeOnTransform(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_SYNCHRONIZEONTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateTransform(::UnityEngine::Camera* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_UPDATETRANSFORM_OFFSET))(arg, arg, nullptr);
		}

		Axes* GetWorldSpaceAxes(::UnityEngine::Camera* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (Axes*(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_GETWORLDSPACEAXES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDrawGizmosSelected()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_ONDRAWGIZMOSSELECTED_OFFSET))(nullptr);
		}

		::System::Void UpdateTransform(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_UPDATETRANSFORM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTANCHOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

