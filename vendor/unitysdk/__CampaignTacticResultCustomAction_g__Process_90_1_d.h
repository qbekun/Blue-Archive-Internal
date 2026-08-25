#pragma once
#include "unitysdk.h"

class <>c__DisplayClass90_0;

#define <<CAMPAIGNTACTICRESULTCUSTOMACTION>G__PROCESS|90_1>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xBB4870)
#define <<CAMPAIGNTACTICRESULTCUSTOMACTION>G__PROCESS|90_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBB5D0)
#define <<CAMPAIGNTACTICRESULTCUSTOMACTION>G__PROCESS|90_1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBBB5E0)
#define <<CAMPAIGNTACTICRESULTCUSTOMACTION>G__PROCESS|90_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBBBD0)
#define <<CAMPAIGNTACTICRESULTCUSTOMACTION>G__PROCESS|90_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBBBBE0)
#define <<CAMPAIGNTACTICRESULTCUSTOMACTION>G__PROCESS|90_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBBC30)

	inline static constexpr unsigned int <<CampaignTacticResultCustomAction>g__Process|90_1>d_TypeDefinitionIndex = 8600;

	class <<CampaignTacticResultCustomAction>g__Process|90_1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass90_0* __8__1; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<CAMPAIGNTACTICRESULTCUSTOMACTION>G__PROCESS|90_1>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CAMPAIGNTACTICRESULTCUSTOMACTION>G__PROCESS|90_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CAMPAIGNTACTICRESULTCUSTOMACTION>G__PROCESS|90_1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CAMPAIGNTACTICRESULTCUSTOMACTION>G__PROCESS|90_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CAMPAIGNTACTICRESULTCUSTOMACTION>G__PROCESS|90_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CAMPAIGNTACTICRESULTCUSTOMACTION>G__PROCESS|90_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

