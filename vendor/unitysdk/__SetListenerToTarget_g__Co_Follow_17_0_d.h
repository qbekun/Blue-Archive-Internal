#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class AudioListenerManager;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class WaitForEndOfFrame; }

#define <<SETLISTENERTOTARGET>G__CO_FOLLOW|17_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x20AAFC0)
#define <<SETLISTENERTOTARGET>G__CO_FOLLOW|17_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20AB270)
#define <<SETLISTENERTOTARGET>G__CO_FOLLOW|17_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20AB280)
#define <<SETLISTENERTOTARGET>G__CO_FOLLOW|17_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20AB5D0)
#define <<SETLISTENERTOTARGET>G__CO_FOLLOW|17_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20AB5E0)
#define <<SETLISTENERTOTARGET>G__CO_FOLLOW|17_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20AB630)

	inline static constexpr unsigned int <<SetListenerToTarget>g__Co_Follow|17_0>d_TypeDefinitionIndex = 3548;

	class <<SetListenerToTarget>g__Co_Follow|17_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Transform* positionTarget; // 0x20
		AudioListenerManager* __4__this; // 0x28
		::UnityEngine::Vector3* worldPositionOffset; // 0x30
		::UnityEngine::Transform* rotationTarget; // 0x40
		::UnityEngine::Vector3* fixedLookDirection; // 0x48
		::UnityEngine::WaitForEndOfFrame* _wait_5__2; // 0x58

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<SETLISTENERTOTARGET>G__CO_FOLLOW|17_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETLISTENERTOTARGET>G__CO_FOLLOW|17_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETLISTENERTOTARGET>G__CO_FOLLOW|17_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETLISTENERTOTARGET>G__CO_FOLLOW|17_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETLISTENERTOTARGET>G__CO_FOLLOW|17_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETLISTENERTOTARGET>G__CO_FOLLOW|17_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

