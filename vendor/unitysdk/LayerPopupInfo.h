#pragma once
#include "unitysdk.h"

#define LAYERPOPUPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2704A60)
#define LAYERPOPUPINFO_SET_TITLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x2704AE0)
#define LAYERPOPUPINFO_SET_ICONNAME_OFFSET UNITYSDK_OFFSET(0x2704AF0)
#define LAYERPOPUPINFO_GET_NEEDICON_OFFSET UNITYSDK_OFFSET(0x2704B00)
#define LAYERPOPUPINFO_GET_TITLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x2704B10)
#define LAYERPOPUPINFO_SET_OPENERLIST_OFFSET UNITYSDK_OFFSET(0x2704B20)
#define LAYERPOPUPINFO_SET_NEEDICON_OFFSET UNITYSDK_OFFSET(0x2704B30)
#define LAYERPOPUPINFO_GET_ICONNAME_OFFSET UNITYSDK_OFFSET(0x2704B40)
#define LAYERPOPUPINFO_GET_OPENERLIST_OFFSET UNITYSDK_OFFSET(0x2704B50)

	inline static constexpr unsigned int LayerPopupInfo_TypeDefinitionIndex = 7091;

	class LayerPopupInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _OpenerList_k__BackingField; // 0x10
		::System::Boolean _NeedIcon_k__BackingField; // 0x18
		::System::String* _IconName_k__BackingField; // 0x20
		::System::String* _TitleLocalizeKey_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERPOPUPINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TitleLocalizeKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LAYERPOPUPINFO_SET_TITLELOCALIZEKEY_OFFSET))(str, nullptr);
		}

		::System::Void set_IconName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LAYERPOPUPINFO_SET_ICONNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_NeedIcon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERPOPUPINFO_GET_NEEDICON_OFFSET))(nullptr);
		}

		::System::String* get_TitleLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERPOPUPINFO_GET_TITLELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Void set_OpenerList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LAYERPOPUPINFO_SET_OPENERLIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_NeedIcon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LAYERPOPUPINFO_SET_NEEDICON_OFFSET))(arg, nullptr);
		}

		::System::String* get_IconName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERPOPUPINFO_GET_ICONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_OpenerList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERPOPUPINFO_GET_OPENERLIST_OFFSET))(nullptr);
		}

	};

