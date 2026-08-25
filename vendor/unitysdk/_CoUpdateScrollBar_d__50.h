#pragma once
#include "unitysdk.h"

class FeedScrollManager;

#define <COUPDATESCROLLBAR>D__50_.CTOR_OFFSET UNITYSDK_OFFSET(0xADB230)
#define <COUPDATESCROLLBAR>D__50_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xADB250)
#define <COUPDATESCROLLBAR>D__50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xADB260)
#define <COUPDATESCROLLBAR>D__50_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xADB8C0)
#define <COUPDATESCROLLBAR>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xADB8D0)
#define <COUPDATESCROLLBAR>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xADB920)

	inline static constexpr unsigned int <CoUpdateScrollBar>d__50_TypeDefinitionIndex = 8070;

	class <CoUpdateScrollBar>d__50 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		FeedScrollManager* __4__this; // 0x20
		::System::Boolean _isVertical_5__2; // 0x28
		::System::Single _scrollBarOtherAxisInitPos_5__3; // 0x2C
		::System::Single _startPos_5__4; // 0x30
		::System::Single _endPos_5__5; // 0x34

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COUPDATESCROLLBAR>D__50_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATESCROLLBAR>D__50_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATESCROLLBAR>D__50_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATESCROLLBAR>D__50_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATESCROLLBAR>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATESCROLLBAR>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

