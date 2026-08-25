#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class Http2DownloadMessage; }

#define <DOWNLOADTEXTCOROUTINERETURNVALUE>D__48_.CTOR_OFFSET UNITYSDK_OFFSET(0x144F780)
#define <DOWNLOADTEXTCOROUTINERETURNVALUE>D__48_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1451880)
#define <DOWNLOADTEXTCOROUTINERETURNVALUE>D__48_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1451950)
#define <DOWNLOADTEXTCOROUTINERETURNVALUE>D__48___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1451E00)
#define <DOWNLOADTEXTCOROUTINERETURNVALUE>D__48_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1451EB0)
#define <DOWNLOADTEXTCOROUTINERETURNVALUE>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1451EC0)
#define <DOWNLOADTEXTCOROUTINERETURNVALUE>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1451F10)

	inline static constexpr unsigned int <DownloadTextCoroutineReturnValue>d__48_TypeDefinitionIndex = 14999;

	class <DownloadTextCoroutineReturnValue>d__48 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* url; // 0x20
		::Assets::_MX::Program::Scripts::Network::Http2DownloadMessage* _request_5__2; // 0x28
		::Il2CppArray<::System::Object*>* _output_5__3; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADTEXTCOROUTINERETURNVALUE>D__48_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADTEXTCOROUTINERETURNVALUE>D__48_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADTEXTCOROUTINERETURNVALUE>D__48_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADTEXTCOROUTINERETURNVALUE>D__48___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADTEXTCOROUTINERETURNVALUE>D__48_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADTEXTCOROUTINERETURNVALUE>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADTEXTCOROUTINERETURNVALUE>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

