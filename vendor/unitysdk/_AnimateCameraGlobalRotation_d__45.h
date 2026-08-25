#pragma once
#include "unitysdk.h"

class InteractiveWorldRaidCameraManager;
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class AnimationCurve; }

#define <ANIMATECAMERAGLOBALROTATION>D__45_.CTOR_OFFSET UNITYSDK_OFFSET(0x2603EA0)
#define <ANIMATECAMERAGLOBALROTATION>D__45_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2606920)
#define <ANIMATECAMERAGLOBALROTATION>D__45_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2606940)
#define <ANIMATECAMERAGLOBALROTATION>D__45___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x2606B70)
#define <ANIMATECAMERAGLOBALROTATION>D__45_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2606C70)
#define <ANIMATECAMERAGLOBALROTATION>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2606C80)
#define <ANIMATECAMERAGLOBALROTATION>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2606CD0)

	inline static constexpr unsigned int <AnimateCameraGlobalRotation>d__45_TypeDefinitionIndex = 6475;

	class <AnimateCameraGlobalRotation>d__45 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		InteractiveWorldRaidCameraManager* __4__this; // 0x20
		::UnityEngine::Quaternion* from; // 0x28
		::UnityEngine::Quaternion* to; // 0x38
		::UnityEngine::AnimationCurve* aniCurve; // 0x48
		::System::Single interpolationTime; // 0x50
		::System::Single _interpolationT_5__2; // 0x54

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ANIMATECAMERAGLOBALROTATION>D__45_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATECAMERAGLOBALROTATION>D__45_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATECAMERAGLOBALROTATION>D__45_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATECAMERAGLOBALROTATION>D__45___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATECAMERAGLOBALROTATION>D__45_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATECAMERAGLOBALROTATION>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATECAMERAGLOBALROTATION>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

