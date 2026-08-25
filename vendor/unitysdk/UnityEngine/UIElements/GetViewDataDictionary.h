#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ISerializableJsonDictionary; }

#define UNITYENGINE_UIELEMENTS_GETVIEWDATADICTIONARY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA321300)
#define UNITYENGINE_UIELEMENTS_GETVIEWDATADICTIONARY_INVOKE_OFFSET UNITYSDK_OFFSET(0xA3213C0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int GetViewDataDictionary_TypeDefinitionIndex = 30137;

	class GetViewDataDictionary : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GETVIEWDATADICTIONARY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::ISerializableJsonDictionary* Invoke()
		{
			return (return (::UnityEngine::UIElements::ISerializableJsonDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GETVIEWDATADICTIONARY_INVOKE_OFFSET))(nullptr);
		}

	};
}

