#pragma once
#include "unitysdk.h"

class UIInteractiveWorldRaidCarrierSkillUpgrade;

#define <<PLAYUPDATEDSKILLEFFECTS>G__COREFRESHDEFERRED|39_1>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2618290)
#define <<PLAYUPDATEDSKILLEFFECTS>G__COREFRESHDEFERRED|39_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2618AA0)
#define <<PLAYUPDATEDSKILLEFFECTS>G__COREFRESHDEFERRED|39_1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2618AB0)
#define <<PLAYUPDATEDSKILLEFFECTS>G__COREFRESHDEFERRED|39_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2618C10)
#define <<PLAYUPDATEDSKILLEFFECTS>G__COREFRESHDEFERRED|39_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2618C20)
#define <<PLAYUPDATEDSKILLEFFECTS>G__COREFRESHDEFERRED|39_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2618C70)

	inline static constexpr unsigned int <<PlayUpdatedSkillEffects>g__CoRefreshDeferred|39_1>d_TypeDefinitionIndex = 6517;

	class <<PlayUpdatedSkillEffects>g__CoRefreshDeferred|39_1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single time; // 0x20
		UIInteractiveWorldRaidCarrierSkillUpgrade* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<PLAYUPDATEDSKILLEFFECTS>G__COREFRESHDEFERRED|39_1>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYUPDATEDSKILLEFFECTS>G__COREFRESHDEFERRED|39_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYUPDATEDSKILLEFFECTS>G__COREFRESHDEFERRED|39_1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYUPDATEDSKILLEFFECTS>G__COREFRESHDEFERRED|39_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYUPDATEDSKILLEFFECTS>G__COREFRESHDEFERRED|39_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYUPDATEDSKILLEFFECTS>G__COREFRESHDEFERRED|39_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

