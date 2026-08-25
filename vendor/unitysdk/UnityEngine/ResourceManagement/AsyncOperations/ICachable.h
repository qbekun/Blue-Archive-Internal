#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::Util { class IOperationCacheKey; }

#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_ICACHABLE_SET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_ICACHABLE_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement::AsyncOperations
{
	inline static constexpr unsigned int ICachable_TypeDefinitionIndex = 36426;

	class ICachable : public Il2CppObject
	{
	public:
		::System::Void set_Key(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_ICACHABLE_SET_KEY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ResourceManagement::Util::IOperationCacheKey* get_Key()
		{
			return (return (::UnityEngine::ResourceManagement::Util::IOperationCacheKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_ICACHABLE_GET_KEY_OFFSET))(nullptr);
		}

	};
}

