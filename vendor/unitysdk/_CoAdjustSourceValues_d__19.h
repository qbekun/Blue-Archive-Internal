#pragma once
#include "unitysdk.h"

namespace MX::Audio { class AmbientAudioEvent; }
namespace UnityEngine { class AudioSource; }

#define <COADJUSTSOURCEVALUES>D__19_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D43BE0)
#define <COADJUSTSOURCEVALUES>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D44E70)
#define <COADJUSTSOURCEVALUES>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D44E80)
#define <COADJUSTSOURCEVALUES>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D45080)
#define <COADJUSTSOURCEVALUES>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D45090)
#define <COADJUSTSOURCEVALUES>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D450E0)

	inline static constexpr unsigned int <CoAdjustSourceValues>d__19_TypeDefinitionIndex = 20139;

	class <CoAdjustSourceValues>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Audio::AmbientAudioEvent* evt; // 0x20
		::UnityEngine::AudioSource* source; // 0x28
		::System::Action* onFinish; // 0x30
		::System::Single _startVolume_5__2; // 0x38
		::System::Single _startPitch_5__3; // 0x3C
		::System::Single _startTime_5__4; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COADJUSTSOURCEVALUES>D__19_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COADJUSTSOURCEVALUES>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COADJUSTSOURCEVALUES>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COADJUSTSOURCEVALUES>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COADJUSTSOURCEVALUES>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COADJUSTSOURCEVALUES>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

