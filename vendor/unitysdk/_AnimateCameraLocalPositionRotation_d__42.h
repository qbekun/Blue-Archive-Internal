#pragma once
#include "unitysdk.h"

class InteractiveWorldRaidCameraManager;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define <ANIMATECAMERALOCALPOSITIONROTATION>D__42_.CTOR_OFFSET UNITYSDK_OFFSET(0x2603DC0)
#define <ANIMATECAMERALOCALPOSITIONROTATION>D__42_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2605D20)
#define <ANIMATECAMERALOCALPOSITIONROTATION>D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2605D40)
#define <ANIMATECAMERALOCALPOSITIONROTATION>D__42___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x2606190)
#define <ANIMATECAMERALOCALPOSITIONROTATION>D__42_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2606250)
#define <ANIMATECAMERALOCALPOSITIONROTATION>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2606260)
#define <ANIMATECAMERALOCALPOSITIONROTATION>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26062B0)

	inline static constexpr unsigned int <AnimateCameraLocalPositionRotation>d__42_TypeDefinitionIndex = 6473;

	class <AnimateCameraLocalPositionRotation>d__42 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		InteractiveWorldRaidCameraManager* __4__this; // 0x20
		::UnityEngine::Transform* from; // 0x28
		::UnityEngine::Transform* to; // 0x30
		::UnityEngine::AnimationCurve* aniCurve; // 0x38
		::System::Single interpolationTime; // 0x40
		::System::Action* onFinished; // 0x48
		::UnityEngine::Vector3* _fromPosition_5__2; // 0x50
		::UnityEngine::Vector3* _toPosition_5__3; // 0x5C
		::UnityEngine::Quaternion* _fromRotation_5__4; // 0x68
		::UnityEngine::Quaternion* _toRotation_5__5; // 0x78
		::System::Single _interpolationT_5__6; // 0x88

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ANIMATECAMERALOCALPOSITIONROTATION>D__42_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATECAMERALOCALPOSITIONROTATION>D__42_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATECAMERALOCALPOSITIONROTATION>D__42_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATECAMERALOCALPOSITIONROTATION>D__42___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATECAMERALOCALPOSITIONROTATION>D__42_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATECAMERALOCALPOSITIONROTATION>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATECAMERALOCALPOSITIONROTATION>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

