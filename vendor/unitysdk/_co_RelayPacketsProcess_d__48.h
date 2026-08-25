#pragma once
#include "unitysdk.h"

class <>c__DisplayClass48_0;
class LoginTask;
class <>c__DisplayClass48_1;
class ProofTokenSubmitNetworkTask;
namespace Assets::_MX::Program::Scripts::Network { class SessionTask; }

#define <CO_RELAYPACKETSPROCESS>D__48_.CTOR_OFFSET UNITYSDK_OFFSET(0x201EFD0)
#define <CO_RELAYPACKETSPROCESS>D__48_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x201EFF0)
#define <CO_RELAYPACKETSPROCESS>D__48_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x201F000)
#define <CO_RELAYPACKETSPROCESS>D__48_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x201FDF0)
#define <CO_RELAYPACKETSPROCESS>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x201FE00)
#define <CO_RELAYPACKETSPROCESS>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x201FE50)

	inline static constexpr unsigned int <co_RelayPacketsProcess>d__48_TypeDefinitionIndex = 3169;

	class <co_RelayPacketsProcess>d__48 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass48_0* __8__1; // 0x20
		LoginTask* __4__this; // 0x28
		<>c__DisplayClass48_1* __8__2; // 0x30
		::System::Boolean _alreadyErrorAction_5__2; // 0x38
		Il2CppObject* _taskQueue_5__3; // 0x40
		ProofTokenSubmitNetworkTask* _submitTask_5__4; // 0x48
		::Assets::_MX::Program::Scripts::Network::SessionTask* _task_5__5; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_RELAYPACKETSPROCESS>D__48_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_RELAYPACKETSPROCESS>D__48_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_RELAYPACKETSPROCESS>D__48_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_RELAYPACKETSPROCESS>D__48_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_RELAYPACKETSPROCESS>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_RELAYPACKETSPROCESS>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

