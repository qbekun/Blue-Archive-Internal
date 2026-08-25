#pragma once
#include "unitysdk.h"

class UIAcademyOperationInfo;
namespace UnityEngine { class WaitForSecondsRealtime; }

#define <CO_REFRESHEVENTINFO>D__8_.CTOR_OFFSET UNITYSDK_OFFSET(0x21DD3E0)
#define <CO_REFRESHEVENTINFO>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x21DE140)
#define <CO_REFRESHEVENTINFO>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x21DE150)
#define <CO_REFRESHEVENTINFO>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21DE210)
#define <CO_REFRESHEVENTINFO>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x21DE220)
#define <CO_REFRESHEVENTINFO>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21DE270)

	inline static constexpr unsigned int <Co_RefreshEventInfo>d__8_TypeDefinitionIndex = 4220;

	class <Co_RefreshEventInfo>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIAcademyOperationInfo* __4__this; // 0x20
		::UnityEngine::WaitForSecondsRealtime* _delay_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHEVENTINFO>D__8_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHEVENTINFO>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHEVENTINFO>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHEVENTINFO>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHEVENTINFO>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHEVENTINFO>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

