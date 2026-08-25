#pragma once
#include "unitysdk.h"

class O81b8a61d5887ccf750d3e7f3d94beaa86662af2d8fec20598c6f16d1be5c32ee;
namespace Assets::_MX::Program::Scripts::Network { class Http2DownloadMessage; }

#define <DOWNLOADSERVERINFODATAHTTP2>D__19_.CTOR_OFFSET UNITYSDK_OFFSET(0xC3C760)
#define <DOWNLOADSERVERINFODATAHTTP2>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xC416B0)
#define <DOWNLOADSERVERINFODATAHTTP2>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC41770)
#define <DOWNLOADSERVERINFODATAHTTP2>D__19___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xC479B0)
#define <DOWNLOADSERVERINFODATAHTTP2>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC47A60)
#define <DOWNLOADSERVERINFODATAHTTP2>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xC47A70)
#define <DOWNLOADSERVERINFODATAHTTP2>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC47AC0)

	inline static constexpr unsigned int <DownloadServerInfoDataHttp2>d__19_TypeDefinitionIndex = 8915;

	class <DownloadServerInfoDataHttp2>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		O81b8a61d5887ccf750d3e7f3d94beaa86662af2d8fec20598c6f16d1be5c32ee* __4__this; // 0x20
		::Assets::_MX::Program::Scripts::Network::Http2DownloadMessage* _request_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADSERVERINFODATAHTTP2>D__19_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADSERVERINFODATAHTTP2>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADSERVERINFODATAHTTP2>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADSERVERINFODATAHTTP2>D__19___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADSERVERINFODATAHTTP2>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADSERVERINFODATAHTTP2>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADSERVERINFODATAHTTP2>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

