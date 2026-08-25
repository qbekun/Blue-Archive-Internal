#pragma once
#include "unitysdk.h"

#define <<LOADSCENE>G__CLEARDURINGSCENELOAD|91_1>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x1479440)
#define <<LOADSCENE>G__CLEARDURINGSCENELOAD|91_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x147CE00)
#define <<LOADSCENE>G__CLEARDURINGSCENELOAD|91_1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x147CE10)
#define <<LOADSCENE>G__CLEARDURINGSCENELOAD|91_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x147D160)
#define <<LOADSCENE>G__CLEARDURINGSCENELOAD|91_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x147D170)
#define <<LOADSCENE>G__CLEARDURINGSCENELOAD|91_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x147D1C0)

	inline static constexpr unsigned int <<LoadScene>g__ClearDuringSceneLoad|91_1>d_TypeDefinitionIndex = 15166;

	class <<LoadScene>g__ClearDuringSceneLoad|91_1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<LOADSCENE>G__CLEARDURINGSCENELOAD|91_1>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<LOADSCENE>G__CLEARDURINGSCENELOAD|91_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<LOADSCENE>G__CLEARDURINGSCENELOAD|91_1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<LOADSCENE>G__CLEARDURINGSCENELOAD|91_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<LOADSCENE>G__CLEARDURINGSCENELOAD|91_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<LOADSCENE>G__CLEARDURINGSCENELOAD|91_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

