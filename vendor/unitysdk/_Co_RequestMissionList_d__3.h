#pragma once
#include "unitysdk.h"

class EventContentMiniGameMissionObject;
class <>c__DisplayClass3_0;

#define <CO_REQUESTMISSIONLIST>D__3_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D12900)
#define <CO_REQUESTMISSIONLIST>D__3_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D13180)
#define <CO_REQUESTMISSIONLIST>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D13190)
#define <CO_REQUESTMISSIONLIST>D__3_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D133E0)
#define <CO_REQUESTMISSIONLIST>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D133F0)
#define <CO_REQUESTMISSIONLIST>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D13440)

	inline static constexpr unsigned int <Co_RequestMissionList>d__3_TypeDefinitionIndex = 1623;

	class <Co_RequestMissionList>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		EventContentMiniGameMissionObject* __4__this; // 0x20
		::System::Int64 eventContentId; // 0x28
		::System::Boolean showToast; // 0x30
		<>c__DisplayClass3_0* __8__1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMISSIONLIST>D__3_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMISSIONLIST>D__3_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMISSIONLIST>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMISSIONLIST>D__3_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMISSIONLIST>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTMISSIONLIST>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

