#pragma once
#include "unitysdk.h"

class UIConquest;
namespace FlatData { class StageDifficulty; }

#define <SWITCHCONQUESTMAP>D__172_.CTOR_OFFSET UNITYSDK_OFFSET(0x235C4F0)
#define <SWITCHCONQUESTMAP>D__172_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x235F2B0)
#define <SWITCHCONQUESTMAP>D__172_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x235F2C0)
#define <SWITCHCONQUESTMAP>D__172_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x235F620)
#define <SWITCHCONQUESTMAP>D__172_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x235F630)
#define <SWITCHCONQUESTMAP>D__172_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x235F680)

	inline static constexpr unsigned int <SwitchConquestMap>d__172_TypeDefinitionIndex = 5034;

	class <SwitchConquestMap>d__172 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIConquest* __4__this; // 0x20
		::FlatData::StageDifficulty* difficulty; // 0x28
		::System::Int32 step; // 0x2C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SWITCHCONQUESTMAP>D__172_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SWITCHCONQUESTMAP>D__172_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SWITCHCONQUESTMAP>D__172_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SWITCHCONQUESTMAP>D__172_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SWITCHCONQUESTMAP>D__172_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SWITCHCONQUESTMAP>D__172_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

