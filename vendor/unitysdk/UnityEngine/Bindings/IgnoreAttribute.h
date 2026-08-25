#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_BINDINGS_IGNOREATTRIBUTE_SET_DOESNOTCONTRIBUTETOSIZE_OFFSET UNITYSDK_OFFSET(0xA2A60E0)
#define UNITYENGINE_BINDINGS_IGNOREATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A60F0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int IgnoreAttribute_TypeDefinitionIndex = 37895;

	class IgnoreAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _DoesNotContributeToSize_k__BackingField; // 0x10

		::System::Void set_DoesNotContributeToSize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_IGNOREATTRIBUTE_SET_DOESNOTCONTRIBUTETOSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_IGNOREATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

