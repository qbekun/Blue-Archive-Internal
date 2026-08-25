#pragma once
#include "unitysdk.h"

class <>c__DisplayClass7_0;
namespace Assets::_MX::Program::Scripts::Network { class Http2DownloadMessage; }

#define <CO_REQUESTCDKEYYOSTARAPI>D__7_.CTOR_OFFSET UNITYSDK_OFFSET(0x2765700)
#define <CO_REQUESTCDKEYYOSTARAPI>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2765A20)
#define <CO_REQUESTCDKEYYOSTARAPI>D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2765AE0)
#define <CO_REQUESTCDKEYYOSTARAPI>D__7___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x2766AF0)
#define <CO_REQUESTCDKEYYOSTARAPI>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2766BA0)
#define <CO_REQUESTCDKEYYOSTARAPI>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2766BB0)
#define <CO_REQUESTCDKEYYOSTARAPI>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2766C00)

	inline static constexpr unsigned int <Co_RequestCDKeyYostarAPI>d__7_TypeDefinitionIndex = 7315;

	class <Co_RequestCDKeyYostarAPI>d__7 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* couponSerial; // 0x20
		<>c__DisplayClass7_0* __8__1; // 0x28
		::Assets::_MX::Program::Scripts::Network::Http2DownloadMessage* _request_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTCDKEYYOSTARAPI>D__7_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTCDKEYYOSTARAPI>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTCDKEYYOSTARAPI>D__7_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTCDKEYYOSTARAPI>D__7___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTCDKEYYOSTARAPI>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTCDKEYYOSTARAPI>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTCDKEYYOSTARAPI>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

