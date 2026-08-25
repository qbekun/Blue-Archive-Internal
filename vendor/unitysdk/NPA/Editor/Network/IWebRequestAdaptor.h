#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class INXPRequest; }

#define NPA_EDITOR_NETWORK_IWEBREQUESTADAPTOR_EXECUTEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int IWebRequestAdaptor_TypeDefinitionIndex = 26633;

	class IWebRequestAdaptor : public Il2CppObject
	{
	public:
		::System::Void ExecuteAsync(::NPA::Editor::Network::INXPRequest* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::INXPRequest*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_IWEBREQUESTADAPTOR_EXECUTEASYNC_OFFSET))(arg, arg, nullptr);
		}

	};
}

