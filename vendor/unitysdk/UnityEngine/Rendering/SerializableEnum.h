#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_SERIALIZABLEENUM_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FAA530)
#define UNITYENGINE_RENDERING_SERIALIZABLEENUM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FAA580)
#define UNITYENGINE_RENDERING_SERIALIZABLEENUM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FAA630)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SerializableEnum_TypeDefinitionIndex = 33927;

	class SerializableEnum : public Il2CppObject
	{
	public:
		::System::String* m_EnumValueAsString; // 0x10
		::System::Type* m_EnumType; // 0x18

		::System::Void set_value(::System::Enum* arg)
		{
			((::System::Void(*)(::System::Enum*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SERIALIZABLEENUM_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Enum* get_value()
		{
			return (return (::System::Enum*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SERIALIZABLEENUM_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SERIALIZABLEENUM_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

