#pragma once
#include "unitysdk.h"

#define <CREATEBATTLECOMMONVOICETABLE>D__28_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D42FE0)
#define <CREATEBATTLECOMMONVOICETABLE>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D43000)
#define <CREATEBATTLECOMMONVOICETABLE>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D43010)
#define <CREATEBATTLECOMMONVOICETABLE>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D433A0)
#define <CREATEBATTLECOMMONVOICETABLE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D433B0)
#define <CREATEBATTLECOMMONVOICETABLE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D43400)

	inline static constexpr unsigned int <CreateBattleCommonVoiceTable>d__28_TypeDefinitionIndex = 20125;

	class <CreateBattleCommonVoiceTable>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Il2CppObject* commonVoiceExcels; // 0x20
		Il2CppObject* characterVoiceExcels; // 0x28
		Il2CppObject* complete; // 0x30
		<>c__DisplayClass28_0* __8__1; // 0x38
		Il2CppObject* _result_5__2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CREATEBATTLECOMMONVOICETABLE>D__28_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEBATTLECOMMONVOICETABLE>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEBATTLECOMMONVOICETABLE>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEBATTLECOMMONVOICETABLE>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEBATTLECOMMONVOICETABLE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEBATTLECOMMONVOICETABLE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

