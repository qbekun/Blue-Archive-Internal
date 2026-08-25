#pragma once
#include "unitysdk.h"

class BattlePassMissionObject;
class <>c__DisplayClass10_0;

#define <CO_REQUESTMISSIONLIST>D__10_.CTOR_OFFSET UNITYSDK_OFFSET(0x182F560)
#define <CO_REQUESTMISSIONLIST>D__10_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x182F5A0)
#define <CO_REQUESTMISSIONLIST>D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x182F5B0)
#define <CO_REQUESTMISSIONLIST>D__10_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x182F7C0)
#define <CO_REQUESTMISSIONLIST>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x182F7D0)
#define <CO_REQUESTMISSIONLIST>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x182F820)

	inline static constexpr unsigned int <Co_RequestMissionList>d__10_TypeDefinitionIndex = 1319;

	class <Co_RequestMissionList>d__10 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Boolean showToast; // 0x20
		BattlePassMissionObject* __4__this; // 0x28
		::System::Int64 battlepassId; // 0x30
		<>c__DisplayClass10_0* __8__1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMISSIONLIST>D__10_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMISSIONLIST>D__10_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMISSIONLIST>D__10_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMISSIONLIST>D__10_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMISSIONLIST>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMISSIONLIST>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

