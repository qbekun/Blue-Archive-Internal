#pragma once
#include "unitysdk.h"

class HexaEventDisplayer;
namespace MX::Campaign::HexaTileMapEvent { class HexaDisplayInfo; }
class HexaTileVisual;

#define <PROCESSSPAWNTILE>D__25_.CTOR_OFFSET UNITYSDK_OFFSET(0xF70330)
#define <PROCESSSPAWNTILE>D__25_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF744A0)
#define <PROCESSSPAWNTILE>D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF744B0)
#define <PROCESSSPAWNTILE>D__25_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF74890)
#define <PROCESSSPAWNTILE>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF748A0)
#define <PROCESSSPAWNTILE>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF748F0)

	inline static constexpr unsigned int <ProcessSpawnTile>d__25_TypeDefinitionIndex = 808;

	class <ProcessSpawnTile>d__25 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		HexaEventDisplayer* __4__this; // 0x20
		::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* info; // 0x28
		HexaTileVisual* _hexaTileVisual_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNTILE>D__25_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNTILE>D__25_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNTILE>D__25_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNTILE>D__25_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNTILE>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNTILE>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

