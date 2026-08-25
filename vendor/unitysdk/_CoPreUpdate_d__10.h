#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class GaugeStat; }
namespace MX::Logic::Coroutine { class WaitForPreUpdate; }

#define <COPREUPDATE>D__10_.CTOR_OFFSET UNITYSDK_OFFSET(0x140BB40)
#define <COPREUPDATE>D__10_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x140BD60)
#define <COPREUPDATE>D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x140BD70)
#define <COPREUPDATE>D__10_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x140C0B0)
#define <COPREUPDATE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x140C0C0)
#define <COPREUPDATE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x140C110)

	inline static constexpr unsigned int <CoPreUpdate>d__10_TypeDefinitionIndex = 14711;

	class <CoPreUpdate>d__10 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Skills::LogicEffects::GaugeStat* __4__this; // 0x20
		::MX::Logic::Coroutine::WaitForPreUpdate* _waitFor_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPREUPDATE>D__10_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPREUPDATE>D__10_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPREUPDATE>D__10_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPREUPDATE>D__10_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPREUPDATE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPREUPDATE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

