#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace TMPro { class TMP_Text; }

#define TMPRO_TMP_TEXTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17EC50)
#define TMPRO_TMP_TEXTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17ED90)
#define TMPRO_TMP_TEXTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17EED0)
#define TMPRO_TMP_TEXTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xA17F070)
#define TMPRO_TMP_TEXTINFO_CLEARALLDATA_OFFSET UNITYSDK_OFFSET(0xA17F0D0)
#define TMPRO_TMP_TEXTINFO_CLEARMESHINFO_OFFSET UNITYSDK_OFFSET(0xA17F210)
#define TMPRO_TMP_TEXTINFO_CLEARALLMESHINFO_OFFSET UNITYSDK_OFFSET(0xA17F2B0)
#define TMPRO_TMP_TEXTINFO_RESETVERTEXLAYOUT_OFFSET UNITYSDK_OFFSET(0xA17F350)
#define TMPRO_TMP_TEXTINFO_CLEARUNUSEDVERTICES_OFFSET UNITYSDK_OFFSET(0xA17F3F0)
#define TMPRO_TMP_TEXTINFO_CLEARLINEINFO_OFFSET UNITYSDK_OFFSET(0xA17F4A0)
#define TMPRO_TMP_TEXTINFO_CLEARPAGEINFO_OFFSET UNITYSDK_OFFSET(0xA17F720)
#define TMPRO_TMP_TEXTINFO_COPYMESHINFOVERTEXDATA_OFFSET UNITYSDK_OFFSET(0xA17F840)
#define TMPRO_TMP_TEXTINFO_RESIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTINFO_RESIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_TEXTINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA17FCB0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextInfo_TypeDefinitionIndex = 33752;

	class TMP_TextInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* k_InfinityVectorPositive; // 0x0
		::UnityEngine::Vector2* k_InfinityVectorNegative; // 0x8
		::TMPro::TMP_Text* textComponent; // 0x10
		::System::Int32 characterCount; // 0x18
		::System::Int32 spriteCount; // 0x1C
		::System::Int32 spaceCount; // 0x20
		::System::Int32 wordCount; // 0x24
		::System::Int32 linkCount; // 0x28
		::System::Int32 lineCount; // 0x2C
		::System::Int32 pageCount; // 0x30
		::System::Int32 materialCount; // 0x34
		::Il2CppArray<::System::Object*>* characterInfo; // 0x38
		::Il2CppArray<::System::Object*>* wordInfo; // 0x40
		::Il2CppArray<::System::Object*>* linkInfo; // 0x48
		::Il2CppArray<::System::Object*>* lineInfo; // 0x50
		::Il2CppArray<::System::Object*>* pageInfo; // 0x58
		::Il2CppArray<::System::Object*>* meshInfo; // 0x60
		::Il2CppArray<::System::Object*>* m_CachedMeshInfo; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::TMPro::TMP_Text* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Text*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEAR_OFFSET))(nullptr);
		}

		::System::Void ClearAllData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARALLDATA_OFFSET))(nullptr);
		}

		::System::Void ClearMeshInfo(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARMESHINFO_OFFSET))(arg, nullptr);
		}

		::System::Void ClearAllMeshInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARALLMESHINFO_OFFSET))(nullptr);
		}

		::System::Void ResetVertexLayout(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_RESETVERTEXLAYOUT_OFFSET))(arg, nullptr);
		}

		::System::Void ClearUnusedVertices(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARUNUSEDVERTICES_OFFSET))(arg, nullptr);
		}

		::System::Void ClearLineInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARLINEINFO_OFFSET))(nullptr);
		}

		::System::Void ClearPageInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARPAGEINFO_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* CopyMeshInfoVertexData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_COPYMESHINFOVERTEXDATA_OFFSET))(nullptr);
		}

		::System::Void Resize(::System::Object[]&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_RESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Resize(::System::Object[]&* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_RESIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

