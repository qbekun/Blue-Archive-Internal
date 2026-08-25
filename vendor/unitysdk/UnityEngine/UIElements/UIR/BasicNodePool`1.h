#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_UIR_BASICNODEPOOL`1_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_BASICNODEPOOL`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_BASICNODEPOOL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int BasicNodePool`1_TypeDefinitionIndex = 30721;

	class BasicNodePool`1 : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::Pkcs12Utilities
	{
	public:
		::System::Void Reset(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BASICNODEPOOL`1_RESET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Create()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BASICNODEPOOL`1_CREATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BASICNODEPOOL`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

