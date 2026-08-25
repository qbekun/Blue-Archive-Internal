#pragma once
#include "unitysdk.h"

namespace MX::Audio { class BGMPlayer; }
namespace MX::Data { class BGMPlayInfo; }

#define <CO_PLAY>D__43_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E0C0)
#define <CO_PLAY>D__43_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D4F3A0)
#define <CO_PLAY>D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D4F3B0)
#define <CO_PLAY>D__43_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D4FD30)
#define <CO_PLAY>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D4FD40)
#define <CO_PLAY>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D4FD90)

	inline static constexpr unsigned int <co_Play>d__43_TypeDefinitionIndex = 20181;

	class <co_Play>d__43 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Audio::BGMPlayer* __4__this; // 0x20
		::MX::Data::BGMPlayInfo* playInfo; // 0x28
		::System::Single startTime; // 0x30
		::System::Single fadeInTime; // 0x34
		Il2CppObject* forceLoopStartTime; // 0x38
		Il2CppObject* forceLoopEndTime; // 0x40
		::System::Boolean useStartFadeIn; // 0x48
		::Il2CppArray<::System::Object*>* _clips_5__2; // 0x50
		::System::Single _loopBeginTime_5__3; // 0x58
		::System::Single _loopDurationTime_5__4; // 0x5C
		::System::Double _playDspEndTime_5__5; // 0x60
		::System::Double _transitionBeginDspTime_5__6; // 0x68
		::System::Int32 _nextIndex_5__7; // 0x70
		::System::Double _playDspEndTimePrev_5__8; // 0x78
		::System::Single _prevVolume_5__9; // 0x80
		::System::Double _nextScheduleDspTime_5__10; // 0x88
		::System::Double _offsetDspTime_5__11; // 0x90

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__43_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__43_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__43_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__43_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

