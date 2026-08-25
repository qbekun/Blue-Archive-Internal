#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent { class HexaDisplayInfo; }
class HexaEventDisplayer;
class <>c__DisplayClass26_0;
class HexaTileVisual;

#define <PROCESSHIDETILE>D__26_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6FD70)
#define <PROCESSHIDETILE>D__26_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF749D0)
#define <PROCESSHIDETILE>D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF749E0)
#define <PROCESSHIDETILE>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF75110)
#define <PROCESSHIDETILE>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF75120)
#define <PROCESSHIDETILE>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF75170)

	inline static constexpr unsigned int <ProcessHideTile>d__26_TypeDefinitionIndex = 810;

	class <ProcessHideTile>d__26 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* info; // 0x20
		HexaEventDisplayer* __4__this; // 0x28
		<>c__DisplayClass26_0* __8__1; // 0x30
		HexaTileVisual* _hexaTileVisual_5__2; // 0x38
		::System::Boolean _isTeleportOut_5__3; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSHIDETILE>D__26_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSHIDETILE>D__26_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSHIDETILE>D__26_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSHIDETILE>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSHIDETILE>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSHIDETILE>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

