#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_SHADERKEYWORD_GETGLOBALKEYWORDCOUNT_OFFSET UNITYSDK_OFFSET(0xA2678B0)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_GETGLOBALKEYWORDINDEX_OFFSET UNITYSDK_OFFSET(0xA2678F0)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_CREATEGLOBALKEYWORD_OFFSET UNITYSDK_OFFSET(0xA267930)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA267970)
#define UNITYENGINE_RENDERING_SHADERKEYWORD_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA267A40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShaderKeyword_TypeDefinitionIndex = 31587;

	class ShaderKeyword : public Il2CppObject
	{
	public:
		::System::String* m_Name; // 0x10
		::System::UInt32 m_Index; // 0x18
		::System::Boolean m_IsLocal; // 0x1C
		::System::Boolean m_IsCompute; // 0x1D
		::System::Boolean m_IsValid; // 0x1E

		::System::UInt32 GetGlobalKeywordCount()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_GETGLOBALKEYWORDCOUNT_OFFSET))(nullptr);
		}

		::System::UInt32 GetGlobalKeywordIndex(::System::String* str)
		{
			return (return (::System::UInt32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_GETGLOBALKEYWORDINDEX_OFFSET))(str, nullptr);
		}

		::System::Void CreateGlobalKeyword(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_CREATEGLOBALKEYWORD_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORD_TOSTRING_OFFSET))(nullptr);
		}

	};
}

