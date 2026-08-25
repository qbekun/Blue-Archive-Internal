#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_TIMEMSFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA321230)
#define UNITYENGINE_UIELEMENTS_TIMEMSFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xA3212F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TimeMsFunction_TypeDefinitionIndex = 30136;

	class TimeMsFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEMSFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 Invoke()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMEMSFUNCTION_INVOKE_OFFSET))(nullptr);
		}

	};
}

