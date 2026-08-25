#pragma once
#include "unitysdk.h"

namespace MX::Conquest { class ConquestTileMap; }
namespace UnityEngine { class Transform; }
class <>c__DisplayClass34_0;

#define <MAKECONQUESTTILEMAP>D__34_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BED5D0)
#define <MAKECONQUESTTILEMAP>D__34_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BF1EF0)
#define <MAKECONQUESTTILEMAP>D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BF1F00)
#define <MAKECONQUESTTILEMAP>D__34_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BF35E0)
#define <MAKECONQUESTTILEMAP>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1BF35F0)
#define <MAKECONQUESTTILEMAP>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BF3640)

	inline static constexpr unsigned int <MakeConquestTileMap>d__34_TypeDefinitionIndex = 1549;

	class <MakeConquestTileMap>d__34 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Conquest::ConquestTileMap* mapData; // 0x20
		::UnityEngine::Transform* parent; // 0x28
		::System::Boolean inGame; // 0x30
		<>c__DisplayClass34_0* __8__1; // 0x38
		Il2CppObject* completeCallBack; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <MAKECONQUESTTILEMAP>D__34_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKECONQUESTTILEMAP>D__34_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKECONQUESTTILEMAP>D__34_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKECONQUESTTILEMAP>D__34_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKECONQUESTTILEMAP>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKECONQUESTTILEMAP>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

