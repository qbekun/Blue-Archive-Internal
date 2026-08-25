#pragma once
#include "unitysdk.h"

class UIPopup_Conquest_Operation_CharEdit;
namespace FlatData { class EchelonType; }
class ClanAllAssistListNetworkTask;

#define <REQUESTALLASSISTLIST>D__65_.CTOR_OFFSET UNITYSDK_OFFSET(0x237E3E0)
#define <REQUESTALLASSISTLIST>D__65_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x23838E0)
#define <REQUESTALLASSISTLIST>D__65_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x23838F0)
#define <REQUESTALLASSISTLIST>D__65_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2383BB0)
#define <REQUESTALLASSISTLIST>D__65_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2383BC0)
#define <REQUESTALLASSISTLIST>D__65_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2383C10)

	inline static constexpr unsigned int <RequestAllAssistList>d__65_TypeDefinitionIndex = 5106;

	class <RequestAllAssistList>d__65 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPopup_Conquest_Operation_CharEdit* __4__this; // 0x20
		::FlatData::EchelonType* _echelonType; // 0x28
		ClanAllAssistListNetworkTask* _task_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <REQUESTALLASSISTLIST>D__65_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTALLASSISTLIST>D__65_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTALLASSISTLIST>D__65_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTALLASSISTLIST>D__65_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTALLASSISTLIST>D__65_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTALLASSISTLIST>D__65_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

