#pragma once
#include "unitysdk.h"

class UICampaign;
namespace MX::Campaign { class Strategy; }
class <>c__DisplayClass113_0;

#define <PROCESSSTRATEGY>D__113_.CTOR_OFFSET UNITYSDK_OFFSET(0x22A7AF0)
#define <PROCESSSTRATEGY>D__113_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x22A7B10)
#define <PROCESSSTRATEGY>D__113_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x22A7B20)
#define <PROCESSSTRATEGY>D__113_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22A8270)
#define <PROCESSSTRATEGY>D__113_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x22A8280)
#define <PROCESSSTRATEGY>D__113_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22A82D0)

	inline static constexpr unsigned int <ProcessStrategy>d__113_TypeDefinitionIndex = 4743;

	class <ProcessStrategy>d__113 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICampaign* __4__this; // 0x20
		::MX::Campaign::Strategy* strategyObject; // 0x28
		<>c__DisplayClass113_0* __8__1; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSTRATEGY>D__113_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSTRATEGY>D__113_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSTRATEGY>D__113_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSTRATEGY>D__113_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSTRATEGY>D__113_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSTRATEGY>D__113_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

