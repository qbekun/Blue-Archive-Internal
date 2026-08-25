#pragma once
#include "unitysdk.h"

class UISpriteData;

#define UISPRITEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x243F400)
#define UISPRITEDATA_GET_HASPADDING_OFFSET UNITYSDK_OFFSET(0x243F450)
#define UISPRITEDATA_SETPADDING_OFFSET UNITYSDK_OFFSET(0x243F470)
#define UISPRITEDATA_COPYBORDERFROM_OFFSET UNITYSDK_OFFSET(0x243F490)
#define UISPRITEDATA_SETRECT_OFFSET UNITYSDK_OFFSET(0x243F4C0)
#define UISPRITEDATA_SETBORDER_OFFSET UNITYSDK_OFFSET(0x243F4E0)
#define UISPRITEDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x243F500)
#define UISPRITEDATA_GET_HASBORDER_OFFSET UNITYSDK_OFFSET(0x243A620)

	inline static constexpr unsigned int UISpriteData_TypeDefinitionIndex = 261;

	class UISpriteData : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::Int32 x; // 0x18
		::System::Int32 y; // 0x1C
		::System::Int32 width; // 0x20
		::System::Int32 height; // 0x24
		::System::Int32 borderLeft; // 0x28
		::System::Int32 borderRight; // 0x2C
		::System::Int32 borderTop; // 0x30
		::System::Int32 borderBottom; // 0x34
		::System::Int32 paddingLeft; // 0x38
		::System::Int32 paddingRight; // 0x3C
		::System::Int32 paddingTop; // 0x40
		::System::Int32 paddingBottom; // 0x44

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_hasPadding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITEDATA_GET_HASPADDING_OFFSET))(nullptr);
		}

		::System::Void SetPadding(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITEDATA_SETPADDING_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void CopyBorderFrom(UISpriteData* arg)
		{
			((::System::Void(*)(UISpriteData*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITEDATA_COPYBORDERFROM_OFFSET))(arg, nullptr);
		}

		::System::Void SetRect(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITEDATA_SETRECT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetBorder(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITEDATA_SETBORDER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void CopyFrom(UISpriteData* arg)
		{
			((::System::Void(*)(UISpriteData*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITEDATA_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasBorder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITEDATA_GET_HASBORDER_OFFSET))(nullptr);
		}

	};

