#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UI_MULTIPLEDISPLAYUTILITIES_GETRELATIVEMOUSEPOSITIONFORDRAG_OFFSET UNITYSDK_OFFSET(0xA46FCD0)
#define UNITYENGINE_UI_MULTIPLEDISPLAYUTILITIES_RELATIVEMOUSEATSCALED_OFFSET UNITYSDK_OFFSET(0xA46FD60)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int MultipleDisplayUtilities_TypeDefinitionIndex = 34828;

	class MultipleDisplayUtilities : public Il2CppObject
	{
	public:
		::System::Boolean GetRelativeMousePositionForDrag(::UnityEngine::EventSystems::PointerEventData* arg, ::UnityEngine::Vector2&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MULTIPLEDISPLAYUTILITIES_GETRELATIVEMOUSEPOSITIONFORDRAG_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* RelativeMouseAtScaled(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MULTIPLEDISPLAYUTILITIES_RELATIVEMOUSEATSCALED_OFFSET))(arg, nullptr);
		}

	};
}

