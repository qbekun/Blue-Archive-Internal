#pragma once
#include "unitysdk.h"

namespace MX::Audio { class SoundManager; }

#define <COPLAYVOICEANDWAIT>D__81_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D56C70)
#define <COPLAYVOICEANDWAIT>D__81_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D56C90)
#define <COPLAYVOICEANDWAIT>D__81_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D56CA0)
#define <COPLAYVOICEANDWAIT>D__81_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D56ED0)
#define <COPLAYVOICEANDWAIT>D__81_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D56EE0)
#define <COPLAYVOICEANDWAIT>D__81_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D56F30)

	inline static constexpr unsigned int <coPlayVoiceAndWait>d__81_TypeDefinitionIndex = 20200;

	class <coPlayVoiceAndWait>d__81 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Audio::SoundManager* __4__this; // 0x20
		::System::String* path; // 0x28
		<>c__DisplayClass81_0* __8__1; // 0x30
		Il2CppObject* waitingTime; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYVOICEANDWAIT>D__81_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYVOICEANDWAIT>D__81_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYVOICEANDWAIT>D__81_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYVOICEANDWAIT>D__81_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYVOICEANDWAIT>D__81_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYVOICEANDWAIT>D__81_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

