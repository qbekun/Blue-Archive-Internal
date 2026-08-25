#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Coroutine { class WaitForSeconds; }

#define <COSUMMONEDCOUNTCHECKER>D__758_.CTOR_OFFSET UNITYSDK_OFFSET(0x1136270)
#define <COSUMMONEDCOUNTCHECKER>D__758_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1136290)
#define <COSUMMONEDCOUNTCHECKER>D__758_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11362A0)
#define <COSUMMONEDCOUNTCHECKER>D__758_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11363B0)
#define <COSUMMONEDCOUNTCHECKER>D__758_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x11363C0)
#define <COSUMMONEDCOUNTCHECKER>D__758_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1136410)

	inline static constexpr unsigned int <CoSummonedCountChecker>d__758_TypeDefinitionIndex = 13078;

	class <CoSummonedCountChecker>d__758 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int64 aiPhase; // 0x20
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* __4__this; // 0x28
		::MX::Logic::Coroutine::WaitForSeconds* _waitFor_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSUMMONEDCOUNTCHECKER>D__758_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSUMMONEDCOUNTCHECKER>D__758_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSUMMONEDCOUNTCHECKER>D__758_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSUMMONEDCOUNTCHECKER>D__758_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSUMMONEDCOUNTCHECKER>D__758_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSUMMONEDCOUNTCHECKER>D__758_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

