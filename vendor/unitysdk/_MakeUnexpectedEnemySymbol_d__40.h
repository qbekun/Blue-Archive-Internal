#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class <>c__DisplayClass40_0;

#define <MAKEUNEXPECTEDENEMYSYMBOL>D__40_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D06DB0)
#define <MAKEUNEXPECTEDENEMYSYMBOL>D__40_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D06DD0)
#define <MAKEUNEXPECTEDENEMYSYMBOL>D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D06DE0)
#define <MAKEUNEXPECTEDENEMYSYMBOL>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D06FA0)
#define <MAKEUNEXPECTEDENEMYSYMBOL>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D06FB0)
#define <MAKEUNEXPECTEDENEMYSYMBOL>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D07000)

	inline static constexpr unsigned int <MakeUnexpectedEnemySymbol>d__40_TypeDefinitionIndex = 1564;

	class <MakeUnexpectedEnemySymbol>d__40 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Transform* parent; // 0x20
		Il2CppObject* completeCallback; // 0x28
		::System::String* enemySymbolPrefabName; // 0x30
		<>c__DisplayClass40_0* __8__1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <MAKEUNEXPECTEDENEMYSYMBOL>D__40_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEUNEXPECTEDENEMYSYMBOL>D__40_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEUNEXPECTEDENEMYSYMBOL>D__40_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEUNEXPECTEDENEMYSYMBOL>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEUNEXPECTEDENEMYSYMBOL>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEUNEXPECTEDENEMYSYMBOL>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

