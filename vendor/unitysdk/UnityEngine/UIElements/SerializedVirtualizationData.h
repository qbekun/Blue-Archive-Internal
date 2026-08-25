#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UIELEMENTS_SERIALIZEDVIRTUALIZATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3987A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int SerializedVirtualizationData_TypeDefinitionIndex = 30302;

	class SerializedVirtualizationData : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* scrollOffset; // 0x10
		::System::Int32 firstVisibleIndex; // 0x18
		::System::Single contentPadding; // 0x1C
		::System::Single contentHeight; // 0x20
		::System::Int32 anchoredItemIndex; // 0x24
		::System::Single anchorOffset; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SERIALIZEDVIRTUALIZATIONDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

