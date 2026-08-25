#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class MonoBehaviour; }

#define MX_SEQUENCER_SEQUENCETRACK`5_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SEQUENCER_SEQUENCETRACK`5_COPLAYIMPL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Sequencer
{
	inline static constexpr unsigned int SequenceTrack`5_TypeDefinitionIndex = 11167;

	class SequenceTrack`5 : public Il2CppObject
	{
	public:
		Il2CppObject* arg1; // 0x0
		Il2CppObject* arg2; // 0x0
		Il2CppObject* arg3; // 0x0
		Il2CppObject* arg4; // 0x0
		Il2CppObject* func; // 0x0

		::System::Void .ctor(::UnityEngine::MonoBehaviour* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, ::System::Boolean arg7, ::System::Single arg8)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCETRACK`5_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayImpl()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SEQUENCER_SEQUENCETRACK`5_COPLAYIMPL_OFFSET))(nullptr);
		}

	};
}

