#pragma once
#include "unitysdk.h"

namespace Nexon::Pub { class NXPatcherDownloader; }
namespace Nexon::Pub { class NXPatchFile; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define <DOWNLOADFILE>D__8_.CTOR_OFFSET UNITYSDK_OFFSET(0x954CB50)
#define <DOWNLOADFILE>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x954D490)
#define <DOWNLOADFILE>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x954D550)
#define <DOWNLOADFILE>D__8___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x954DE00)
#define <DOWNLOADFILE>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x954DF70)
#define <DOWNLOADFILE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x954DF80)
#define <DOWNLOADFILE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x954DFD0)

	inline static constexpr unsigned int <DownloadFile>d__8_TypeDefinitionIndex = 37435;

	class <DownloadFile>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::Nexon::Pub::NXPatcherDownloader* __4__this; // 0x20
		::System::String* _filename_5__2; // 0x28
		::System::String* _downloadFilePath_5__3; // 0x30
		::Nexon::Pub::NXPatchFile* _file_5__4; // 0x38
		::UnityEngine::Networking::UnityWebRequest* _request_5__5; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADFILE>D__8_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADFILE>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADFILE>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADFILE>D__8___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADFILE>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADFILE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADFILE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

