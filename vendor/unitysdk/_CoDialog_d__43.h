#pragma once
#include "unitysdk.h"

class ChatDialog;
class <>c__DisplayClass43_0;
class DialogBox;

#define <CODIALOG>D__43_.CTOR_OFFSET UNITYSDK_OFFSET(0x26371B0)
#define <CODIALOG>D__43_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2637570)
#define <CODIALOG>D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2637580)
#define <CODIALOG>D__43_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2638D90)
#define <CODIALOG>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2638DA0)
#define <CODIALOG>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2638DF0)

	inline static constexpr unsigned int <CoDialog>d__43_TypeDefinitionIndex = 6579;

	class <CoDialog>d__43 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Il2CppObject* dialogList; // 0x20
		ChatDialog* __4__this; // 0x28
		<>c__DisplayClass43_0* __8__1; // 0x30
		DialogBox* _box_5__2; // 0x38
		::System::String* _lastPlayAniName_5__3; // 0x40
		::System::Int32 _i_5__4; // 0x48
		::System::Int32 _index_5__5; // 0x4C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CODIALOG>D__43_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODIALOG>D__43_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODIALOG>D__43_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODIALOG>D__43_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODIALOG>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODIALOG>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

