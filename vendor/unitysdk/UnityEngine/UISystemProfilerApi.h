#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_UISYSTEMPROFILERAPI_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0xA456710)
#define UNITYENGINE_UISYSTEMPROFILERAPI_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0xA456750)
#define UNITYENGINE_UISYSTEMPROFILERAPI_ADDMARKER_OFFSET UNITYSDK_OFFSET(0xA456790)

namespace UnityEngine
{
	inline static constexpr unsigned int UISystemProfilerApi_TypeDefinitionIndex = 37685;

	class UISystemProfilerApi : public Il2CppObject
	{
	public:
		::System::Void BeginSample(SampleType* arg)
		{
			((::System::Void(*)(SampleType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UISYSTEMPROFILERAPI_BEGINSAMPLE_OFFSET))(arg, nullptr);
		}

		::System::Void EndSample(SampleType* arg)
		{
			((::System::Void(*)(SampleType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UISYSTEMPROFILERAPI_ENDSAMPLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddMarker(::System::String* str, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UISYSTEMPROFILERAPI_ADDMARKER_OFFSET))(str, arg, nullptr);
		}

	};
}

