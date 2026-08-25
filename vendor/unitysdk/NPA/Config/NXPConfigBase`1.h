#pragma once
#include "../../unitysdk.h"

#define NPA_CONFIG_NXPCONFIGBASE`1_GET_RESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_CONFIG_NXPCONFIGBASE`1_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_CONFIG_NXPCONFIGBASE`1_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_CONFIG_NXPCONFIGBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Config
{
	inline static constexpr unsigned int NXPConfigBase`1_TypeDefinitionIndex = 26110;

	class NXPConfigBase`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _instance; // 0x0

		::System::String* get_ResourcePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_CONFIG_NXPCONFIGBASE`1_GET_RESOURCEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* Load()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_CONFIG_NXPCONFIGBASE`1_LOAD_OFFSET))(nullptr);
		}

		Il2CppObject* Get()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_CONFIG_NXPCONFIGBASE`1_GET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_CONFIG_NXPCONFIGBASE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

