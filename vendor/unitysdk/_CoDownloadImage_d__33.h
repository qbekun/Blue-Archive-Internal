#pragma once
#include "unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequest; }

#define <CODOWNLOADIMAGE>D__33_.CTOR_OFFSET UNITYSDK_OFFSET(0xFAE0D0)
#define <CODOWNLOADIMAGE>D__33_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xFB00B0)
#define <CODOWNLOADIMAGE>D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xFB0170)
#define <CODOWNLOADIMAGE>D__33___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xFB0420)
#define <CODOWNLOADIMAGE>D__33_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFB04D0)
#define <CODOWNLOADIMAGE>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xFB04E0)
#define <CODOWNLOADIMAGE>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFB0530)

	inline static constexpr unsigned int <CoDownloadImage>d__33_TypeDefinitionIndex = 12350;

	class <CoDownloadImage>d__33 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* url; // 0x20
		::System::String* ImageNameHash; // 0x28
		Il2CppObject* callback; // 0x30
		::UnityEngine::Networking::UnityWebRequest* _www_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CODOWNLOADIMAGE>D__33_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODOWNLOADIMAGE>D__33_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODOWNLOADIMAGE>D__33_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODOWNLOADIMAGE>D__33___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODOWNLOADIMAGE>D__33_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODOWNLOADIMAGE>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODOWNLOADIMAGE>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

