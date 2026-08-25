#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class LensSettings; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace Cinemachine { class CameraState; }
namespace UnityEngine { class Object; }

#define CINEMACHINE_CAMERASTATE_GET_HASLOOKAT_OFFSET UNITYSDK_OFFSET(0x28516B0)
#define CINEMACHINE_CAMERASTATE_INTERPOLATEFOV_OFFSET UNITYSDK_OFFSET(0x28516F0)
#define CINEMACHINE_CAMERASTATE_GET_NUMCUSTOMBLENDABLES_OFFSET UNITYSDK_OFFSET(0x28518B0)
#define CINEMACHINE_CAMERASTATE_APPLYROTBLENDHINT_OFFSET UNITYSDK_OFFSET(0x28518C0)
#define CINEMACHINE_CAMERASTATE_SET_NUMCUSTOMBLENDABLES_OFFSET UNITYSDK_OFFSET(0x2851910)
#define CINEMACHINE_CAMERASTATE_GET_CORRECTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x2851920)
#define CINEMACHINE_CAMERASTATE_GETCUSTOMBLENDABLE_OFFSET UNITYSDK_OFFSET(0x2851950)
#define CINEMACHINE_CAMERASTATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2851A40)
#define CINEMACHINE_CAMERASTATE_ADDCUSTOMBLENDABLE_OFFSET UNITYSDK_OFFSET(0x2851A90)
#define CINEMACHINE_CAMERASTATE_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x2851F90)
#define CINEMACHINE_CAMERASTATE_FINDCUSTOMBLENDABLE_OFFSET UNITYSDK_OFFSET(0x2851DC0)
#define CINEMACHINE_CAMERASTATE_GET_FINALPOSITION_OFFSET UNITYSDK_OFFSET(0x2852300)
#define CINEMACHINE_CAMERASTATE_INTERPOLATEPOSITION_OFFSET UNITYSDK_OFFSET(0x2852330)
#define CINEMACHINE_CAMERASTATE_LERP_OFFSET UNITYSDK_OFFSET(0x28527A0)
#define CINEMACHINE_CAMERASTATE_GET_FINALORIENTATION_OFFSET UNITYSDK_OFFSET(0x2854DA0)
#define CINEMACHINE_CAMERASTATE_APPLYPOSBLENDHINT_OFFSET UNITYSDK_OFFSET(0x2854D40)
#define CINEMACHINE_CAMERASTATE_GET_CORRECTEDORIENTATION_OFFSET UNITYSDK_OFFSET(0x28550D0)

namespace Cinemachine
{
	inline static constexpr unsigned int CameraState_TypeDefinitionIndex = 34279;

	class CameraState : public Il2CppObject
	{
	public:
		::Cinemachine::LensSettings* Lens; // 0x10
		::UnityEngine::Vector3* ReferenceUp; // 0x40
		::UnityEngine::Vector3* ReferenceLookAt; // 0x4C
		::UnityEngine::Vector3* kNoPoint; // 0x0
		::UnityEngine::Vector3* RawPosition; // 0x58
		::UnityEngine::Quaternion* RawOrientation; // 0x64
		::UnityEngine::Vector3* PositionDampingBypass; // 0x74
		::System::Single ShotQuality; // 0x80
		::UnityEngine::Vector3* PositionCorrection; // 0x84
		::UnityEngine::Quaternion* OrientationCorrection; // 0x90
		BlendHintValue* BlendHint; // 0xA0
		CustomBlendable* mCustom0; // 0xA8
		CustomBlendable* mCustom1; // 0xB8
		CustomBlendable* mCustom2; // 0xC8
		CustomBlendable* mCustom3; // 0xD8
		Il2CppObject* m_CustomOverflow; // 0xE8
		::System::Int32 _NumCustomBlendables_k__BackingField; // 0xF0

		::System::Boolean get_HasLookAt()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_HASLOOKAT_OFFSET))(nullptr);
		}

		::System::Single InterpolateFOV(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_INTERPOLATEFOV_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_NumCustomBlendables()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_NUMCUSTOMBLENDABLES_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* ApplyRotBlendHint(::UnityEngine::Quaternion* arg, BlendHintValue* arg, ::UnityEngine::Quaternion* arg, BlendHintValue* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, BlendHintValue*, ::UnityEngine::Quaternion*, BlendHintValue*, ::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_APPLYROTBLENDHINT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void set_NumCustomBlendables(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_NUMCUSTOMBLENDABLES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_CorrectedPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_CORRECTEDPOSITION_OFFSET))(nullptr);
		}

		CustomBlendable* GetCustomBlendable(::System::Int32 arg)
		{
			return (return (CustomBlendable*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GETCUSTOMBLENDABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void AddCustomBlendable(CustomBlendable* arg)
		{
			((::System::Void(*)(CustomBlendable*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_ADDCUSTOMBLENDABLE_OFFSET))(arg, nullptr);
		}

		::Cinemachine::CameraState* get_Default()
		{
			return (return (::Cinemachine::CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_DEFAULT_OFFSET))(nullptr);
		}

		::System::Int32 FindCustomBlendable(::UnityEngine::Object* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_FINDCUSTOMBLENDABLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_FinalPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_FINALPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* InterpolatePosition(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_INTERPOLATEPOSITION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Cinemachine::CameraState* Lerp(::Cinemachine::CameraState* arg, ::Cinemachine::CameraState* arg, ::System::Single arg)
		{
			return (return (::Cinemachine::CameraState*(*)(::Cinemachine::CameraState*, ::Cinemachine::CameraState*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* get_FinalOrientation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_FINALORIENTATION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* ApplyPosBlendHint(::UnityEngine::Vector3* arg, BlendHintValue* arg, ::UnityEngine::Vector3* arg, BlendHintValue* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, BlendHintValue*, ::UnityEngine::Vector3*, BlendHintValue*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_APPLYPOSBLENDHINT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* get_CorrectedOrientation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_CORRECTEDORIENTATION_OFFSET))(nullptr);
		}

	};
}

