#pragma once
#include "unitysdk.h"

namespace UnityEngine { class LogType; }

#define RUNTIMEBUILDLOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF3B30)

	inline static constexpr unsigned int RuntimeBuildLog_TypeDefinitionIndex = 36154;

	class RuntimeBuildLog : public Il2CppObject
	{
	public:
		::UnityEngine::LogType* Type; // 0x10
		::System::String* Message; // 0x18

		::System::Void .ctor(::UnityEngine::LogType* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::LogType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEBUILDLOG_.CTOR_OFFSET))(arg, str, nullptr);
		}

	};

