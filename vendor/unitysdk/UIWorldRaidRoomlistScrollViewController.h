#pragma once
#include "unitysdk.h"

#define UIWORLDRAIDROOMLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC09E00)
#define UIWORLDRAIDROOMLISTSCROLLVIEWCONTROLLER_SET_SELECTEDROOMINDEX_OFFSET UNITYSDK_OFFSET(0xC09E40)
#define UIWORLDRAIDROOMLISTSCROLLVIEWCONTROLLER_GETSELECTEDLOCALBOSSID_OFFSET UNITYSDK_OFFSET(0xC09E50)
#define UIWORLDRAIDROOMLISTSCROLLVIEWCONTROLLER_GET_SELECTEDROOMINDEX_OFFSET UNITYSDK_OFFSET(0xC09EB0)
#define UIWORLDRAIDROOMLISTSCROLLVIEWCONTROLLER_ONSELECTMARK_OFFSET UNITYSDK_OFFSET(0xC09980)

	inline static constexpr unsigned int UIWorldRaidRoomlistScrollViewController_TypeDefinitionIndex = 8803;

	class UIWorldRaidRoomlistScrollViewController : public ::System::Xml::IXmlNamespaceResolver
	{
	public:
		::System::Int32 _SelectedRoomIndex_k__BackingField; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SelectedRoomIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLISTSCROLLVIEWCONTROLLER_SET_SELECTEDROOMINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetSelectedLocalBossID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLISTSCROLLVIEWCONTROLLER_GETSELECTEDLOCALBOSSID_OFFSET))(nullptr);
		}

		::System::Int32 get_SelectedRoomIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLISTSCROLLVIEWCONTROLLER_GET_SELECTEDROOMINDEX_OFFSET))(nullptr);
		}

		::System::Void OnSelectMark(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLISTSCROLLVIEWCONTROLLER_ONSELECTMARK_OFFSET))(arg, nullptr);
		}

	};

