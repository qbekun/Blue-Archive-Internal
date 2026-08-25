#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }

#define NPA_EDITOR_NETWORK_NXPREQUESTEXTENSION_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x9C1A8A0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPRequestExtension_TypeDefinitionIndex = 26639;

	class NXPRequestExtension : public Il2CppObject
	{
	public:
		UnityWebRequestAsyncOperationAwaiter* GetAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation* arg)
		{
			return (return (UnityWebRequestAsyncOperationAwaiter*(*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTEXTENSION_GETAWAITER_OFFSET))(arg, nullptr);
		}

	};
}

