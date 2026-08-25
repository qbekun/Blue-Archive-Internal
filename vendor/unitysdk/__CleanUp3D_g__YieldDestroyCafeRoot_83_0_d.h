#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UIBase;

#define <<CLEANUP3D>G__YIELDDESTROYCAFEROOT|83_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2276130)
#define <<CLEANUP3D>G__YIELDDESTROYCAFEROOT|83_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x227B430)
#define <<CLEANUP3D>G__YIELDDESTROYCAFEROOT|83_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x227B440)
#define <<CLEANUP3D>G__YIELDDESTROYCAFEROOT|83_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x227B630)
#define <<CLEANUP3D>G__YIELDDESTROYCAFEROOT|83_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x227B640)
#define <<CLEANUP3D>G__YIELDDESTROYCAFEROOT|83_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x227B690)

	inline static constexpr unsigned int <<CleanUp3D>g__YieldDestroyCafeRoot|83_0>d_TypeDefinitionIndex = 4643;

	class <<CleanUp3D>g__YieldDestroyCafeRoot|83_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::GameObject* objectToDestroy; // 0x20
		UIBase* _ui_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<CLEANUP3D>G__YIELDDESTROYCAFEROOT|83_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CLEANUP3D>G__YIELDDESTROYCAFEROOT|83_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CLEANUP3D>G__YIELDDESTROYCAFEROOT|83_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CLEANUP3D>G__YIELDDESTROYCAFEROOT|83_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CLEANUP3D>G__YIELDDESTROYCAFEROOT|83_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CLEANUP3D>G__YIELDDESTROYCAFEROOT|83_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

