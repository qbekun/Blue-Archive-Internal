#pragma once
#include "unitysdk.h"

class UIStageSelect;
class SpringPanel;

#define <CODISAPPEARSUBSTAGEITEM>D__83_.CTOR_OFFSET UNITYSDK_OFFSET(0xB218A0)
#define <CODISAPPEARSUBSTAGEITEM>D__83_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB239D0)
#define <CODISAPPEARSUBSTAGEITEM>D__83_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB239E0)
#define <CODISAPPEARSUBSTAGEITEM>D__83_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB242A0)
#define <CODISAPPEARSUBSTAGEITEM>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB242B0)
#define <CODISAPPEARSUBSTAGEITEM>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB24300)

	inline static constexpr unsigned int <CoDisappearSubStageItem>d__83_TypeDefinitionIndex = 8251;

	class <CoDisappearSubStageItem>d__83 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int64 stageId; // 0x20
		UIStageSelect* __4__this; // 0x28
		Il2CppObject* _items_5__2; // 0x30
		::System::Int32 _startIndex_5__3; // 0x38
		SpringPanel* _springPanel_5__4; // 0x40
		::System::Single _elapsedTime_5__5; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CODISAPPEARSUBSTAGEITEM>D__83_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODISAPPEARSUBSTAGEITEM>D__83_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODISAPPEARSUBSTAGEITEM>D__83_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODISAPPEARSUBSTAGEITEM>D__83_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODISAPPEARSUBSTAGEITEM>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODISAPPEARSUBSTAGEITEM>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

