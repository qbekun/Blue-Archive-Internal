#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent { class HexaDisplayInfo; }
class HexaEventDisplayer;

#define <PROCESSSPAWNUNITFROMUNIQUEID>D__21_.CTOR_OFFSET UNITYSDK_OFFSET(0xF70AE0)
#define <PROCESSSPAWNUNITFROMUNIQUEID>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF72090)
#define <PROCESSSPAWNUNITFROMUNIQUEID>D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF720A0)
#define <PROCESSSPAWNUNITFROMUNIQUEID>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF72250)
#define <PROCESSSPAWNUNITFROMUNIQUEID>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF72260)
#define <PROCESSSPAWNUNITFROMUNIQUEID>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF722B0)

	inline static constexpr unsigned int <ProcessSpawnUnitFromUniqueId>d__21_TypeDefinitionIndex = 801;

	class <ProcessSpawnUnitFromUniqueId>d__21 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* info; // 0x20
		HexaEventDisplayer* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNUNITFROMUNIQUEID>D__21_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNUNITFROMUNIQUEID>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNUNITFROMUNIQUEID>D__21_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNUNITFROMUNIQUEID>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNUNITFROMUNIQUEID>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSPAWNUNITFROMUNIQUEID>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

