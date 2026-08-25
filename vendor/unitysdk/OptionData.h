#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Sprite; }

#define OPTIONDATA_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xA2F6B40)
#define OPTIONDATA_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xA2F6B50)
#define OPTIONDATA_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0xA2F6B60)
#define OPTIONDATA_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0xA2F6B70)
#define OPTIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2F2350)
#define OPTIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2F3E30)
#define OPTIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2F3FD0)
#define OPTIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2F6B80)

	inline static constexpr unsigned int OptionData_TypeDefinitionIndex = 34759;

	class OptionData : public Il2CppObject
	{
	public:
		::System::String* m_Text; // 0x10
		::UnityEngine::Sprite* m_Image; // 0x18

		::System::String* get_text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIONDATA_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONDATA_SET_TEXT_OFFSET))(str, nullptr);
		}

		::UnityEngine::Sprite* get_image()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIONDATA_GET_IMAGE_OFFSET))(nullptr);
		}

		::System::Void set_image(::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONDATA_SET_IMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONDATA_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONDATA_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};

