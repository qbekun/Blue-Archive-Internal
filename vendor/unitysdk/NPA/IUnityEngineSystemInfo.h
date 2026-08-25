#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class OperatingSystemFamily; }

#define NPA_IUNITYENGINESYSTEMINFO_GETOPERATINGSYSTEMFAMILY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IUNITYENGINESYSTEMINFO_GETOPERATINGSYSTEMVERSION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int IUnityEngineSystemInfo_TypeDefinitionIndex = 25578;

	class IUnityEngineSystemInfo : public Il2CppObject
	{
	public:
		::UnityEngine::OperatingSystemFamily* GetOperatingSystemFamily()
		{
			return (return (::UnityEngine::OperatingSystemFamily*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_IUNITYENGINESYSTEMINFO_GETOPERATINGSYSTEMFAMILY_OFFSET))(nullptr);
		}

		::System::String* GetOperatingSystemVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_IUNITYENGINESYSTEMINFO_GETOPERATINGSYSTEMVERSION_OFFSET))(nullptr);
		}

	};
}

