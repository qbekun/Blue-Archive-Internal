#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define SYNCCOMPONENTPOOL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYNCCOMPONENTPOOL`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int SyncComponentPool`1_TypeDefinitionIndex = 3818;

	class SyncComponentPool`1 : public ::MXTimeline::IntMaxTimelineParameter
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCCOMPONENTPOOL`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::String* str, ::System::Int32 arg, ::UnityEngine::Transform* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::UnityEngine::Transform*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCCOMPONENTPOOL`1_INITIALIZE_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

	};

