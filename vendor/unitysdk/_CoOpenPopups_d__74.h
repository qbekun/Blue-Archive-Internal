#pragma once
#include "unitysdk.h"

class UIDefeat;
class UIBattleResult;

#define <COOPENPOPUPS>D__74_.CTOR_OFFSET UNITYSDK_OFFSET(0x23C9F60)
#define <COOPENPOPUPS>D__74_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x23D03C0)
#define <COOPENPOPUPS>D__74_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x23D03D0)
#define <COOPENPOPUPS>D__74_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23D09F0)
#define <COOPENPOPUPS>D__74_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x23D0A00)
#define <COOPENPOPUPS>D__74_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23D0A50)

	inline static constexpr unsigned int <CoOpenPopups>d__74_TypeDefinitionIndex = 5300;

	class <CoOpenPopups>d__74 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIDefeat* __4__this; // 0x20
		::System::Int32 _popupIndex_5__2; // 0x28
		UIBattleResult* _uiBattleResult_5__3; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COOPENPOPUPS>D__74_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENPOPUPS>D__74_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENPOPUPS>D__74_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENPOPUPS>D__74_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENPOPUPS>D__74_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENPOPUPS>D__74_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

