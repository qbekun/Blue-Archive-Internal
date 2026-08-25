#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_SERIALIZATION_FORMERLYSERIALIZEDASATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24B480)

namespace UnityEngine::Serialization
{
	inline static constexpr unsigned int FormerlySerializedAsAttribute_TypeDefinitionIndex = 31306;

	class FormerlySerializedAsAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* m_oldName; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SERIALIZATION_FORMERLYSERIALIZEDASATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

