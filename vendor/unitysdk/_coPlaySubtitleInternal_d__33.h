#pragma once
#include "unitysdk.h"

class UIPopup_CVCollectionPlayText;
class UIPopup_CVCollection;

#define <COPLAYSUBTITLEINTERNAL>D__33_.CTOR_OFFSET UNITYSDK_OFFSET(0x232BE10)
#define <COPLAYSUBTITLEINTERNAL>D__33_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x232C420)
#define <COPLAYSUBTITLEINTERNAL>D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x232C430)
#define <COPLAYSUBTITLEINTERNAL>D__33_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x232CA90)
#define <COPLAYSUBTITLEINTERNAL>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x232CAA0)
#define <COPLAYSUBTITLEINTERNAL>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x232CAF0)

	inline static constexpr unsigned int <coPlaySubtitleInternal>d__33_TypeDefinitionIndex = 4926;

	class <coPlaySubtitleInternal>d__33 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::Il2CppArray<::System::Object*>* subtitleInfoList; // 0x20
		UIPopup_CVCollectionPlayText* subtitleUI; // 0x28
		UIPopup_CVCollection* __4__this; // 0x30
		::Il2CppArray<::System::Object*>* __7__wrap1; // 0x38
		::System::Int32 __7__wrap2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSUBTITLEINTERNAL>D__33_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSUBTITLEINTERNAL>D__33_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSUBTITLEINTERNAL>D__33_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSUBTITLEINTERNAL>D__33_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSUBTITLEINTERNAL>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSUBTITLEINTERNAL>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

