#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }

#define MASTERDIRECTORDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x281D420)
#define MASTERDIRECTORDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x281D430)
#define MASTERDIRECTORDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x281D460)
#define MASTERDIRECTORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x281D520)

	inline static constexpr unsigned int MasterDirectorDelegate_TypeDefinitionIndex = 34186;

	class MasterDirectorDelegate : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableDirector* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::UnityEngine::Playables::PlayableDirector*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + MASTERDIRECTORDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MASTERDIRECTORDELEGATE_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MASTERDIRECTORDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableDirector* Invoke()
		{
			return (return (::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + MASTERDIRECTORDELEGATE_INVOKE_OFFSET))(nullptr);
		}

	};

