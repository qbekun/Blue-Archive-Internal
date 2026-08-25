#pragma once
#include "unitysdk.h"

class PropAnimationWithCameraVisual;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector3; }

#define <SWITCHCAMERATOANIMATIONCAMERA>D__14_.CTOR_OFFSET UNITYSDK_OFFSET(0x10AA720)
#define <SWITCHCAMERATOANIMATIONCAMERA>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AAA00)
#define <SWITCHCAMERATOANIMATIONCAMERA>D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10AAA10)
#define <SWITCHCAMERATOANIMATIONCAMERA>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10AACF0)
#define <SWITCHCAMERATOANIMATIONCAMERA>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x10AAD00)
#define <SWITCHCAMERATOANIMATIONCAMERA>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10AAD50)

	inline static constexpr unsigned int <SwitchCameraToAnimationCamera>d__14_TypeDefinitionIndex = 885;

	class <SwitchCameraToAnimationCamera>d__14 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		PropAnimationWithCameraVisual* __4__this; // 0x20
		::UnityEngine::Camera* originalCamera; // 0x28
		::UnityEngine::Vector3* _animationCameraFirstPos_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SWITCHCAMERATOANIMATIONCAMERA>D__14_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SWITCHCAMERATOANIMATIONCAMERA>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SWITCHCAMERATOANIMATIONCAMERA>D__14_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SWITCHCAMERATOANIMATIONCAMERA>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SWITCHCAMERATOANIMATIONCAMERA>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SWITCHCAMERATOANIMATIONCAMERA>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

