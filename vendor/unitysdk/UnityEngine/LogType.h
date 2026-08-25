#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LogType; }

namespace UnityEngine
{
	inline static constexpr unsigned int LogType_TypeDefinitionIndex = 30937;

	class LogType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::LogType* Error; // 0x0
		::UnityEngine::LogType* Assert; // 0x0
		::UnityEngine::LogType* Warning; // 0x0
		::UnityEngine::LogType* Log; // 0x0
		::UnityEngine::LogType* Exception; // 0x0

	};
}

