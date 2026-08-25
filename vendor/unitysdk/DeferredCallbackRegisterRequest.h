#pragma once
#include "unitysdk.h"

namespace UnityEngine::ResourceManagement::AsyncOperations { class IAsyncOperation; }

	inline static constexpr unsigned int DeferredCallbackRegisterRequest_TypeDefinitionIndex = 36351;

	class DeferredCallbackRegisterRequest : public Il2CppObject
	{
	public:
		::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* operation; // 0x10
		::System::Boolean incrementRefCount; // 0x18

	};

