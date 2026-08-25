#pragma once
#include "unitysdk.h"

namespace MX::Logic::Coroutine { class WaitForLateUpdate; }

#define <COUSETARGETSLOTSKILLCOUNTCHECK>D__64_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <COUSETARGETSLOTSKILLCOUNTCHECK>D__64_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define <COUSETARGETSLOTSKILLCOUNTCHECK>D__64_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <COUSETARGETSLOTSKILLCOUNTCHECK>D__64_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <COUSETARGETSLOTSKILLCOUNTCHECK>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define <COUSETARGETSLOTSKILLCOUNTCHECK>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <CoUseTargetSlotSkillCountCheck>d__64_TypeDefinitionIndex = 13286;

	class <CoUseTargetSlotSkillCountCheck>d__64 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Object* __2__current; // 0x0
		Il2CppObject* __4__this; // 0x0
		Il2CppObject* skillSlots; // 0x0
		::System::Action* ElapsedCount; // 0x0
		Il2CppObject* __8__1; // 0x0
		::System::Int32 checkCount; // 0x0
		::System::Action* OnEnd; // 0x0
		::MX::Logic::Coroutine::WaitForLateUpdate* _waitFor_5__2; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COUSETARGETSLOTSKILLCOUNTCHECK>D__64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUSETARGETSLOTSKILLCOUNTCHECK>D__64_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUSETARGETSLOTSKILLCOUNTCHECK>D__64_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUSETARGETSLOTSKILLCOUNTCHECK>D__64_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUSETARGETSLOTSKILLCOUNTCHECK>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUSETARGETSLOTSKILLCOUNTCHECK>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

