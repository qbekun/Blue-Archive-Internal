#pragma once
#include "unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequest; }

#define <CO_DOWNLOADZIPFILE>D__40_.CTOR_OFFSET UNITYSDK_OFFSET(0x2104CD0)
#define <CO_DOWNLOADZIPFILE>D__40_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2105B00)
#define <CO_DOWNLOADZIPFILE>D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2105BC0)
#define <CO_DOWNLOADZIPFILE>D__40___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x2106790)
#define <CO_DOWNLOADZIPFILE>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2106840)
#define <CO_DOWNLOADZIPFILE>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2106850)
#define <CO_DOWNLOADZIPFILE>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21068A0)

	inline static constexpr unsigned int <co_DownloadZipFile>d__40_TypeDefinitionIndex = 3852;

	class <co_DownloadZipFile>d__40 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Il2CppObject* onComplete; // 0x20
		::System::Int64 hash; // 0x28
		::System::String* _downloadPath_5__2; // 0x30
		::UnityEngine::Networking::UnityWebRequest* _www_5__3; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_DOWNLOADZIPFILE>D__40_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DOWNLOADZIPFILE>D__40_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DOWNLOADZIPFILE>D__40_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DOWNLOADZIPFILE>D__40___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DOWNLOADZIPFILE>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DOWNLOADZIPFILE>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DOWNLOADZIPFILE>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

