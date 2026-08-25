#pragma once
#include "unitysdk.h"

#define <UPDATESCROLLBAR>D__58_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <UPDATESCROLLBAR>D__58_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define <UPDATESCROLLBAR>D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <UPDATESCROLLBAR>D__58_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <UPDATESCROLLBAR>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define <UPDATESCROLLBAR>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <UpdateScrollBar>d__58_TypeDefinitionIndex = 3369;

	class <UpdateScrollBar>d__58 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Object* __2__current; // 0x0
		Il2CppObject* __4__this; // 0x0
		::System::Boolean _isVertical_5__2; // 0x0
		::System::Single _contentSize_5__3; // 0x0
		::System::Single _scrollBarOtherAxisInitPos_5__4; // 0x0
		::System::Single _viewSize_5__5; // 0x0
		::System::Single _startPos_5__6; // 0x0
		::System::Single _endPos_5__7; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <UPDATESCROLLBAR>D__58_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATESCROLLBAR>D__58_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATESCROLLBAR>D__58_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATESCROLLBAR>D__58_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATESCROLLBAR>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATESCROLLBAR>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

