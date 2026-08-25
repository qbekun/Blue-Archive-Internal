#pragma once
#include "unitysdk.h"

namespace MXField::Directing { class FieldInterplayBehavior; }
class <>c__DisplayClass47_0;
namespace MXField::Core { class FieldPlayerController; }

#define <COMOVETOSTARTLOCATION>D__47_.CTOR_OFFSET UNITYSDK_OFFSET(0xECA4E0)
#define <COMOVETOSTARTLOCATION>D__47_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xECB4B0)
#define <COMOVETOSTARTLOCATION>D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xECB4C0)
#define <COMOVETOSTARTLOCATION>D__47_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xECB9E0)
#define <COMOVETOSTARTLOCATION>D__47_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xECB9F0)
#define <COMOVETOSTARTLOCATION>D__47_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xECBA40)

	inline static constexpr unsigned int <CoMoveToStartLocation>d__47_TypeDefinitionIndex = 10905;

	class <CoMoveToStartLocation>d__47 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::Directing::FieldInterplayBehavior* __4__this; // 0x20
		<>c__DisplayClass47_0* __8__1; // 0x28
		::MXField::Core::FieldPlayerController* _playerController_5__2; // 0x30
		::System::Single _elapsedTime_5__3; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COMOVETOSTARTLOCATION>D__47_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETOSTARTLOCATION>D__47_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETOSTARTLOCATION>D__47_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETOSTARTLOCATION>D__47_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETOSTARTLOCATION>D__47_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETOSTARTLOCATION>D__47_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

