#pragma once
#include "unitysdk.h"

class UIConquest;

#define <COMOVECAMERATOSTEP>D__180_.CTOR_OFFSET UNITYSDK_OFFSET(0x23524E0)
#define <COMOVECAMERATOSTEP>D__180_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x235F8D0)
#define <COMOVECAMERATOSTEP>D__180_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x235F8E0)
#define <COMOVECAMERATOSTEP>D__180_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x235FBB0)
#define <COMOVECAMERATOSTEP>D__180_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x235FBC0)
#define <COMOVECAMERATOSTEP>D__180_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x235FC10)

	inline static constexpr unsigned int <CoMoveCameraToStep>d__180_TypeDefinitionIndex = 5036;

	class <CoMoveCameraToStep>d__180 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIConquest* __4__this; // 0x20
		::System::Int32 step; // 0x28
		::System::Action* onMoveEnd; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COMOVECAMERATOSTEP>D__180_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVECAMERATOSTEP>D__180_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVECAMERATOSTEP>D__180_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVECAMERATOSTEP>D__180_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVECAMERATOSTEP>D__180_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVECAMERATOSTEP>D__180_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

