#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Vector3; }
class <>c__DisplayClass4_0;

#define <<PLAYANDPOOL>G__PLAYANDPOOL|1>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x147D810)
#define <<PLAYANDPOOL>G__PLAYANDPOOL|1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x147D830)
#define <<PLAYANDPOOL>G__PLAYANDPOOL|1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x147D840)
#define <<PLAYANDPOOL>G__PLAYANDPOOL|1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x147D9B0)
#define <<PLAYANDPOOL>G__PLAYANDPOOL|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x147D9C0)
#define <<PLAYANDPOOL>G__PLAYANDPOOL|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x147DA10)

	inline static constexpr unsigned int <<PlayAndPool>g__PlayAndPool|1>d_TypeDefinitionIndex = 15168;

	class <<PlayAndPool>g__PlayAndPool|1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::ParticleSystem* particle; // 0x20
		::UnityEngine::Vector3* pos; // 0x28
		::UnityEngine::Vector3* forward; // 0x34
		<>c__DisplayClass4_0* __4__this; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<PLAYANDPOOL>G__PLAYANDPOOL|1>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYANDPOOL>G__PLAYANDPOOL|1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYANDPOOL>G__PLAYANDPOOL|1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYANDPOOL>G__PLAYANDPOOL|1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYANDPOOL>G__PLAYANDPOOL|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYANDPOOL>G__PLAYANDPOOL|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

