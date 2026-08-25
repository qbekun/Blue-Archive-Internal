#pragma once
#include "unitysdk.h"

class UIEmblemParcel;

#define UIEMBLEMSCROLLVIEWCONTROLLER_REFRESHEQUIPMARK_OFFSET UNITYSDK_OFFSET(0x23EB7C0)
#define UIEMBLEMSCROLLVIEWCONTROLLER_FINDEMBLEM_OFFSET UNITYSDK_OFFSET(0x23EB8C0)
#define UIEMBLEMSCROLLVIEWCONTROLLER_SET_CURRENTSELECTEMBLEMID_OFFSET UNITYSDK_OFFSET(0x23EBBD0)
#define UIEMBLEMSCROLLVIEWCONTROLLER_GET_LOADEMBLEMONREFRESH_OFFSET UNITYSDK_OFFSET(0x23EBBE0)
#define UIEMBLEMSCROLLVIEWCONTROLLER_GET_CURRENTSELECTEMBLEMID_OFFSET UNITYSDK_OFFSET(0x23EBBF0)
#define UIEMBLEMSCROLLVIEWCONTROLLER_SET_LOADEMBLEMONREFRESH_OFFSET UNITYSDK_OFFSET(0x23EBC00)
#define UIEMBLEMSCROLLVIEWCONTROLLER_SET_CURRENTEQUIPEMBLEMID_OFFSET UNITYSDK_OFFSET(0x23EBC10)
#define UIEMBLEMSCROLLVIEWCONTROLLER_REFRESHSELECTMARK_OFFSET UNITYSDK_OFFSET(0x23EBC20)
#define UIEMBLEMSCROLLVIEWCONTROLLER_GET_CURRENTEQUIPEMBLEMID_OFFSET UNITYSDK_OFFSET(0x23EBD10)
#define UIEMBLEMSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x23EBD20)
#define UIEMBLEMSCROLLVIEWCONTROLLER_SETMARKONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x23EBD70)

	inline static constexpr unsigned int UIEmblemScrollViewController_TypeDefinitionIndex = 5399;

	class UIEmblemScrollViewController : public AttrName
	{
	public:
		Il2CppObject* _CurrentSelectEmblemId_k__BackingField; // 0x90
		Il2CppObject* _CurrentEquipEmblemId_k__BackingField; // 0xA0
		::System::Boolean _LoadEmblemOnRefresh_k__BackingField; // 0xB0

		::System::Void RefreshEquipMark()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMSCROLLVIEWCONTROLLER_REFRESHEQUIPMARK_OFFSET))(nullptr);
		}

		UIEmblemParcel* FindEmblem(::System::Int64 arg)
		{
			return ((UIEmblemParcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMSCROLLVIEWCONTROLLER_FINDEMBLEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentSelectEmblemId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMSCROLLVIEWCONTROLLER_SET_CURRENTSELECTEMBLEMID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_LoadEmblemOnRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMSCROLLVIEWCONTROLLER_GET_LOADEMBLEMONREFRESH_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurrentSelectEmblemId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMSCROLLVIEWCONTROLLER_GET_CURRENTSELECTEMBLEMID_OFFSET))(nullptr);
		}

		::System::Void set_LoadEmblemOnRefresh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMSCROLLVIEWCONTROLLER_SET_LOADEMBLEMONREFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentEquipEmblemId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMSCROLLVIEWCONTROLLER_SET_CURRENTEQUIPEMBLEMID_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSelectMark(UIEmblemParcel* arg)
		{
			((::System::Void(*)(UIEmblemParcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMSCROLLVIEWCONTROLLER_REFRESHSELECTMARK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CurrentEquipEmblemId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMSCROLLVIEWCONTROLLER_GET_CURRENTEQUIPEMBLEMID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetMarkOnInitialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMSCROLLVIEWCONTROLLER_SETMARKONINITIALIZE_OFFSET))(arg, nullptr);
		}

	};

