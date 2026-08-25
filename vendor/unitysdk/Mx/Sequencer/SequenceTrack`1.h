#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class MonoBehaviour; }

#define MX_SEQUENCER_SEQUENCETRACK`1_COPLAYIMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCETRACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Sequencer
{
	inline static constexpr unsigned int SequenceTrack`1_TypeDefinitionIndex = 11159;

	class SequenceTrack`1 : public Il2CppObject
	{
	public:
		Il2CppObject* func; // 0x0

		::System::Collections::IEnumerator* CoPlayImpl()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCETRACK`1_COPLAYIMPL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::MonoBehaviour* arg, Il2CppObject* arg2, ::System::Boolean arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, Il2CppObject*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCETRACK`1_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

