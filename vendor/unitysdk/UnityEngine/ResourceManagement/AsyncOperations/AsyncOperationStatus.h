#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::AsyncOperations { class AsyncOperationStatus; }

namespace UnityEngine::ResourceManagement::AsyncOperations
{
	inline static constexpr unsigned int AsyncOperationStatus_TypeDefinitionIndex = 36433;

	class AsyncOperationStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus* None; // 0x0
		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus* Succeeded; // 0x0
		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus* Failed; // 0x0

	};
}

