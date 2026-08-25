#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
class <>c__DisplayClass7_0;

#define <<VISUALIZE>G__COPLAY|1>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B76C0)
#define <<VISUALIZE>G__COPLAY|1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B76E0)
#define <<VISUALIZE>G__COPLAY|1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15B76F0)
#define <<VISUALIZE>G__COPLAY|1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15B7860)
#define <<VISUALIZE>G__COPLAY|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x15B7870)
#define <<VISUALIZE>G__COPLAY|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15B78C0)

	inline static constexpr unsigned int <<Visualize>g__CoPlay|1>d_TypeDefinitionIndex = 1175;

	class <<Visualize>g__CoPlay|1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Playables::PlayableDirector* director; // 0x20
		<>c__DisplayClass7_0* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<VISUALIZE>G__COPLAY|1>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<VISUALIZE>G__COPLAY|1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<VISUALIZE>G__COPLAY|1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<VISUALIZE>G__COPLAY|1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<VISUALIZE>G__COPLAY|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<VISUALIZE>G__COPLAY|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

