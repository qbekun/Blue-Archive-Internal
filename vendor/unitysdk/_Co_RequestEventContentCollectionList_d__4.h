#pragma once
#include "unitysdk.h"

class EventContentCollectionObject;
class <>c__DisplayClass4_0;

#define <CO_REQUESTEVENTCONTENTCOLLECTIONLIST>D__4_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F400)
#define <CO_REQUESTEVENTCONTENTCOLLECTIONLIST>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D0F830)
#define <CO_REQUESTEVENTCONTENTCOLLECTIONLIST>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D0F840)
#define <CO_REQUESTEVENTCONTENTCOLLECTIONLIST>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D0FA90)
#define <CO_REQUESTEVENTCONTENTCOLLECTIONLIST>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D0FAA0)
#define <CO_REQUESTEVENTCONTENTCOLLECTIONLIST>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D0FAF0)

	inline static constexpr unsigned int <Co_RequestEventContentCollectionList>d__4_TypeDefinitionIndex = 1600;

	class <Co_RequestEventContentCollectionList>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		EventContentCollectionObject* __4__this; // 0x20
		::System::Int64 eventContentId; // 0x28
		Il2CppObject* groupId; // 0x30
		<>c__DisplayClass4_0* __8__1; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTEVENTCONTENTCOLLECTIONLIST>D__4_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTEVENTCONTENTCOLLECTIONLIST>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTEVENTCONTENTCOLLECTIONLIST>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTEVENTCONTENTCOLLECTIONLIST>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTEVENTCONTENTCOLLECTIONLIST>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTEVENTCONTENTCOLLECTIONLIST>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

