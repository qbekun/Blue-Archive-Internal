#pragma once
#include "../../../unitysdk.h"

#define MX_SCRIPTS_SERVICES_UNITYOBJECTEXTENSIONS_ISNULL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SCRIPTS_SERVICES_UNITYOBJECTEXTENSIONS_SAFEDESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SCRIPTS_SERVICES_UNITYOBJECTEXTENSIONS_ISNOTNULL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SCRIPTS_SERVICES_UNITYOBJECTEXTENSIONS_SAFEDESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Scripts::Services
{
	inline static constexpr unsigned int UnityObjectExtensions_TypeDefinitionIndex = 15180;

	class UnityObjectExtensions : public Il2CppObject
	{
	public:
		::System::Boolean IsNull(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SCRIPTS_SERVICES_UNITYOBJECTEXTENSIONS_ISNULL_OFFSET))(arg, nullptr);
		}

		::System::Void SafeDestroy(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SCRIPTS_SERVICES_UNITYOBJECTEXTENSIONS_SAFEDESTROY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNotNull(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SCRIPTS_SERVICES_UNITYOBJECTEXTENSIONS_ISNOTNULL_OFFSET))(arg, nullptr);
		}

		::System::Void SafeDestroyImmediate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SCRIPTS_SERVICES_UNITYOBJECTEXTENSIONS_SAFEDESTROYIMMEDIATE_OFFSET))(arg, nullptr);
		}

	};
}

