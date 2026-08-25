#pragma once
#include "unitysdk.h"

class UIManager;

#define <WAITBATTLEUIOPENANDSETADDITIONALUI>D__193_.CTOR_OFFSET UNITYSDK_OFFSET(0x2690B10)
#define <WAITBATTLEUIOPENANDSETADDITIONALUI>D__193_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2696340)
#define <WAITBATTLEUIOPENANDSETADDITIONALUI>D__193_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2696350)
#define <WAITBATTLEUIOPENANDSETADDITIONALUI>D__193_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2696400)
#define <WAITBATTLEUIOPENANDSETADDITIONALUI>D__193_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2696410)
#define <WAITBATTLEUIOPENANDSETADDITIONALUI>D__193_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2696460)

	inline static constexpr unsigned int <WaitBattleUIOpenAndSetAdditionalUI>d__193_TypeDefinitionIndex = 6806;

	class <WaitBattleUIOpenAndSetAdditionalUI>d__193 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIManager* __4__this; // 0x20
		::System::String* uiPath; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <WAITBATTLEUIOPENANDSETADDITIONALUI>D__193_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITBATTLEUIOPENANDSETADDITIONALUI>D__193_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITBATTLEUIOPENANDSETADDITIONALUI>D__193_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITBATTLEUIOPENANDSETADDITIONALUI>D__193_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITBATTLEUIOPENANDSETADDITIONALUI>D__193_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITBATTLEUIOPENANDSETADDITIONALUI>D__193_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

