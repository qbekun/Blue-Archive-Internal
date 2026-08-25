#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_CREATEASSETMENUATTRIBUTE_SET_MENUNAME_OFFSET UNITYSDK_OFFSET(0xA22E940)
#define UNITYENGINE_CREATEASSETMENUATTRIBUTE_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0xA22E950)
#define UNITYENGINE_CREATEASSETMENUATTRIBUTE_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xA22E960)
#define UNITYENGINE_CREATEASSETMENUATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22E970)

namespace UnityEngine
{
	inline static constexpr unsigned int CreateAssetMenuAttribute_TypeDefinitionIndex = 31135;

	class CreateAssetMenuAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _menuName_k__BackingField; // 0x10
		::System::String* _fileName_k__BackingField; // 0x18
		::System::Int32 _order_k__BackingField; // 0x20

		::System::Void set_menuName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CREATEASSETMENUATTRIBUTE_SET_MENUNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_fileName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CREATEASSETMENUATTRIBUTE_SET_FILENAME_OFFSET))(str, nullptr);
		}

		::System::Void set_order(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CREATEASSETMENUATTRIBUTE_SET_ORDER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CREATEASSETMENUATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

