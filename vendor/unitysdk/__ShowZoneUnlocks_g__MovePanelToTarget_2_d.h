#pragma once
#include "unitysdk.h"

class <>c__DisplayClass26_0;
class UIAcademyZoneBase;
namespace UnityEngine { class WaitForEndOfFrame; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define <<SHOWZONEUNLOCKS>G__MOVEPANELTOTARGET|2>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x21B6890)
#define <<SHOWZONEUNLOCKS>G__MOVEPANELTOTARGET|2>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x21B68B0)
#define <<SHOWZONEUNLOCKS>G__MOVEPANELTOTARGET|2>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x21B68C0)
#define <<SHOWZONEUNLOCKS>G__MOVEPANELTOTARGET|2>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21B6C30)
#define <<SHOWZONEUNLOCKS>G__MOVEPANELTOTARGET|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x21B6C40)
#define <<SHOWZONEUNLOCKS>G__MOVEPANELTOTARGET|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21B6C90)

	inline static constexpr unsigned int <<ShowZoneUnlocks>g__MovePanelToTarget|2>d_TypeDefinitionIndex = 4189;

	class <<ShowZoneUnlocks>g__MovePanelToTarget|2>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass26_0* __4__this; // 0x20
		UIAcademyZoneBase* target; // 0x28
		::System::Single _elapsed_5__2; // 0x30
		::UnityEngine::WaitForEndOfFrame* _eof_5__3; // 0x38
		::UnityEngine::Transform* _locationTransform_5__4; // 0x40
		::UnityEngine::Vector3* _totalDist_5__5; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<SHOWZONEUNLOCKS>G__MOVEPANELTOTARGET|2>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SHOWZONEUNLOCKS>G__MOVEPANELTOTARGET|2>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SHOWZONEUNLOCKS>G__MOVEPANELTOTARGET|2>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SHOWZONEUNLOCKS>G__MOVEPANELTOTARGET|2>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SHOWZONEUNLOCKS>G__MOVEPANELTOTARGET|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SHOWZONEUNLOCKS>G__MOVEPANELTOTARGET|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

