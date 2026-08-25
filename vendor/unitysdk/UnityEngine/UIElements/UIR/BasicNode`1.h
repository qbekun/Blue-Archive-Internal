#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_UIR_BASICNODE`1_APPENDTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_BASICNODE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int BasicNode`1_TypeDefinitionIndex = 30720;

	class BasicNode`1 : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory
	{
	public:
		Il2CppObject* next; // 0x0
		Il2CppObject* data; // 0x0

		::System::Void AppendTo(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BASICNODE`1_APPENDTO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BASICNODE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

