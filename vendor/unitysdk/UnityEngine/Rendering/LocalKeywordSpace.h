#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class LocalKeywordSpace; }

#define UNITYENGINE_RENDERING_LOCALKEYWORDSPACE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA267820)
#define UNITYENGINE_RENDERING_LOCALKEYWORDSPACE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2678A0)
#define UNITYENGINE_RENDERING_LOCALKEYWORDSPACE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA2677B0)
#define UNITYENGINE_RENDERING_LOCALKEYWORDSPACE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA267800)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LocalKeywordSpace_TypeDefinitionIndex = 31586;

	class LocalKeywordSpace : public Il2CppObject
	{
	public:
		::System::Int32 m_KeywordSpace; // 0x10

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOCALKEYWORDSPACE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::LocalKeywordSpace* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::LocalKeywordSpace*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOCALKEYWORDSPACE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Rendering::LocalKeywordSpace* arg, ::UnityEngine::Rendering::LocalKeywordSpace* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::LocalKeywordSpace*, ::UnityEngine::Rendering::LocalKeywordSpace*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOCALKEYWORDSPACE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOCALKEYWORDSPACE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

