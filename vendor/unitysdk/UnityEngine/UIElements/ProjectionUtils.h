#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Matrix4x4; }

#define UNITYENGINE_UIELEMENTS_PROJECTIONUTILS_ORTHO_OFFSET UNITYSDK_OFFSET(0xA325830)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ProjectionUtils_TypeDefinitionIndex = 30146;

	class ProjectionUtils : public Il2CppObject
	{
	public:
		::UnityEngine::Matrix4x4* Ortho(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PROJECTIONUTILS_ORTHO_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

