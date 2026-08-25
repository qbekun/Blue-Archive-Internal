#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableOutput; }
namespace UnityEngine::Playables { class PlayableGraph; }

#define CREATEOUTPUTMETHOD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA269720)
#define CREATEOUTPUTMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2697F0)

	inline static constexpr unsigned int CreateOutputMethod_TypeDefinitionIndex = 31609;

	class CreateOutputMethod : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CREATEOUTPUTMETHOD_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableOutput* Invoke(::UnityEngine::Playables::PlayableGraph* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Playables::PlayableOutput*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CREATEOUTPUTMETHOD_INVOKE_OFFSET))(arg, str, nullptr);
		}

	};

