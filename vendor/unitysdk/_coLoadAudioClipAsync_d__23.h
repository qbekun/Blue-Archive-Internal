#pragma once
#include "unitysdk.h"

class AudioLoadInfo;
namespace UnityEngine::Networking { class UnityWebRequest; }

#define <COLOADAUDIOCLIPASYNC>D__23_.CTOR_OFFSET UNITYSDK_OFFSET(0xDF4010)
#define <COLOADAUDIOCLIPASYNC>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDF71C0)
#define <COLOADAUDIOCLIPASYNC>D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDF7280)
#define <COLOADAUDIOCLIPASYNC>D__23___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xDF7FB0)
#define <COLOADAUDIOCLIPASYNC>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDF8060)
#define <COLOADAUDIOCLIPASYNC>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDF8070)
#define <COLOADAUDIOCLIPASYNC>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDF80C0)

	inline static constexpr unsigned int <coLoadAudioClipAsync>d__23_TypeDefinitionIndex = 10183;

	class <coLoadAudioClipAsync>d__23 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		AudioLoadInfo* _data_5__2; // 0x20
		::UnityEngine::Networking::UnityWebRequest* _www_5__3; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COLOADAUDIOCLIPASYNC>D__23_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOADAUDIOCLIPASYNC>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOADAUDIOCLIPASYNC>D__23_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOADAUDIOCLIPASYNC>D__23___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOADAUDIOCLIPASYNC>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOADAUDIOCLIPASYNC>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOADAUDIOCLIPASYNC>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

