#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`2_SERIALIZEKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`2_DESERIALIZEKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`2_SERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`2_DESERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SerializedDictionary`2_TypeDefinitionIndex = 33928;

	class SerializedDictionary`2 : public WriteCallbackInfo
	{
	public:
		Il2CppObject* SerializeKey(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`2_SERIALIZEKEY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DeserializeKey(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`2_DESERIALIZEKEY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SerializeValue(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`2_SERIALIZEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`2_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* DeserializeValue(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`2_DESERIALIZEVALUE_OFFSET))(arg, nullptr);
		}

	};
}

