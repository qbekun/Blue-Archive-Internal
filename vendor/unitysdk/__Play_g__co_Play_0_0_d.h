#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace MXUnderCover { class UCParticleSpawnInfo; }
class <>c__DisplayClass0_0;

#define <<PLAY>G__CO_PLAY|0_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB20B0)
#define <<PLAY>G__CO_PLAY|0_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDB22C0)
#define <<PLAY>G__CO_PLAY|0_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDB22D0)
#define <<PLAY>G__CO_PLAY|0_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDB26C0)
#define <<PLAY>G__CO_PLAY|0_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDB26D0)
#define <<PLAY>G__CO_PLAY|0_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDB2720)

	inline static constexpr unsigned int <<Play>g__co_Play|0_0>d_TypeDefinitionIndex = 9963;

	class <<Play>g__co_Play|0_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Transform* binding; // 0x20
		::MXUnderCover::UCParticleSpawnInfo* spawnInfo; // 0x28
		<>c__DisplayClass0_0* __8__1; // 0x68

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<PLAY>G__CO_PLAY|0_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAY>G__CO_PLAY|0_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAY>G__CO_PLAY|0_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAY>G__CO_PLAY|0_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAY>G__CO_PLAY|0_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAY>G__CO_PLAY|0_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

