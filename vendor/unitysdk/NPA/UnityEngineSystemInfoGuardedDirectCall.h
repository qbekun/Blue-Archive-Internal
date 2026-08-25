#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class OperatingSystemFamily; }

#define NPA_UNITYENGINESYSTEMINFOGUARDEDDIRECTCALL_GETOPERATINGSYSTEMFAMILY_OFFSET UNITYSDK_OFFSET(0x9BC36E0)
#define NPA_UNITYENGINESYSTEMINFOGUARDEDDIRECTCALL_GETOPERATINGSYSTEMVERSION_OFFSET UNITYSDK_OFFSET(0x9BC3790)
#define NPA_UNITYENGINESYSTEMINFOGUARDEDDIRECTCALL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC3440)

namespace NPA
{
	inline static constexpr unsigned int UnityEngineSystemInfoGuardedDirectCall_TypeDefinitionIndex = 25579;

	class UnityEngineSystemInfoGuardedDirectCall : public Il2CppObject
	{
	public:
		::UnityEngine::OperatingSystemFamily* GetOperatingSystemFamily()
		{
			return (return (::UnityEngine::OperatingSystemFamily*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINESYSTEMINFOGUARDEDDIRECTCALL_GETOPERATINGSYSTEMFAMILY_OFFSET))(nullptr);
		}

		::System::String* GetOperatingSystemVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINESYSTEMINFOGUARDEDDIRECTCALL_GETOPERATINGSYSTEMVERSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINESYSTEMINFOGUARDEDDIRECTCALL_.CTOR_OFFSET))(nullptr);
		}

	};
}

