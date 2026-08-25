#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class OperatingSystemFamily; }

#define NPA_UNITYENGINESYSTEMINFOSNAPSHOT_GETOPERATINGSYSTEMFAMILY_OFFSET UNITYSDK_OFFSET(0x9BC3840)
#define NPA_UNITYENGINESYSTEMINFOSNAPSHOT_GETOPERATINGSYSTEMVERSION_OFFSET UNITYSDK_OFFSET(0x9BC3850)
#define NPA_UNITYENGINESYSTEMINFOSNAPSHOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC3280)

namespace NPA
{
	inline static constexpr unsigned int UnityEngineSystemInfoSnapshot_TypeDefinitionIndex = 25580;

	class UnityEngineSystemInfoSnapshot : public Il2CppObject
	{
	public:
		::UnityEngine::OperatingSystemFamily* _family; // 0x10
		::System::String* _osVersion; // 0x18

		::UnityEngine::OperatingSystemFamily* GetOperatingSystemFamily()
		{
			return (return (::UnityEngine::OperatingSystemFamily*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINESYSTEMINFOSNAPSHOT_GETOPERATINGSYSTEMFAMILY_OFFSET))(nullptr);
		}

		::System::String* GetOperatingSystemVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINESYSTEMINFOSNAPSHOT_GETOPERATINGSYSTEMVERSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINESYSTEMINFOSNAPSHOT_.CTOR_OFFSET))(nullptr);
		}

	};
}

