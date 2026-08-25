#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::VFX { class VFXEventAttribute; }

#define UNITYENGINE_VFX_VFXOUTPUTEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A8750)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VFXOutputEventArgs_TypeDefinitionIndex = 37927;

	class VFXOutputEventArgs : public Il2CppObject
	{
	public:
		::System::Int32 _nameId_k__BackingField; // 0x10
		::UnityEngine::VFX::VFXEventAttribute* _eventAttribute_k__BackingField; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::UnityEngine::VFX::VFXEventAttribute* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::VFX::VFXEventAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXOUTPUTEVENTARGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

