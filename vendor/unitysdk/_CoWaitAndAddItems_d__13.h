#pragma once
#include "unitysdk.h"

class UILobbyEventScrollController;
namespace UnityEngine { class WaitForEndOfFrame; }
namespace UnityEngine { class WaitForSeconds; }

#define <COWAITANDADDITEMS>D__13_.CTOR_OFFSET UNITYSDK_OFFSET(0x266F560)
#define <COWAITANDADDITEMS>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x266FD10)
#define <COWAITANDADDITEMS>D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x266FD20)
#define <COWAITANDADDITEMS>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x266FF40)
#define <COWAITANDADDITEMS>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x266FF50)
#define <COWAITANDADDITEMS>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x266FFA0)

	inline static constexpr unsigned int <CoWaitAndAddItems>d__13_TypeDefinitionIndex = 6700;

	class <CoWaitAndAddItems>d__13 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UILobbyEventScrollController* __4__this; // 0x20
		::UnityEngine::WaitForEndOfFrame* _wait_5__2; // 0x28
		::UnityEngine::WaitForSeconds* _waitForSeconds_5__3; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COWAITANDADDITEMS>D__13_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITANDADDITEMS>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITANDADDITEMS>D__13_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITANDADDITEMS>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITANDADDITEMS>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITANDADDITEMS>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

