#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TextGenerationSettings; }
namespace UnityEngine { class TextGenerationError; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class FontStyle; }
namespace UnityEngine { class TextAnchor; }
namespace UnityEngine { class VerticalWrapMode; }
namespace UnityEngine { class HorizontalWrapMode; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class TextGenerationError&; }
namespace UnityEngine { class Rect&; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_TEXTGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2E5B80)
#define UNITYENGINE_TEXTGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2E5B90)
#define UNITYENGINE_TEXTGENERATOR_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA2E5D40)
#define UNITYENGINE_TEXTGENERATOR_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2E5E80)
#define UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNTVISIBLE_OFFSET UNITYSDK_OFFSET(0xA2E5F50)
#define UNITYENGINE_TEXTGENERATOR_VALIDATEDSETTINGS_OFFSET UNITYSDK_OFFSET(0xA2E5FD0)
#define UNITYENGINE_TEXTGENERATOR_INVALIDATE_OFFSET UNITYSDK_OFFSET(0xA2E63C0)
#define UNITYENGINE_TEXTGENERATOR_GETCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA2E63D0)
#define UNITYENGINE_TEXTGENERATOR_GETLINES_OFFSET UNITYSDK_OFFSET(0xA2E6450)
#define UNITYENGINE_TEXTGENERATOR_GETVERTICES_OFFSET UNITYSDK_OFFSET(0xA2E64D0)
#define UNITYENGINE_TEXTGENERATOR_GETPREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0xA2E6550)
#define UNITYENGINE_TEXTGENERATOR_GETPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0xA2E6900)
#define UNITYENGINE_TEXTGENERATOR_POPULATEWITHERRORS_OFFSET UNITYSDK_OFFSET(0xA2E6B10)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_OFFSET UNITYSDK_OFFSET(0xA2E6760)
#define UNITYENGINE_TEXTGENERATOR_POPULATEWITHERROR_OFFSET UNITYSDK_OFFSET(0xA2E6DE0)
#define UNITYENGINE_TEXTGENERATOR_POPULATEALWAYS_OFFSET UNITYSDK_OFFSET(0xA2E6ED0)
#define UNITYENGINE_TEXTGENERATOR_GET_VERTS_OFFSET UNITYSDK_OFFSET(0xA2E7500)
#define UNITYENGINE_TEXTGENERATOR_GET_CHARACTERS_OFFSET UNITYSDK_OFFSET(0xA2E7560)
#define UNITYENGINE_TEXTGENERATOR_GET_LINES_OFFSET UNITYSDK_OFFSET(0xA2E75C0)
#define UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_OFFSET UNITYSDK_OFFSET(0xA2E68B0)
#define UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0xA2E5F90)
#define UNITYENGINE_TEXTGENERATOR_GET_LINECOUNT_OFFSET UNITYSDK_OFFSET(0xA2E7660)
#define UNITYENGINE_TEXTGENERATOR_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA2E5D00)
#define UNITYENGINE_TEXTGENERATOR_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0xA2E5F10)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2E76A0)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2E7270)
#define UNITYENGINE_TEXTGENERATOR_GETVERTICESINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2E6510)
#define UNITYENGINE_TEXTGENERATOR_GETCHARACTERSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2E6410)
#define UNITYENGINE_TEXTGENERATOR_GETLINESINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2E6490)
#define UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2E7620)
#define UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2E76F0)

namespace UnityEngine
{
	inline static constexpr unsigned int TextGenerator_TypeDefinitionIndex = 37663;

	class TextGenerator : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		::System::String* m_LastString; // 0x18
		::UnityEngine::TextGenerationSettings* m_LastSettings; // 0x20
		::System::Boolean m_HasGenerated; // 0x80
		::UnityEngine::TextGenerationError* m_LastValid; // 0x84
		Il2CppObject* m_Verts; // 0x88
		Il2CppObject* m_Characters; // 0x90
		Il2CppObject* m_Lines; // 0x98
		::System::Boolean m_CachedVerts; // 0xA0
		::System::Boolean m_CachedCharacters; // 0xA1
		::System::Boolean m_CachedLines; // 0xA2

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 get_characterCountVisible()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNTVISIBLE_OFFSET))(nullptr);
		}

		::UnityEngine::TextGenerationSettings* ValidatedSettings(::UnityEngine::TextGenerationSettings* arg)
		{
			return (return (::UnityEngine::TextGenerationSettings*(*)(::UnityEngine::TextGenerationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_VALIDATEDSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void Invalidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_INVALIDATE_OFFSET))(nullptr);
		}

		::System::Void GetCharacters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void GetLines(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETLINES_OFFSET))(arg, nullptr);
		}

		::System::Void GetVertices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETVERTICES_OFFSET))(arg, nullptr);
		}

		::System::Single GetPreferredWidth(::System::String* str, ::UnityEngine::TextGenerationSettings* arg)
		{
			return (return (::System::Single(*)(::System::String*, ::UnityEngine::TextGenerationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETPREFERREDWIDTH_OFFSET))(str, arg, nullptr);
		}

		::System::Single GetPreferredHeight(::System::String* str, ::UnityEngine::TextGenerationSettings* arg)
		{
			return (return (::System::Single(*)(::System::String*, ::UnityEngine::TextGenerationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETPREFERREDHEIGHT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean PopulateWithErrors(::System::String* str, ::UnityEngine::TextGenerationSettings* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::TextGenerationSettings*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATEWITHERRORS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean Populate(::System::String* str, ::UnityEngine::TextGenerationSettings* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::TextGenerationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::TextGenerationError* PopulateWithError(::System::String* str, ::UnityEngine::TextGenerationSettings* arg)
		{
			return (return (::UnityEngine::TextGenerationError*(*)(::System::String*, ::UnityEngine::TextGenerationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATEWITHERROR_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::TextGenerationError* PopulateAlways(::System::String* str, ::UnityEngine::TextGenerationSettings* arg)
		{
			return (return (::UnityEngine::TextGenerationError*(*)(::System::String*, ::UnityEngine::TextGenerationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATEALWAYS_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* get_verts()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_VERTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_characters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_CHARACTERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_lines()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_LINES_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_rectExtents()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_OFFSET))(nullptr);
		}

		::System::Int32 get_characterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_CHARACTERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_lineCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_LINECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 Internal_Create()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_INTERNAL_CREATE_OFFSET))(nullptr);
		}

		::System::Void Internal_Destroy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_INTERNAL_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Boolean Populate_Internal(::System::String* str, ::UnityEngine::Font* arg, ::UnityEngine::Color* arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::FontStyle* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::UnityEngine::TextAnchor* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::System::Boolean arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::Font*, ::UnityEngine::Color*, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::FontStyle*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::TextAnchor*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Populate_Internal(::System::String* str, ::UnityEngine::Font* arg, ::UnityEngine::Color* arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::FontStyle* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::VerticalWrapMode* arg, ::UnityEngine::HorizontalWrapMode* arg, ::System::Boolean arg, ::UnityEngine::TextAnchor* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::TextGenerationError&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::Font*, ::UnityEngine::Color*, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::FontStyle*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::UnityEngine::VerticalWrapMode*, ::UnityEngine::HorizontalWrapMode*, ::System::Boolean, ::UnityEngine::TextAnchor*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Boolean, ::System::Boolean, ::UnityEngine::TextGenerationError&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetVerticesInternal(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETVERTICESINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void GetCharactersInternal(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETCHARACTERSINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void GetLinesInternal(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GETLINESINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void get_rectExtents_Injected(::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_GET_RECTEXTENTS_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean Populate_Internal_Injected(::System::String* str, ::UnityEngine::Font* arg, ::UnityEngine::Color&* arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::FontStyle* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::UnityEngine::TextAnchor* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::System::Boolean arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::Font*, ::UnityEngine::Color&*, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::FontStyle*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::TextAnchor*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_POPULATE_INTERNAL_INJECTED_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

