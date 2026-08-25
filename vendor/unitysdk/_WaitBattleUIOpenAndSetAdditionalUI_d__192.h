#pragma once
#include "unitysdk.h"

class UIManager;
namespace MX::Logic::Battles { class GroundCommandBattleAdditionalUISet; }

#define <WAITBATTLEUIOPENANDSETADDITIONALUI>D__192_.CTOR_OFFSET UNITYSDK_OFFSET(0x2690AF0)
#define <WAITBATTLEUIOPENANDSETADDITIONALUI>D__192_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2696210)
#define <WAITBATTLEUIOPENANDSETADDITIONALUI>D__192_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2696220)
#define <WAITBATTLEUIOPENANDSETADDITIONALUI>D__192_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26962D0)
#define <WAITBATTLEUIOPENANDSETADDITIONALUI>D__192_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x26962E0)
#define <WAITBATTLEUIOPENANDSETADDITIONALUI>D__192_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2696330)

	inline static constexpr unsigned int <WaitBattleUIOpenAndSetAdditionalUI>d__192_TypeDefinitionIndex = 6805;

	class <WaitBattleUIOpenAndSetAdditionalUI>d__192 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIManager* __4__this; // 0x20
		::MX::Logic::Battles::GroundCommandBattleAdditionalUISet* additionalUISet; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <WAITBATTLEUIOPENANDSETADDITIONALUI>D__192_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITBATTLEUIOPENANDSETADDITIONALUI>D__192_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITBATTLEUIOPENANDSETADDITIONALUI>D__192_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITBATTLEUIOPENANDSETADDITIONALUI>D__192_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITBATTLEUIOPENANDSETADDITIONALUI>D__192_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITBATTLEUIOPENANDSETADDITIONALUI>D__192_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

