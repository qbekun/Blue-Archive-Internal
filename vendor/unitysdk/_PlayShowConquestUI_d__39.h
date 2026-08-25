#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
class ConquestEventDisplayer;

#define <PLAYSHOWCONQUESTUI>D__39_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2BC0)
#define <PLAYSHOWCONQUESTUI>D__39_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BE2BE0)
#define <PLAYSHOWCONQUESTUI>D__39_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE2BF0)
#define <PLAYSHOWCONQUESTUI>D__39_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE2D60)
#define <PLAYSHOWCONQUESTUI>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1BE2D70)
#define <PLAYSHOWCONQUESTUI>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE2DC0)

	inline static constexpr unsigned int <PlayShowConquestUI>d__39_TypeDefinitionIndex = 1514;

	class <PlayShowConquestUI>d__39 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* displayInfo; // 0x20
		ConquestEventDisplayer* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYSHOWCONQUESTUI>D__39_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSHOWCONQUESTUI>D__39_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSHOWCONQUESTUI>D__39_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSHOWCONQUESTUI>D__39_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSHOWCONQUESTUI>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSHOWCONQUESTUI>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

