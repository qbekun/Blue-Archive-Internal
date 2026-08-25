#pragma once
#include "unitysdk.h"

class UISpecialOperationLobby;
namespace FlatData { class DialogCondition; }

#define <PLAYDIALOGDELAYED>D__53_.CTOR_OFFSET UNITYSDK_OFFSET(0x2460B90)
#define <PLAYDIALOGDELAYED>D__53_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2467980)
#define <PLAYDIALOGDELAYED>D__53_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2467990)
#define <PLAYDIALOGDELAYED>D__53_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2467A40)
#define <PLAYDIALOGDELAYED>D__53_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2467A50)
#define <PLAYDIALOGDELAYED>D__53_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2467AA0)

	inline static constexpr unsigned int <PlayDialogDelayed>d__53_TypeDefinitionIndex = 5608;

	class <PlayDialogDelayed>d__53 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UISpecialOperationLobby* __4__this; // 0x20
		::FlatData::DialogCondition* condition; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYDIALOGDELAYED>D__53_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYDIALOGDELAYED>D__53_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYDIALOGDELAYED>D__53_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYDIALOGDELAYED>D__53_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYDIALOGDELAYED>D__53_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYDIALOGDELAYED>D__53_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

