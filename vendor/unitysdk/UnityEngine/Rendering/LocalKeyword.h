#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class LocalKeywordSpace; }
namespace UnityEngine::Rendering { class LocalKeyword; }

#define UNITYENGINE_RENDERING_LOCALKEYWORD_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2676D0)
#define UNITYENGINE_RENDERING_LOCALKEYWORD_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2676E0)
#define UNITYENGINE_RENDERING_LOCALKEYWORD_EQUALS_OFFSET UNITYSDK_OFFSET(0xA267770)
#define UNITYENGINE_RENDERING_LOCALKEYWORD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2677C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LocalKeyword_TypeDefinitionIndex = 31585;

	class LocalKeyword : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::LocalKeywordSpace* m_SpaceInfo; // 0x10
		::System::String* m_Name; // 0x18
		::System::UInt32 m_Index; // 0x20

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOCALKEYWORD_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOCALKEYWORD_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::LocalKeyword* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::LocalKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOCALKEYWORD_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOCALKEYWORD_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

