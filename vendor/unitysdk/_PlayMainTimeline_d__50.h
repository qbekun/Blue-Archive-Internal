#pragma once
#include "unitysdk.h"

namespace MXField::Directing { class FieldInterplayBehavior; }
class <>c__DisplayClass50_0;

#define <PLAYMAINTIMELINE>D__50_.CTOR_OFFSET UNITYSDK_OFFSET(0xECAAC0)
#define <PLAYMAINTIMELINE>D__50_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xECBD60)
#define <PLAYMAINTIMELINE>D__50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xECBD70)
#define <PLAYMAINTIMELINE>D__50_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xECC230)
#define <PLAYMAINTIMELINE>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xECC240)
#define <PLAYMAINTIMELINE>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xECC290)

	inline static constexpr unsigned int <PlayMainTimeline>d__50_TypeDefinitionIndex = 10908;

	class <PlayMainTimeline>d__50 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::Directing::FieldInterplayBehavior* __4__this; // 0x20
		<>c__DisplayClass50_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYMAINTIMELINE>D__50_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYMAINTIMELINE>D__50_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYMAINTIMELINE>D__50_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYMAINTIMELINE>D__50_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYMAINTIMELINE>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYMAINTIMELINE>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

