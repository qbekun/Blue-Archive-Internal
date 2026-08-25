#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_ALIGNMENTUTILS_ROUNDTOPIXELGRID_OFFSET UNITYSDK_OFFSET(0xA30C7A0)
#define UNITYENGINE_UIELEMENTS_ALIGNMENTUTILS_CEILTOPIXELGRID_OFFSET UNITYSDK_OFFSET(0xA30C7D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int AlignmentUtils_TypeDefinitionIndex = 30059;

	class AlignmentUtils : public Il2CppObject
	{
	public:
		::System::Single RoundToPixelGrid(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ALIGNMENTUTILS_ROUNDTOPIXELGRID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single CeilToPixelGrid(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ALIGNMENTUTILS_CEILTOPIXELGRID_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

