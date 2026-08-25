#pragma once
#include "unitysdk.h"

class UIShiftingCraftNode;
class <>c__DisplayClass22_0;
class <>c__DisplayClass22_1;
class <>c__DisplayClass22_2;
class <>c__DisplayClass22_3;

#define <CO_PLAYNODEANIMATIONDIRECTING>D__22_.CTOR_OFFSET UNITYSDK_OFFSET(0x23AF270)
#define <CO_PLAYNODEANIMATIONDIRECTING>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x23AF8F0)
#define <CO_PLAYNODEANIMATIONDIRECTING>D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x23AF900)
#define <CO_PLAYNODEANIMATIONDIRECTING>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23B09D0)
#define <CO_PLAYNODEANIMATIONDIRECTING>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x23B09E0)
#define <CO_PLAYNODEANIMATIONDIRECTING>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23B0A30)

	inline static constexpr unsigned int <co_PlayNodeAnimationDirecting>d__22_TypeDefinitionIndex = 5218;

	class <co_PlayNodeAnimationDirecting>d__22 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIShiftingCraftNode* __4__this; // 0x20
		::System::Int64 totalFeedExp; // 0x28
		<>c__DisplayClass22_0* __8__1; // 0x30
		<>c__DisplayClass22_1* __8__2; // 0x38
		<>c__DisplayClass22_2* __8__3; // 0x40
		<>c__DisplayClass22_3* __8__4; // 0x48
		::System::Int32 _slotCapacity_5__2; // 0x50
		::System::Int64 _addedExp_5__3; // 0x58
		::System::Single _curCount_5__4; // 0x60

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYNODEANIMATIONDIRECTING>D__22_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYNODEANIMATIONDIRECTING>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYNODEANIMATIONDIRECTING>D__22_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYNODEANIMATIONDIRECTING>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYNODEANIMATIONDIRECTING>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYNODEANIMATIONDIRECTING>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

