#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class FontStyle; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_CHARACTERINFO_GET_ADVANCE_OFFSET UNITYSDK_OFFSET(0xA2E7E20)
#define UNITYENGINE_CHARACTERINFO_GET_MINY_OFFSET UNITYSDK_OFFSET(0xA2E7F00)
#define UNITYENGINE_CHARACTERINFO_GET_MAXY_OFFSET UNITYSDK_OFFSET(0xA2E7F40)
#define UNITYENGINE_CHARACTERINFO_GET_MINX_OFFSET UNITYSDK_OFFSET(0xA2E7F60)
#define UNITYENGINE_CHARACTERINFO_GET_MAXX_OFFSET UNITYSDK_OFFSET(0xA2E7F80)
#define UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMLEFTUNFLIPPED_OFFSET UNITYSDK_OFFSET(0xA2E7FC0)
#define UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMRIGHTUNFLIPPED_OFFSET UNITYSDK_OFFSET(0xA2E8010)
#define UNITYENGINE_CHARACTERINFO_GET_UVTOPRIGHTUNFLIPPED_OFFSET UNITYSDK_OFFSET(0xA2E8070)
#define UNITYENGINE_CHARACTERINFO_GET_UVTOPLEFTUNFLIPPED_OFFSET UNITYSDK_OFFSET(0xA2E80F0)
#define UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMLEFT_OFFSET UNITYSDK_OFFSET(0xA2E8150)
#define UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMRIGHT_OFFSET UNITYSDK_OFFSET(0xA2E81A0)
#define UNITYENGINE_CHARACTERINFO_GET_UVTOPRIGHT_OFFSET UNITYSDK_OFFSET(0xA2E8220)
#define UNITYENGINE_CHARACTERINFO_GET_UVTOPLEFT_OFFSET UNITYSDK_OFFSET(0xA2E82A0)

namespace UnityEngine
{
	inline static constexpr unsigned int CharacterInfo_TypeDefinitionIndex = 37669;

	class CharacterInfo : public Il2CppObject
	{
	public:
		::System::Int32 index; // 0x10
		::UnityEngine::Rect* uv; // 0x14
		::UnityEngine::Rect* vert; // 0x24
		::System::Single width; // 0x34
		::System::Int32 size; // 0x38
		::UnityEngine::FontStyle* style; // 0x3C
		::System::Boolean flipped; // 0x40

		::System::Int32 get_advance()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_ADVANCE_OFFSET))(nullptr);
		}

		::System::Int32 get_minY()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_MINY_OFFSET))(nullptr);
		}

		::System::Int32 get_maxY()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_MAXY_OFFSET))(nullptr);
		}

		::System::Int32 get_minX()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_MINX_OFFSET))(nullptr);
		}

		::System::Int32 get_maxX()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_MAXX_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_uvBottomLeftUnFlipped()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMLEFTUNFLIPPED_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_uvBottomRightUnFlipped()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMRIGHTUNFLIPPED_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_uvTopRightUnFlipped()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVTOPRIGHTUNFLIPPED_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_uvTopLeftUnFlipped()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVTOPLEFTUNFLIPPED_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_uvBottomLeft()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMLEFT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_uvBottomRight()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMRIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_uvTopRight()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVTOPRIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_uvTopLeft()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVTOPLEFT_OFFSET))(nullptr);
		}

	};
}

