#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`4_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`4_DESERIALIZEKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`4_SERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`4_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`4_SERIALIZEKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`4_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`4_DESERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SerializedDictionary`4_TypeDefinitionIndex = 33929;

	class SerializedDictionary`4 : public <CoContinueFieldContentStage>d__54
	{
	public:
		Il2CppObject* m_Keys; // 0x0
		Il2CppObject* m_Values; // 0x0

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`4_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* DeserializeKey(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`4_DESERIALIZEKEY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SerializeValue(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`4_SERIALIZEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`4_ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* SerializeKey(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`4_SERIALIZEKEY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`4_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* DeserializeValue(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SERIALIZEDDICTIONARY`4_DESERIALIZEVALUE_OFFSET))(arg, nullptr);
		}

	};
}

