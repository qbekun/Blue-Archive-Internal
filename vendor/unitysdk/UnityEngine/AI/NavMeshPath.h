#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_AI_NAVMESHPATH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1AF830)
#define UNITYENGINE_AI_NAVMESHPATH_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA1AF8B0)
#define UNITYENGINE_AI_NAVMESHPATH_INITIALIZENAVMESHPATH_OFFSET UNITYSDK_OFFSET(0xA1AF870)
#define UNITYENGINE_AI_NAVMESHPATH_DESTROYNAVMESHPATH_OFFSET UNITYSDK_OFFSET(0xA1AF9D0)
#define UNITYENGINE_AI_NAVMESHPATH_CLEARCORNERSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1AFA10)
#define UNITYENGINE_AI_NAVMESHPATH_CLEARCORNERS_OFFSET UNITYSDK_OFFSET(0xA1AFA50)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshPath_TypeDefinitionIndex = 37490;

	class NavMeshPath : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		::Il2CppArray<::System::Object*>* m_Corners; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_FINALIZE_OFFSET))(nullptr);
		}

		::System::Int32 InitializeNavMeshPath()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_INITIALIZENAVMESHPATH_OFFSET))(nullptr);
		}

		::System::Void DestroyNavMeshPath(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_DESTROYNAVMESHPATH_OFFSET))(arg, nullptr);
		}

		::System::Void ClearCornersInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_CLEARCORNERSINTERNAL_OFFSET))(nullptr);
		}

		::System::Void ClearCorners()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_CLEARCORNERS_OFFSET))(nullptr);
		}

	};
}

