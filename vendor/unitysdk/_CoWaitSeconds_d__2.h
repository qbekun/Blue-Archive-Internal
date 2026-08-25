#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandWaitSeconds; }
namespace MX::Logic::Coroutine { class WaitForPreUpdate; }

#define <COWAITSECONDS>D__2_.CTOR_OFFSET UNITYSDK_OFFSET(0x132BED0)
#define <COWAITSECONDS>D__2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x132C880)
#define <COWAITSECONDS>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x132C890)
#define <COWAITSECONDS>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x132C9E0)
#define <COWAITSECONDS>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x132C9F0)
#define <COWAITSECONDS>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x132CA40)

	inline static constexpr unsigned int <CoWaitSeconds>d__2_TypeDefinitionIndex = 14258;

	class <CoWaitSeconds>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Battles::GroundCommandWaitSeconds* __4__this; // 0x20
		::MX::Logic::Coroutine::WaitForPreUpdate* _wait_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COWAITSECONDS>D__2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITSECONDS>D__2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITSECONDS>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITSECONDS>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITSECONDS>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITSECONDS>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

