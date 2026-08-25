#pragma once
#include "unitysdk.h"

namespace FlatData { class FilterIcon; }
class UIWidget;
class UISprite;
class UILabel;
class UITexture;
class WidgetDisplayType;
namespace FlatData { class ParcelType; }
namespace FlatData { class School; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Color; }

#define UIFILTERUNITICON_GET_WIDGETINDEX_OFFSET UNITYSDK_OFFSET(0xAF4780)
#define UIFILTERUNITICON_SET_WIDGETINDEX_OFFSET UNITYSDK_OFFSET(0xAF4790)
#define UIFILTERUNITICON_ISICONMATCHED_OFFSET UNITYSDK_OFFSET(0xAF4750)
#define UIFILTERUNITICON_SETICONSPRITE_OFFSET UNITYSDK_OFFSET(0xAEBEA0)
#define UIFILTERUNITICON_SETICONSPRITE_OFFSET UNITYSDK_OFFSET(0xAED940)
#define UIFILTERUNITICON_SETICONTEXTURE_OFFSET UNITYSDK_OFFSET(0xAF47A0)
#define UIFILTERUNITICON_SETICONSCHOOLTEXTURE_OFFSET UNITYSDK_OFFSET(0xAECEF0)
#define UIFILTERUNITICON_SETICONMATERIAL_OFFSET UNITYSDK_OFFSET(0xAF1B40)
#define UIFILTERUNITICON_SETLABELWITHLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xAE9E40)
#define UIFILTERUNITICON_SETLABELWITHLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xAEE350)
#define UIFILTERUNITICON_SETLABEL_OFFSET UNITYSDK_OFFSET(0xAE9A60)
#define UIFILTERUNITICON_SETWIDGETINDEX_OFFSET UNITYSDK_OFFSET(0xAEFFE0)
#define UIFILTERUNITICON_SETICONBGCOLOR_OFFSET UNITYSDK_OFFSET(0xAEF890)
#define UIFILTERUNITICON_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF4840)

	inline static constexpr unsigned int UIFilterUnitIcon_TypeDefinitionIndex = 8140;

	class UIFilterUnitIcon : public Il2CppObject
	{
	public:
		::FlatData::FilterIcon* filterIcon; // 0x18
		UIWidget* iconBG; // 0x20
		UISprite* iconSprite; // 0x28
		UILabel* iconLabel; // 0x30
		UITexture* iconTexture; // 0x38
		::Il2CppArray<::System::Object*>* widgets; // 0x40
		WidgetDisplayType* widgetDisplayType; // 0x48
		::System::Int32 _WidgetIndex_k__BackingField; // 0x4C

		::System::Int32 get_WidgetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNITICON_GET_WIDGETINDEX_OFFSET))(nullptr);
		}

		::System::Void set_WidgetIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNITICON_SET_WIDGETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsIconMatched(::FlatData::FilterIcon* arg)
		{
			return ((::System::Boolean(*)(::FlatData::FilterIcon*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNITICON_ISICONMATCHED_OFFSET))(arg, nullptr);
		}

		::System::Void SetIconSprite(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNITICON_SETICONSPRITE_OFFSET))(str, nullptr);
		}

		::System::Void SetIconSprite(::FlatData::ParcelType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNITICON_SETICONSPRITE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetIconTexture(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNITICON_SETICONTEXTURE_OFFSET))(str, str2, nullptr);
		}

		::System::Void SetIconSchoolTexture(::FlatData::School* arg)
		{
			((::System::Void(*)(::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNITICON_SETICONSCHOOLTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetIconMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNITICON_SETICONMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetLabelWithLocalizeKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNITICON_SETLABELWITHLOCALIZEKEY_OFFSET))(str, nullptr);
		}

		::System::Void SetLabelWithLocalizeKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNITICON_SETLABELWITHLOCALIZEKEY_OFFSET))(arg, nullptr);
		}

		::System::Void SetLabel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNITICON_SETLABEL_OFFSET))(str, nullptr);
		}

		::System::Void SetWidgetIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNITICON_SETWIDGETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void SetIconBGColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNITICON_SETICONBGCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNITICON_.CTOR_OFFSET))(nullptr);
		}

	};

