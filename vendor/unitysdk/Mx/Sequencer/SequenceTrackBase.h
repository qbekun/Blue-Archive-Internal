#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Coroutine; }

#define MX_SEQUENCER_SEQUENCETRACKBASE_COPLAY_OFFSET UNITYSDK_OFFSET(0xEF9670)
#define MX_SEQUENCER_SEQUENCETRACKBASE_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xEF9700)
#define MX_SEQUENCER_SEQUENCETRACKBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF9710)
#define MX_SEQUENCER_SEQUENCETRACKBASE_RELEASE_OFFSET UNITYSDK_OFFSET(0xEF9760)
#define MX_SEQUENCER_SEQUENCETRACKBASE_PLAY_OFFSET UNITYSDK_OFFSET(0xEF9800)
#define MX_SEQUENCER_SEQUENCETRACKBASE_COPLAYIMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCETRACKBASE_SET_CANTOUCH_OFFSET UNITYSDK_OFFSET(0xEF98A0)
#define MX_SEQUENCER_SEQUENCETRACKBASE_GET_CANTOUCH_OFFSET UNITYSDK_OFFSET(0xEF98B0)

namespace MX::Sequencer
{
	inline static constexpr unsigned int SequenceTrackBase_TypeDefinitionIndex = 11155;

	class SequenceTrackBase : public Il2CppObject
	{
	public:
		::UnityEngine::MonoBehaviour* behavior; // 0x10
		::System::Single startDelay; // 0x18
		::UnityEngine::Coroutine* playCoroutine; // 0x20
		::System::Boolean _CanTouch_k__BackingField; // 0x28

		::System::Collections::IEnumerator* CoPlay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCETRACKBASE_COPLAY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCETRACKBASE_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::MonoBehaviour* arg, ::System::Boolean arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCETRACKBASE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCETRACKBASE_RELEASE_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCETRACKBASE_PLAY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayImpl()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCETRACKBASE_COPLAYIMPL_OFFSET))(nullptr);
		}

		::System::Void set_CanTouch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCETRACKBASE_SET_CANTOUCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanTouch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCETRACKBASE_GET_CANTOUCH_OFFSET))(nullptr);
		}

	};
}

