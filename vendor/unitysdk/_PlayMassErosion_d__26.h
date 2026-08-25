#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
class ConquestEventDisplayer;
class <>c__DisplayClass26_0;
namespace MX::Data { class ConquestErosionExcelData; }

#define <PLAYMASSEROSION>D__26_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BDFA00)
#define <PLAYMASSEROSION>D__26_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BDFA20)
#define <PLAYMASSEROSION>D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BDFA30)
#define <PLAYMASSEROSION>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE03C0)
#define <PLAYMASSEROSION>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1BE03D0)
#define <PLAYMASSEROSION>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE0420)

	inline static constexpr unsigned int <PlayMassErosion>d__26_TypeDefinitionIndex = 1497;

	class <PlayMassErosion>d__26 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* displayInfo; // 0x20
		ConquestEventDisplayer* __4__this; // 0x28
		<>c__DisplayClass26_0* __8__1; // 0x30
		::System::Int64 _erosionId_5__2; // 0x38
		::MX::Data::ConquestErosionExcelData* _erosionExcel_5__3; // 0x40
		::System::Int32 _step_5__4; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYMASSEROSION>D__26_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYMASSEROSION>D__26_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYMASSEROSION>D__26_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYMASSEROSION>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYMASSEROSION>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYMASSEROSION>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

