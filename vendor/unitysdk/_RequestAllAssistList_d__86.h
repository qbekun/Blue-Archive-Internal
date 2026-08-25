#pragma once
#include "unitysdk.h"

class UIPopup_Formation_CharEdit;
namespace FlatData { class EchelonType; }
class ClanAllAssistListNetworkTask;

#define <REQUESTALLASSISTLIST>D__86_.CTOR_OFFSET UNITYSDK_OFFSET(0x255E9B0)
#define <REQUESTALLASSISTLIST>D__86_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x255E9D0)
#define <REQUESTALLASSISTLIST>D__86_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x255E9E0)
#define <REQUESTALLASSISTLIST>D__86_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x255ECA0)
#define <REQUESTALLASSISTLIST>D__86_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x255ECB0)
#define <REQUESTALLASSISTLIST>D__86_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x255ED00)

	inline static constexpr unsigned int <RequestAllAssistList>d__86_TypeDefinitionIndex = 6108;

	class <RequestAllAssistList>d__86 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPopup_Formation_CharEdit* __4__this; // 0x20
		::FlatData::EchelonType* echelonType; // 0x28
		ClanAllAssistListNetworkTask* _task_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <REQUESTALLASSISTLIST>D__86_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTALLASSISTLIST>D__86_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTALLASSISTLIST>D__86_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTALLASSISTLIST>D__86_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTALLASSISTLIST>D__86_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTALLASSISTLIST>D__86_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

