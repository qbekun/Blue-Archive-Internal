#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class MonoBehaviour; }

#define MX_SEQUENCER_SEQUENCETRACK_COPLAYIMPL_OFFSET UNITYSDK_OFFSET(0xEF9A70)
#define MX_SEQUENCER_SEQUENCETRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF9B00)

namespace MX::Sequencer
{
	inline static constexpr unsigned int SequenceTrack_TypeDefinitionIndex = 11157;

	class SequenceTrack : public Il2CppObject
	{
	public:
		::System::Action* action; // 0x30

		::System::Collections::IEnumerator* CoPlayImpl()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCETRACK_COPLAYIMPL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::MonoBehaviour* arg, ::System::Action* arg2, ::System::Boolean arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::System::Action*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCETRACK_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

