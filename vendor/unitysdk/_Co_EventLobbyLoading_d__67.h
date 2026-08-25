#pragma once
#include "unitysdk.h"

namespace MXField { class FieldBridge; }
class <>c__DisplayClass67_1;
class <>c__DisplayClass67_0;

#define <CO_EVENTLOBBYLOADING>D__67_.CTOR_OFFSET UNITYSDK_OFFSET(0xE63550)
#define <CO_EVENTLOBBYLOADING>D__67_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE66F80)
#define <CO_EVENTLOBBYLOADING>D__67_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE66F90)
#define <CO_EVENTLOBBYLOADING>D__67_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE675C0)
#define <CO_EVENTLOBBYLOADING>D__67_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE675D0)
#define <CO_EVENTLOBBYLOADING>D__67_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE67620)

	inline static constexpr unsigned int <Co_EventLobbyLoading>d__67_TypeDefinitionIndex = 10496;

	class <Co_EventLobbyLoading>d__67 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::FieldBridge* __4__this; // 0x20
		<>c__DisplayClass67_1* __8__1; // 0x28
		::System::Int64 eventContentId; // 0x30
		<>c__DisplayClass67_0* __8__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_EVENTLOBBYLOADING>D__67_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_EVENTLOBBYLOADING>D__67_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_EVENTLOBBYLOADING>D__67_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_EVENTLOBBYLOADING>D__67_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_EVENTLOBBYLOADING>D__67_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_EVENTLOBBYLOADING>D__67_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

