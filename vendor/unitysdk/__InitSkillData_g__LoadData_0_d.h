#pragma once
#include "unitysdk.h"

class <>c__DisplayClass65_0;
class <>c__DisplayClass65_2;
class <>c__DisplayClass65_1;

#define <<INITSKILLDATA>G__LOADDATA|0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x1457F50)
#define <<INITSKILLDATA>G__LOADDATA|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1457F70)
#define <<INITSKILLDATA>G__LOADDATA|0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1457F80)
#define <<INITSKILLDATA>G__LOADDATA|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1458680)
#define <<INITSKILLDATA>G__LOADDATA|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1458690)
#define <<INITSKILLDATA>G__LOADDATA|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14586E0)

	inline static constexpr unsigned int <<InitSkillData>g__LoadData|0>d_TypeDefinitionIndex = 15020;

	class <<InitSkillData>g__LoadData|0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass65_0* __4__this; // 0x20
		<>c__DisplayClass65_2* __8__1; // 0x28
		<>c__DisplayClass65_1* __8__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<INITSKILLDATA>G__LOADDATA|0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITSKILLDATA>G__LOADDATA|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITSKILLDATA>G__LOADDATA|0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITSKILLDATA>G__LOADDATA|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITSKILLDATA>G__LOADDATA|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INITSKILLDATA>G__LOADDATA|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

