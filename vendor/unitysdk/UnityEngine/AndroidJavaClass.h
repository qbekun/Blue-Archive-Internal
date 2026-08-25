#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_ANDROIDJAVACLASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1B3FC0)
#define UNITYENGINE_ANDROIDJAVACLASS__ANDROIDJAVACLASS_OFFSET UNITYSDK_OFFSET(0xA1B8610)
#define UNITYENGINE_ANDROIDJAVACLASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1B8470)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaClass_TypeDefinitionIndex = 37064;

	class AndroidJavaClass : public ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVACLASS_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void _AndroidJavaClass(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVACLASS__ANDROIDJAVACLASS_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVACLASS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

