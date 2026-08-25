#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_BURSTCOMPATIBLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E387D0)
#define UNITY_COLLECTIONS_BURSTCOMPATIBLEATTRIBUTE_SET_GENERICTYPEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9E387E0)

namespace Unity::Collections
{
	inline static constexpr unsigned int BurstCompatibleAttribute_TypeDefinitionIndex = 37017;

	class BurstCompatibleAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::Il2CppArray<::System::Object*>* _GenericTypeArguments_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_BURSTCOMPATIBLEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_GenericTypeArguments(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_BURSTCOMPATIBLEATTRIBUTE_SET_GENERICTYPEARGUMENTS_OFFSET))(arg, nullptr);
		}

	};
}

