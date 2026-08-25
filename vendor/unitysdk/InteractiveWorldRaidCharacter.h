#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace MX::Audio { class SimpleVoicePlayer; }
namespace UnityEngine { class Animator; }
class FxFollower;
class InteractiveWorldRaidDesignLevel;
class WalkState;
class InteractiveWorldRaidPath;
namespace MXPath { class Curve; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define INTERACTIVEWORLDRAIDCHARACTER_GET_DIALOGWIDGETPIVOT_OFFSET UNITYSDK_OFFSET(0x259E690)
#define INTERACTIVEWORLDRAIDCHARACTER_GET_INTERNALWALKSTATE_OFFSET UNITYSDK_OFFSET(0x25A0F70)
#define INTERACTIVEWORLDRAIDCHARACTER_ONEDGEENTER_OFFSET UNITYSDK_OFFSET(0x25A0F80)
#define INTERACTIVEWORLDRAIDCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x25A14F0)
#define INTERACTIVEWORLDRAIDCHARACTER_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x25A1500)
#define INTERACTIVEWORLDRAIDCHARACTER_RESETHALOPOSITION_OFFSET UNITYSDK_OFFSET(0x259C000)
#define INTERACTIVEWORLDRAIDCHARACTER_SETIDLE_OFFSET UNITYSDK_OFFSET(0x25A1510)
#define INTERACTIVEWORLDRAIDCHARACTER_DETACHFROMPROP_OFFSET UNITYSDK_OFFSET(0x25A1620)
#define INTERACTIVEWORLDRAIDCHARACTER_ONDESIGNLEVELLEAVE_OFFSET UNITYSDK_OFFSET(0x25A16E0)
#define INTERACTIVEWORLDRAIDCHARACTER_STARTWALK_OFFSET UNITYSDK_OFFSET(0x259B0B0)
#define INTERACTIVEWORLDRAIDCHARACTER_ENDWALK_OFFSET UNITYSDK_OFFSET(0x259B040)
#define INTERACTIVEWORLDRAIDCHARACTER_ATTACHTOPROP_OFFSET UNITYSDK_OFFSET(0x25A1760)
#define INTERACTIVEWORLDRAIDCHARACTER_SET_INTERNALWALKSTATE_OFFSET UNITYSDK_OFFSET(0x25A13F0)
#define INTERACTIVEWORLDRAIDCHARACTER_SET_ISWALKING_OFFSET UNITYSDK_OFFSET(0x25A15B0)
#define INTERACTIVEWORLDRAIDCHARACTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x25A1B40)
#define INTERACTIVEWORLDRAIDCHARACTER_GET_ISWALKING_OFFSET UNITYSDK_OFFSET(0x25A1B50)
#define INTERACTIVEWORLDRAIDCHARACTER_ONVOICEFADEOUTREQUEST_OFFSET UNITYSDK_OFFSET(0x25A1B60)
#define INTERACTIVEWORLDRAIDCHARACTER_GET_ISINTERACTINGWITHPROP_OFFSET UNITYSDK_OFFSET(0x25A1BF0)
#define INTERACTIVEWORLDRAIDCHARACTER_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x25A1C00)
#define INTERACTIVEWORLDRAIDCHARACTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x25A1C10)
#define INTERACTIVEWORLDRAIDCHARACTER_ONVERTEXSTAY_OFFSET UNITYSDK_OFFSET(0x25A1A40)
#define INTERACTIVEWORLDRAIDCHARACTER_GET_PARENTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x25A2020)
#define INTERACTIVEWORLDRAIDCHARACTER_REMOVE_PATHVERTEXENTERED_OFFSET UNITYSDK_OFFSET(0x25A2030)
#define INTERACTIVEWORLDRAIDCHARACTER_ADD_PATHVERTEXENTERED_OFFSET UNITYSDK_OFFSET(0x25A20D0)
#define INTERACTIVEWORLDRAIDCHARACTER_GET_VOICEPLAYER_OFFSET UNITYSDK_OFFSET(0x25A2170)
#define INTERACTIVEWORLDRAIDCHARACTER_ONEDGEWALK_OFFSET UNITYSDK_OFFSET(0x25A1AC0)
#define INTERACTIVEWORLDRAIDCHARACTER_ONVERTEXENTER_OFFSET UNITYSDK_OFFSET(0x25A1910)

	inline static constexpr unsigned int InteractiveWorldRaidCharacter_TypeDefinitionIndex = 327;

	class InteractiveWorldRaidCharacter : public Il2CppObject
	{
	public:
		Il2CppObject* PathVertexEntered; // 0x18
		::System::Int64 uniqueId; // 0x20
		::System::Int64 costumeId; // 0x28
		::UnityEngine::Transform* dialogWidgetPivot; // 0x30
		::MX::Audio::SimpleVoicePlayer* voicePlayer; // 0x38
		::System::Single walkSpeed; // 0x40
		::System::Boolean _isWalking; // 0x44
		::System::Boolean _isInteractingWithProp; // 0x45
		::UnityEngine::Animator* _animator; // 0x48
		FxFollower* _haloFollower; // 0x50
		InteractiveWorldRaidDesignLevel* _designLevel; // 0x58
		::UnityEngine::Transform* _parentTransform; // 0x60
		::UnityEngine::Transform* _originalParentTransform; // 0x68
		WalkState* _currWalkState; // 0x70
		WalkState* _prevWalkState; // 0x74
		InteractiveWorldRaidPath* _path; // 0x78
		Il2CppObject* _currentVertex; // 0x80
		Il2CppObject* _currentEdge; // 0x88
		::MXPath::Curve* _currentEdgeCurve; // 0x90
		::System::Boolean _needPathReset; // 0x98
		::System::Single _timer; // 0x9C
		::UnityEngine::Vector3* _positionSnapshot; // 0xA0
		::UnityEngine::Quaternion* _rotationSnapshot; // 0xAC

		::UnityEngine::Transform* get_DialogWidgetPivot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_GET_DIALOGWIDGETPIVOT_OFFSET))(nullptr);
		}

		WalkState* get_InternalWalkState()
		{
			return ((WalkState*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_GET_INTERNALWALKSTATE_OFFSET))(nullptr);
		}

		::System::Void OnEdgeEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_ONEDGEENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_GET_ANIMATOR_OFFSET))(nullptr);
		}

		::System::Void ResetHaloPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_RESETHALOPOSITION_OFFSET))(nullptr);
		}

		::System::Void SetIdle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_SETIDLE_OFFSET))(nullptr);
		}

		::System::Void DetachFromProp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_DETACHFROMPROP_OFFSET))(nullptr);
		}

		::System::Void OnDesignLevelLeave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_ONDESIGNLEVELLEAVE_OFFSET))(nullptr);
		}

		::System::Void StartWalk(InteractiveWorldRaidPath* arg)
		{
			((::System::Void(*)(InteractiveWorldRaidPath*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_STARTWALK_OFFSET))(arg, nullptr);
		}

		::System::Void EndWalk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_ENDWALK_OFFSET))(nullptr);
		}

		::System::Void AttachToProp(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_ATTACHTOPROP_OFFSET))(arg, nullptr);
		}

		::System::Void set_InternalWalkState(WalkState* arg)
		{
			((::System::Void(*)(WalkState*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_SET_INTERNALWALKSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsWalking(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_SET_ISWALKING_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWalking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_GET_ISWALKING_OFFSET))(nullptr);
		}

		::System::Void OnVoiceFadeOutRequest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_ONVOICEFADEOUTREQUEST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInteractingWithProp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_GET_ISINTERACTINGWITHPROP_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* OnVertexStay(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_ONVERTEXSTAY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_ParentTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_GET_PARENTTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void remove_PathVertexEntered(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_REMOVE_PATHVERTEXENTERED_OFFSET))(arg, nullptr);
		}

		::System::Void add_PathVertexEntered(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_ADD_PATHVERTEXENTERED_OFFSET))(arg, nullptr);
		}

		::MX::Audio::SimpleVoicePlayer* get_VoicePlayer()
		{
			return ((::MX::Audio::SimpleVoicePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_GET_VOICEPLAYER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* OnEdgeWalk(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_ONEDGEWALK_OFFSET))(arg, nullptr);
		}

		::System::Void OnVertexEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCHARACTER_ONVERTEXENTER_OFFSET))(nullptr);
		}

	};

