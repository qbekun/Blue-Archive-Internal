#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class PolyNode; }

#define UNITYENGINE_RENDERING_UNIVERSAL_POLYTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF8EA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POLYTREE_GETFIRST_OFFSET UNITYSDK_OFFSET(0x9FF8FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POLYTREE_CLEAR_OFFSET UNITYSDK_OFFSET(0x9FF9050)
#define UNITYENGINE_RENDERING_UNIVERSAL_POLYTREE_GET_TOTAL_OFFSET UNITYSDK_OFFSET(0x9FF9120)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PolyTree_TypeDefinitionIndex = 32431;

	class PolyTree : public Il2CppObject
	{
	public:
		Il2CppObject* m_AllPolys; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYTREE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::PolyNode* GetFirst()
		{
			return (return (::UnityEngine::Rendering::Universal::PolyNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYTREE_GETFIRST_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYTREE_CLEAR_OFFSET))(nullptr);
		}

		::System::Int32 get_Total()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYTREE_GET_TOTAL_OFFSET))(nullptr);
		}

	};
}

