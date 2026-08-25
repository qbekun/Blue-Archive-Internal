#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_ADDRESSABLEASSETS_IKEYEVALUATOR_RUNTIMEKEYISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_IKEYEVALUATOR_GET_RUNTIMEKEY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int IKeyEvaluator_TypeDefinitionIndex = 36201;

	class IKeyEvaluator : public Il2CppObject
	{
	public:
		::System::Boolean RuntimeKeyIsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_IKEYEVALUATOR_RUNTIMEKEYISVALID_OFFSET))(nullptr);
		}

		::System::Object* get_RuntimeKey()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_IKEYEVALUATOR_GET_RUNTIMEKEY_OFFSET))(nullptr);
		}

	};
}

