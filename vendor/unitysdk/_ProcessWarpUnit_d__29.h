#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent { class HexaDisplayInfo; }
class HexaEventDisplayer;
class <>c__DisplayClass29_0;
class HexaUnitVisual;
class HexaTileVisual;
class DynamicCharacter;

#define <PROCESSWARPUNIT>D__29_.CTOR_OFFSET UNITYSDK_OFFSET(0xF70A10)
#define <PROCESSWARPUNIT>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF765F0)
#define <PROCESSWARPUNIT>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF76600)
#define <PROCESSWARPUNIT>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF76BE0)
#define <PROCESSWARPUNIT>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF76BF0)
#define <PROCESSWARPUNIT>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF76C40)

	inline static constexpr unsigned int <ProcessWarpUnit>d__29_TypeDefinitionIndex = 816;

	class <ProcessWarpUnit>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* info; // 0x20
		HexaEventDisplayer* __4__this; // 0x28
		<>c__DisplayClass29_0* __8__1; // 0x30
		HexaUnitVisual* _hexaUnitVisual_5__2; // 0x38
		HexaTileVisual* _toTileVisual_5__3; // 0x40
		DynamicCharacter* _dc_5__4; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSWARPUNIT>D__29_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSWARPUNIT>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSWARPUNIT>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSWARPUNIT>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSWARPUNIT>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSWARPUNIT>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

