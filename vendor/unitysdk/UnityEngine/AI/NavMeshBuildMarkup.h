#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }

#define UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_OVERRIDEAREA_OFFSET UNITYSDK_OFFSET(0xA1B38B0)
#define UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_AREA_OFFSET UNITYSDK_OFFSET(0xA1B38D0)
#define UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_IGNOREFROMBUILD_OFFSET UNITYSDK_OFFSET(0xA1B38E0)
#define UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_ROOT_OFFSET UNITYSDK_OFFSET(0xA1B3900)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshBuildMarkup_TypeDefinitionIndex = 37508;

	class NavMeshBuildMarkup : public Il2CppObject
	{
	public:
		::System::Int32 m_OverrideArea; // 0x10
		::System::Int32 m_Area; // 0x14
		::System::Int32 m_IgnoreFromBuild; // 0x18
		::System::Int32 m_InstanceID; // 0x1C

		::System::Void set_overrideArea(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_OVERRIDEAREA_OFFSET))(arg, nullptr);
		}

		::System::Void set_area(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_AREA_OFFSET))(arg, nullptr);
		}

		::System::Void set_ignoreFromBuild(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_IGNOREFROMBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void set_root(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDMARKUP_SET_ROOT_OFFSET))(arg, nullptr);
		}

	};
}

