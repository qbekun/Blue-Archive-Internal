#pragma once
#include "unitysdk.h"

class UIScenarioQuestionSelectionElement;

#define <<ONSELECTINTERNAL>G__CO_REFRESHUI|5_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E42D0)
#define <<ONSELECTINTERNAL>G__CO_REFRESHUI|5_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x27E4370)
#define <<ONSELECTINTERNAL>G__CO_REFRESHUI|5_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x27E4380)
#define <<ONSELECTINTERNAL>G__CO_REFRESHUI|5_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27E4440)
#define <<ONSELECTINTERNAL>G__CO_REFRESHUI|5_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x27E4450)
#define <<ONSELECTINTERNAL>G__CO_REFRESHUI|5_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27E44A0)

	inline static constexpr unsigned int <<OnSelectInternal>g__Co_RefreshUI|5_0>d_TypeDefinitionIndex = 7679;

	class <<OnSelectInternal>g__Co_RefreshUI|5_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIScenarioQuestionSelectionElement* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ONSELECTINTERNAL>G__CO_REFRESHUI|5_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONSELECTINTERNAL>G__CO_REFRESHUI|5_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONSELECTINTERNAL>G__CO_REFRESHUI|5_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONSELECTINTERNAL>G__CO_REFRESHUI|5_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONSELECTINTERNAL>G__CO_REFRESHUI|5_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONSELECTINTERNAL>G__CO_REFRESHUI|5_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

