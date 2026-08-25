#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_IBINDING_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IBINDING_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IBINDING_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IBinding_TypeDefinitionIndex = 30307;

	class IBinding : public Il2CppObject
	{
	public:
		::System::Void PreUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IBINDING_PREUPDATE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IBINDING_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IBINDING_RELEASE_OFFSET))(nullptr);
		}

	};
}

