#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_ISERIALIZABLEJSONDICTIONARY_SET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISERIALIZABLEJSONDICTIONARY_OVERWRITE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISERIALIZABLEJSONDICTIONARY_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ISerializableJsonDictionary_TypeDefinitionIndex = 30113;

	class ISerializableJsonDictionary : public Il2CppObject
	{
	public:
		::System::Void Set(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISERIALIZABLEJSONDICTIONARY_SET_OFFSET))(str, arg, nullptr);
		}

		::System::Void Overwrite(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISERIALIZABLEJSONDICTIONARY_OVERWRITE_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean ContainsKey(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISERIALIZABLEJSONDICTIONARY_CONTAINSKEY_OFFSET))(str, nullptr);
		}

	};
}

