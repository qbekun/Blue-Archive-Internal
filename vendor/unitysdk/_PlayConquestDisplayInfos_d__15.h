#pragma once
#include "unitysdk.h"

class ConquestEventDisplayer;

#define <PLAYCONQUESTDISPLAYINFOS>D__15_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BDBD70)
#define <PLAYCONQUESTDISPLAYINFOS>D__15_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BDBD90)
#define <PLAYCONQUESTDISPLAYINFOS>D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BDBDA0)
#define <PLAYCONQUESTDISPLAYINFOS>D__15_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BDC770)
#define <PLAYCONQUESTDISPLAYINFOS>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1BDC780)
#define <PLAYCONQUESTDISPLAYINFOS>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BDC7D0)

	inline static constexpr unsigned int <PlayConquestDisplayInfos>d__15_TypeDefinitionIndex = 1480;

	class <PlayConquestDisplayInfos>d__15 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Il2CppObject* conquestDisplayInfos; // 0x20
		ConquestEventDisplayer* __4__this; // 0x28
		::System::Int32 _i_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYCONQUESTDISPLAYINFOS>D__15_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCONQUESTDISPLAYINFOS>D__15_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCONQUESTDISPLAYINFOS>D__15_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCONQUESTDISPLAYINFOS>D__15_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCONQUESTDISPLAYINFOS>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCONQUESTDISPLAYINFOS>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

