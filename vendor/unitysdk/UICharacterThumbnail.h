#pragma once
#include "unitysdk.h"

class UITexture;
class CharacterObject;

#define UICHARACTERTHUMBNAIL_GET_THUMBNAIL_OFFSET UNITYSDK_OFFSET(0x22064B0)
#define UICHARACTERTHUMBNAIL_SETDATA_OFFSET UNITYSDK_OFFSET(0x2206570)
#define UICHARACTERTHUMBNAIL_SETDATA_OFFSET UNITYSDK_OFFSET(0x2206650)
#define UICHARACTERTHUMBNAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x22066D0)

	inline static constexpr unsigned int UICharacterThumbnail_TypeDefinitionIndex = 4329;

	class UICharacterThumbnail : public Il2CppObject
	{
	public:
		UITexture* thumbnail; // 0x18

		UITexture* get_Thumbnail()
		{
			return ((UITexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERTHUMBNAIL_GET_THUMBNAIL_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERTHUMBNAIL_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERTHUMBNAIL_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERTHUMBNAIL_.CTOR_OFFSET))(nullptr);
		}

	};

