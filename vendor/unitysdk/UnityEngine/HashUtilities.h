#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Hash128&; }

#define UNITYENGINE_HASHUTILITIES_APPENDHASH_OFFSET UNITYSDK_OFFSET(0xA21CF10)

namespace UnityEngine
{
	inline static constexpr unsigned int HashUtilities_TypeDefinitionIndex = 31078;

	class HashUtilities : public Il2CppObject
	{
	public:
		::System::Void AppendHash(::UnityEngine::Hash128&* arg, ::UnityEngine::Hash128&* arg)
		{
			((::System::Void(*)(::UnityEngine::Hash128&*, ::UnityEngine::Hash128&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASHUTILITIES_APPENDHASH_OFFSET))(arg, arg, nullptr);
		}

	};
}

