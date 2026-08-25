#pragma once
#include "unitysdk.h"

#define BATTLEPLAYGUIDEINFO_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x2253D50)
#define BATTLEPLAYGUIDEINFO_SET_GUIDE_OFFSET UNITYSDK_OFFSET(0x2253D60)
#define BATTLEPLAYGUIDEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2253D70)
#define BATTLEPLAYGUIDEINFO_GET_GUIDE_OFFSET UNITYSDK_OFFSET(0x2253DB0)
#define BATTLEPLAYGUIDEINFO_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x2253DC0)
#define BATTLEPLAYGUIDEINFO_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x2253DD0)
#define BATTLEPLAYGUIDEINFO_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x2253DE0)

	inline static constexpr unsigned int BattlePlayGuideInfo_TypeDefinitionIndex = 4540;

	class BattlePlayGuideInfo : public Il2CppObject
	{
	public:
		::System::UInt32 _Title_k__BackingField; // 0x10
		::System::String* _ImagePath_k__BackingField; // 0x18
		::System::UInt32 _Guide_k__BackingField; // 0x20

		::System::Void set_ImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPLAYGUIDEINFO_SET_IMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_Guide(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPLAYGUIDEINFO_SET_GUIDE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::System::String* str, ::System::UInt32 arg2)
		{
			((::System::Void(*)(::System::UInt32, ::System::String*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPLAYGUIDEINFO_.CTOR_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::UInt32 get_Guide()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPLAYGUIDEINFO_GET_GUIDE_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPLAYGUIDEINFO_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		::System::UInt32 get_Title()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPLAYGUIDEINFO_GET_TITLE_OFFSET))(nullptr);
		}

		::System::Void set_Title(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPLAYGUIDEINFO_SET_TITLE_OFFSET))(arg, nullptr);
		}

	};

