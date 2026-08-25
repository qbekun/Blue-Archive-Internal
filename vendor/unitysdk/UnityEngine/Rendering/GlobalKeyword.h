#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class GlobalKeyword; }

#define UNITYENGINE_RENDERING_GLOBALKEYWORD_GETGLOBALKEYWORDCOUNT_OFFSET UNITYSDK_OFFSET(0xA267450)
#define UNITYENGINE_RENDERING_GLOBALKEYWORD_GETGLOBALKEYWORDINDEX_OFFSET UNITYSDK_OFFSET(0xA267490)
#define UNITYENGINE_RENDERING_GLOBALKEYWORD_CREATEGLOBALKEYWORD_OFFSET UNITYSDK_OFFSET(0xA2674D0)
#define UNITYENGINE_RENDERING_GLOBALKEYWORD_CREATE_OFFSET UNITYSDK_OFFSET(0xA267510)
#define UNITYENGINE_RENDERING_GLOBALKEYWORD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA267570)
#define UNITYENGINE_RENDERING_GLOBALKEYWORD_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2676C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GlobalKeyword_TypeDefinitionIndex = 31584;

	class GlobalKeyword : public Il2CppObject
	{
	public:
		::System::String* m_Name; // 0x10
		::System::UInt32 m_Index; // 0x18

		::System::UInt32 GetGlobalKeywordCount()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GLOBALKEYWORD_GETGLOBALKEYWORDCOUNT_OFFSET))(nullptr);
		}

		::System::UInt32 GetGlobalKeywordIndex(::System::String* str)
		{
			return (return (::System::UInt32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GLOBALKEYWORD_GETGLOBALKEYWORDINDEX_OFFSET))(str, nullptr);
		}

		::System::Void CreateGlobalKeyword(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GLOBALKEYWORD_CREATEGLOBALKEYWORD_OFFSET))(str, nullptr);
		}

		::UnityEngine::Rendering::GlobalKeyword* Create(::System::String* str)
		{
			return (return (::UnityEngine::Rendering::GlobalKeyword*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GLOBALKEYWORD_CREATE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GLOBALKEYWORD_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GLOBALKEYWORD_TOSTRING_OFFSET))(nullptr);
		}

	};
}

