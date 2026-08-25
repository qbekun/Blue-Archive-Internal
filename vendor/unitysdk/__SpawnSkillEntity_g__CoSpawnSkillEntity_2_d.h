#pragma once
#include "unitysdk.h"

class <>c__DisplayClass0_0;

#define <<SPAWNSKILLENTITY>G__COSPAWNSKILLENTITY|2>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x10CD5E0)
#define <<SPAWNSKILLENTITY>G__COSPAWNSKILLENTITY|2>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x10CD600)
#define <<SPAWNSKILLENTITY>G__COSPAWNSKILLENTITY|2>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10CD610)
#define <<SPAWNSKILLENTITY>G__COSPAWNSKILLENTITY|2>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10CDE50)
#define <<SPAWNSKILLENTITY>G__COSPAWNSKILLENTITY|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x10CDE60)
#define <<SPAWNSKILLENTITY>G__COSPAWNSKILLENTITY|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10CDEB0)

	inline static constexpr unsigned int <<SpawnSkillEntity>g__CoSpawnSkillEntity|2>d_TypeDefinitionIndex = 12970;

	class <<SpawnSkillEntity>g__CoSpawnSkillEntity|2>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass0_0* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<SPAWNSKILLENTITY>G__COSPAWNSKILLENTITY|2>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SPAWNSKILLENTITY>G__COSPAWNSKILLENTITY|2>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SPAWNSKILLENTITY>G__COSPAWNSKILLENTITY|2>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SPAWNSKILLENTITY>G__COSPAWNSKILLENTITY|2>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SPAWNSKILLENTITY>G__COSPAWNSKILLENTITY|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SPAWNSKILLENTITY>G__COSPAWNSKILLENTITY|2>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

