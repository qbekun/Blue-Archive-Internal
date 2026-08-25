#pragma once
#include "unitysdk.h"

class UIAccountInfo;
class <>c__DisplayClass71_0;

#define <CO_CALLNAMEDOWNLOADREQUEST>D__71_.CTOR_OFFSET UNITYSDK_OFFSET(0x21E9F90)
#define <CO_CALLNAMEDOWNLOADREQUEST>D__71_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x21EBF10)
#define <CO_CALLNAMEDOWNLOADREQUEST>D__71_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x21EBF20)
#define <CO_CALLNAMEDOWNLOADREQUEST>D__71_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21EC100)
#define <CO_CALLNAMEDOWNLOADREQUEST>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x21EC110)
#define <CO_CALLNAMEDOWNLOADREQUEST>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21EC160)

	inline static constexpr unsigned int <co_CallnameDownloadRequest>d__71_TypeDefinitionIndex = 4242;

	class <co_CallnameDownloadRequest>d__71 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIAccountInfo* __4__this; // 0x20
		<>c__DisplayClass71_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_CALLNAMEDOWNLOADREQUEST>D__71_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CALLNAMEDOWNLOADREQUEST>D__71_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CALLNAMEDOWNLOADREQUEST>D__71_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CALLNAMEDOWNLOADREQUEST>D__71_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CALLNAMEDOWNLOADREQUEST>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CALLNAMEDOWNLOADREQUEST>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

