#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent { class HexaDisplayInfo; }
class HexaEventDisplayer;
class <>c__DisplayClass34_0;

#define <PROCESSSPAWNSTRATEGY>D__34_.CTOR_OFFSET UNITYSDK_OFFSET(0xF70650)
#define <PROCESSSPAWNSTRATEGY>D__34_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF78510)
#define <PROCESSSPAWNSTRATEGY>D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF78520)
#define <PROCESSSPAWNSTRATEGY>D__34_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF78DB0)
#define <PROCESSSPAWNSTRATEGY>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF78DC0)
#define <PROCESSSPAWNSTRATEGY>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF78E10)

	inline static constexpr unsigned int <ProcessSpawnStrategy>d__34_TypeDefinitionIndex = 825;

	class <ProcessSpawnStrategy>d__34 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* info; // 0x20
		HexaEventDisplayer* __4__this; // 0x28
		<>c__DisplayClass34_0* __8__1; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNSTRATEGY>D__34_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNSTRATEGY>D__34_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNSTRATEGY>D__34_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNSTRATEGY>D__34_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNSTRATEGY>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNSTRATEGY>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

