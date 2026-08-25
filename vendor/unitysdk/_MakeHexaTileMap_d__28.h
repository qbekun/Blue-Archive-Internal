#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexaTileMap; }
namespace UnityEngine { class Transform; }
class <>c__DisplayClass28_0;

#define <MAKEHEXATILEMAP>D__28_.CTOR_OFFSET UNITYSDK_OFFSET(0xF7A6C0)
#define <MAKEHEXATILEMAP>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF7E660)
#define <MAKEHEXATILEMAP>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF7E6C0)
#define <MAKEHEXATILEMAP>D__28___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xF7FA60)
#define <MAKEHEXATILEMAP>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF7FAB0)
#define <MAKEHEXATILEMAP>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF7FAC0)
#define <MAKEHEXATILEMAP>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF7FB10)

	inline static constexpr unsigned int <MakeHexaTileMap>d__28_TypeDefinitionIndex = 842;

	class <MakeHexaTileMap>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Campaign::HexaTileMap* mapData; // 0x20
		::UnityEngine::Transform* parent; // 0x28
		::System::Boolean inGame; // 0x30
		<>c__DisplayClass28_0* __8__1; // 0x38
		Il2CppObject* completeCallBack; // 0x40
		Il2CppObject* __7__wrap1; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <MAKEHEXATILEMAP>D__28_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEHEXATILEMAP>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEHEXATILEMAP>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEHEXATILEMAP>D__28___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEHEXATILEMAP>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEHEXATILEMAP>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEHEXATILEMAP>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

