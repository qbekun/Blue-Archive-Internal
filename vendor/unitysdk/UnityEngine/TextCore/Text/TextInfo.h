#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2E0F00)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xA2E1040)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTINFO_CLEARMESHINFO_OFFSET UNITYSDK_OFFSET(0xA2E10A0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTINFO_CLEARLINEINFO_OFFSET UNITYSDK_OFFSET(0xA2E1140)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTINFO_RESIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTINFO_RESIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2E13B0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextInfo_TypeDefinitionIndex = 35602;

	class TextInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* s_InfinityVectorPositive; // 0x0
		::UnityEngine::Vector2* s_InfinityVectorNegative; // 0x8
		::System::Int32 characterCount; // 0x10
		::System::Int32 spriteCount; // 0x14
		::System::Int32 spaceCount; // 0x18
		::System::Int32 wordCount; // 0x1C
		::System::Int32 linkCount; // 0x20
		::System::Int32 lineCount; // 0x24
		::System::Int32 pageCount; // 0x28
		::System::Int32 materialCount; // 0x2C
		::Il2CppArray<::System::Object*>* textElementInfo; // 0x30
		::Il2CppArray<::System::Object*>* wordInfo; // 0x38
		::Il2CppArray<::System::Object*>* linkInfo; // 0x40
		::Il2CppArray<::System::Object*>* lineInfo; // 0x48
		::Il2CppArray<::System::Object*>* pageInfo; // 0x50
		::Il2CppArray<::System::Object*>* meshInfo; // 0x58
		::System::Boolean isDirty; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTINFO_CLEAR_OFFSET))(nullptr);
		}

		::System::Void ClearMeshInfo(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTINFO_CLEARMESHINFO_OFFSET))(arg, nullptr);
		}

		::System::Void ClearLineInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTINFO_CLEARLINEINFO_OFFSET))(nullptr);
		}

		::System::Void Resize(::System::Object[]&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTINFO_RESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Resize(::System::Object[]&* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTINFO_RESIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTINFO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

