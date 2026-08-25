#pragma once
#include "unitysdk.h"

class UIInteractiveWorldRaidLobbyTicketButton;

#define <CORESTORETIMETOOLTIPCLOSETIMER>D__18_.CTOR_OFFSET UNITYSDK_OFFSET(0x262B340)
#define <CORESTORETIMETOOLTIPCLOSETIMER>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x262C500)
#define <CORESTORETIMETOOLTIPCLOSETIMER>D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x262C510)
#define <CORESTORETIMETOOLTIPCLOSETIMER>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x262C5D0)
#define <CORESTORETIMETOOLTIPCLOSETIMER>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x262C5E0)
#define <CORESTORETIMETOOLTIPCLOSETIMER>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x262C630)

	inline static constexpr unsigned int <CoRestoreTimeTooltipCloseTimer>d__18_TypeDefinitionIndex = 6551;

	class <CoRestoreTimeTooltipCloseTimer>d__18 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIInteractiveWorldRaidLobbyTicketButton* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CORESTORETIMETOOLTIPCLOSETIMER>D__18_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORESTORETIMETOOLTIPCLOSETIMER>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORESTORETIMETOOLTIPCLOSETIMER>D__18_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORESTORETIMETOOLTIPCLOSETIMER>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORESTORETIMETOOLTIPCLOSETIMER>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORESTORETIMETOOLTIPCLOSETIMER>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

