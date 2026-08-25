#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_REQUIRECOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22E840)
#define UNITYENGINE_REQUIRECOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22E870)

namespace UnityEngine
{
	inline static constexpr unsigned int RequireComponent_TypeDefinitionIndex = 31133;

	class RequireComponent : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* m_Type0; // 0x10
		::System::Type* m_Type1; // 0x18
		::System::Type* m_Type2; // 0x20

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REQUIRECOMPONENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REQUIRECOMPONENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

