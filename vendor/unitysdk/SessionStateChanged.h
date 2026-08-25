#pragma once
#include "unitysdk.h"

namespace UnityEngine::Analytics { class AnalyticsSessionState; }

#define SESSIONSTATECHANGED_.CTOR_OFFSET UNITYSDK_OFFSET(0xA49EFB0)
#define SESSIONSTATECHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0xA49F080)

	inline static constexpr unsigned int SessionStateChanged_TypeDefinitionIndex = 38017;

	class SessionStateChanged : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SESSIONSTATECHANGED_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Analytics::AnalyticsSessionState* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Analytics::AnalyticsSessionState*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SESSIONSTATECHANGED_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

